# Home Assistant & SenseCAP Indicator & 2-channle relay

<p align="left">
  <a href="https://docs.espressif.com/projects/esp-idf/en/release-v5.1/esp32/">
    <img src="https://img.shields.io/badge/esp--idf-v5.1-00b202" alt="idf-version">
  </a>
</p>

![image](https://github.com/user-attachments/assets/e2406110-3103-42e0-9630-7ec706c10cfc)

![image](https://github.com/user-attachments/assets/a93c8d6d-9f9f-48e3-95b4-caeb452f26b6)

## MQTT

The wiki for `MQTT` method is provided: [SenseCAP Indicator - Home Assistant Application Development](https://wiki.seeedstudio.com/SenseCAP_Indicator_Application_Home_Assistant/)

### Features

- [x] Wi-Fi Panel - Connect Wi-Fi via screen
- [x] Display config - Control the intensity of the screen
- [x] Home Assistant data - Display Sensor data
- [x] Home Assistant control - the control widgets

Add the following to the raw configuration editor of the dashboard.

```yaml
views:
  - path: default_view
    title: Home
    cards:
      - type: entities
        entities:
          - switch.seeedstudio_relay_f746b8_relay_1_control
          - switch.seeedstudio_relay_f746b8_relay_2_control
          - sensor.seeedstudio_relay_f746b8_socket_current
          - sensor.seeedstudio_relay_f746b8_socket_energy
          - sensor.seeedstudio_relay_f746b8_socket_frequency
          - sensor.seeedstudio_relay_f746b8_socket_power
          - sensor.seeedstudio_relay_f746b8_socket_voltage
        title: Bedroom
      - type: sensor
        graph: line
        detail: 1
        icon: mdi:molecule-co2
        unit: ppm
        entity: sensor.indicator_co2
      - type: sensor
        graph: line
        entity: sensor.indicator_temperature
        detail: 1
        icon: mdi:coolant-temperature
      - type: sensor
        graph: line
        detail: 1
        entity: sensor.indicator_humidity
      - type: sensor
        graph: line
        entity: sensor.indicator_tvoc
        detail: 1
        icon: mdi:air-filter
      - type: entities
        entities:
          - entity: switch.indicator_switch1
          - entity: switch.indicator_switch2
          - entity: switch.indicator_switch3
          - entity: switch.indicator_switch4
          - entity: number.indicator_switch5
          - entity: switch.indicator_switch6
          - entity: switch.indicator_switch7
          - entity: number.indicator_switch8
        title: Indicator control
        show_header_toggle: false
        state_color: true
```

### Configuration.yaml

```yaml
# SenseCAP Indicator MQTT Configuration
mqtt:
  sensor:
    - unique_id: indicator_temperature
      name: "Indicator Temperature"
      state_topic: "indicator/sensor"
      suggested_display_precision: 1
      unit_of_measurement: "°C"
      value_template: "{{ value_json.temp }}"
    - unique_id: indicator_humidity
      name: "Indicator Humidity"
      state_topic: "indicator/sensor"
      unit_of_measurement: "%"
      value_template: "{{ value_json.humidity }}"
    - unique_id: indicator_co2
      name: "Indicator CO2"
      state_topic: "indicator/sensor"
      unit_of_measurement: "ppm"
      value_template: "{{ value_json.co2 }}"
    - unique_id: indicator_tvoc
      name: "Indicator tVOC"
      state_topic: "indicator/sensor"
      unit_of_measurement: ""
      value_template: "{{ value_json.tvoc }}"
    - unique_id: indicator_current
      name: "Indicator Current"
      state_topic: "indicator/sensor"
      unit_of_measurement: ""
      value_template: "{{ value_json.current }}"
    - unique_id: indicator_energy
      name: "Indicator Energy"
      state_topic: "indicator/sensor"
      unit_of_measurement: ""
      value_template: "{{ value_json.energy }}"
  switch:
    - unique_id: indicator_switch1
      name: "Indicator Switch1"
      state_topic: "indicator/switch/state"
      command_topic: "indicator/switch/set"
      value_template: "{{ value_json.switch1 }}"
      payload_on: '{"switch1":1}'
      payload_off: '{"switch1":0}'
      state_on: 1
      state_off: 0
    - unique_id: indicator_switch2
      name: "Indicator Switch2"
      state_topic: "indicator/switch/state"
      command_topic: "indicator/switch/set"
      value_template: "{{ value_json.switch2 }}"
      payload_on: '{"switch2":1}'
      payload_off: '{"switch2":0}'
      state_on: 1
      state_off: 0
    - unique_id: indicator_switch3
      name: "Indicator Switch3"
      state_topic: "indicator/switch/state"
      command_topic: "indicator/switch/set"
      value_template: "{{ value_json.switch3 }}"
      payload_on: '{"switch3":1}'
      payload_off: '{"switch3":0}'
      state_on: 1
      state_off: 0
    - unique_id: indicator_switch4
      name: "Indicator Switch4"
      state_topic: "indicator/switch/state"
      command_topic: "indicator/switch/set"
      value_template: "{{ value_json.switch4 }}"
      payload_on: '{"switch4":1}'
      payload_off: '{"switch4":0}'
      state_on: 1
      state_off: 0
    - unique_id: indicator_switch6
      name: "Indicator Switch6"
      state_topic: "indicator/switch/state"
      command_topic: "indicator/switch/set"
      value_template: "{{ value_json.switch6 }}"
      payload_on: '{"switch6":1}'
      payload_off: '{"switch6":0}'
      state_on: 1
      state_off: 0
    - unique_id: indicator_switch7
      name: "Indicator Switch7"
      state_topic: "indicator/switch/state"
      command_topic: "indicator/switch/set"
      value_template: "{{ value_json.switch7 }}"
      payload_on: '{"switch7":1}'
      payload_off: '{"switch7":0}'
      state_on: 1
      state_off: 0
  number:
    - unique_id: indicator_switch5
      name: "Indicator Switch5"
      state_topic: "indicator/switch/state"
      command_topic: "indicator/switch/set"
      command_template: '{"switch5": {{ value }} }'
      value_template: "{{ value_json.switch5 }}"
    - unique_id: indicator_switch8
      name: "Indicator Switch8"
      state_topic: "indicator/switch/state"
      command_topic: "indicator/switch/set"
      command_template: '{"switch8": {{ value }} }'
      value_template: "{{ value_json.switch8 }}"
```

### Automation.yaml

`f746b8` is the mac of your device, remember to replace it with yours.

```yaml
- id: sync_indicator_switch1_to_relay1
  alias: Indicator - Switch 1 to Indicator 1
  description: Sync Switch 1 with Relay 1
  trigger:
  - platform: state
    entity_id: switch.indicator_switch1
  action:
  - service: switch.turn_{{ trigger.to_state.state }}
    target:
      entity_id: switch.seeedstudio_relay_f746b8_relay_1_control
  mode: single
- id: sync_indicator_switch2_to_relay2
  alias: Sync Indicator Switch 2 to Relay 2
  description: Sync Switch 2 with Relay 2
  trigger:
  - platform: state
    entity_id: switch.indicator_switch2
  action:
  - service: switch.turn_{{ trigger.to_state.state }}
    target:
      entity_id: switch.seeedstudio_relay_f746b8_relay_2_control
  mode: single
- id: relay_indicator_1
  alias: Relay 1 to Indicator 1
  description: ''
  trigger:
  - platform: state
    entity_id: switch.seeedstudio_relay_f746b8_relay_1_control
  action:
  - service: switch.turn_{{ trigger.to_state.state }}
    target:
      entity_id: switch.indicator_switch1
  mode: single
- id: relay_indicator_2
  alias: Relay 2 to Indicator 2
  description: ''
  trigger:
  - platform: state
    entity_id: switch.seeedstudio_relay_f746b8_relay_2_control
  action:
  - service: switch.turn_{{ trigger.to_state.state }}
    target:
      entity_id: switch.indicator_switch2
  mode: single
- id: '1732758301644'
  alias: current sync
  description: ''
  trigger:
  - platform: state
    entity_id:
    - sensor.seeedstudio_relay_f746b8_socket_current
  condition: []
  action:
  - action: mqtt.publish
    metadata: {}
    data:
      qos: '0'
      topic: indicator/sensor
      payload: '{"current":"{{ trigger.to_state.state }}"}'
  mode: single
- id: '1732761473149'
  alias: sync energy
  description: ''
  trigger:
  - platform: state
    entity_id:
    - sensor.seeedstudio_relay_f746b8_socket_energy
  condition: []
  action:
  - action: mqtt.publish
    metadata: {}
    data:
      qos: '0'
      topic: indicator/sensor
      payload: '{"energy":"{{ trigger.to_state.state }}"}'
      retain: false
  mode: single
```
