// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: indicator_ha

#include "../ui.h"

void ui_screen_display_screen_init(void)
{
    ui_screen_display = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_screen_display, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_sleep_mode_time = lv_obj_create(ui_screen_display);
    lv_obj_set_width(ui_sleep_mode_time, 400);
    lv_obj_set_height(ui_sleep_mode_time, 50);
    lv_obj_set_x(ui_sleep_mode_time, 0);
    lv_obj_set_y(ui_sleep_mode_time, 60);
    lv_obj_set_align(ui_sleep_mode_time, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_sleep_mode_time, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_sleep_mode_time, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_after1 = lv_label_create(ui_sleep_mode_time);
    lv_obj_set_width(ui_after1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_after1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_after1, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_after1, "After");

    ui_sleep_mode_time_cfg = lv_textarea_create(ui_sleep_mode_time);
    lv_obj_set_width(ui_sleep_mode_time_cfg, 60);
    lv_obj_set_height(ui_sleep_mode_time_cfg, 40);
    lv_obj_set_x(ui_sleep_mode_time_cfg, -50);
    lv_obj_set_y(ui_sleep_mode_time_cfg, 0);
    lv_obj_set_align(ui_sleep_mode_time_cfg, LV_ALIGN_RIGHT_MID);
    lv_textarea_set_max_length(ui_sleep_mode_time_cfg, 128);
    lv_textarea_set_placeholder_text(ui_sleep_mode_time_cfg, "1");
    lv_obj_set_style_bg_color(ui_sleep_mode_time_cfg, lv_color_hex(0x6F6F6F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_sleep_mode_time_cfg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);



    ui_min1 = lv_label_create(ui_sleep_mode_time);
    lv_obj_set_width(ui_min1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_min1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_min1, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_min1, "min");

    ui_sleep_mode = lv_obj_create(ui_screen_display);
    lv_obj_set_width(ui_sleep_mode, 400);
    lv_obj_set_height(ui_sleep_mode, 50);
    lv_obj_set_x(ui_sleep_mode, 0);
    lv_obj_set_y(ui_sleep_mode, 10);
    lv_obj_set_align(ui_sleep_mode, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_sleep_mode, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_sleep_mode_title = lv_label_create(ui_sleep_mode);
    lv_obj_set_width(ui_sleep_mode_title, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_sleep_mode_title, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_sleep_mode_title, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_sleep_mode_title, "Sleep Mode");

    ui_sleep_mode_cfg = lv_switch_create(ui_sleep_mode);
    lv_obj_set_width(ui_sleep_mode_cfg, 50);
    lv_obj_set_height(ui_sleep_mode_cfg, 25);
    lv_obj_set_align(ui_sleep_mode_cfg, LV_ALIGN_RIGHT_MID);
    lv_obj_set_style_bg_color(ui_sleep_mode_cfg, lv_color_hex(0x363636), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_sleep_mode_cfg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_sleep_mode_cfg, lv_color_hex(0xFFFFFF),
                              LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_sleep_mode_cfg, 255, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);

    lv_obj_set_style_bg_color(ui_sleep_mode_cfg, lv_color_hex(0x529D53), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_sleep_mode_cfg, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);

    ui_brighness1 = lv_obj_create(ui_screen_display);
    lv_obj_set_width(ui_brighness1, 400);
    lv_obj_set_height(ui_brighness1, 100);
    lv_obj_set_x(ui_brighness1, 0);
    lv_obj_set_y(ui_brighness1, -80);
    lv_obj_set_align(ui_brighness1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_brighness1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_brighness_cfg = lv_slider_create(ui_brighness1);
    lv_slider_set_value(ui_brighness_cfg, 45, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_brighness_cfg) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_brighness_cfg, 0,
                                                                                                  LV_ANIM_OFF);
    lv_obj_set_width(ui_brighness_cfg, 250);
    lv_obj_set_height(ui_brighness_cfg, 10);
    lv_obj_set_x(ui_brighness_cfg, 0);
    lv_obj_set_y(ui_brighness_cfg, 10);
    lv_obj_set_align(ui_brighness_cfg, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_brighness_cfg, lv_color_hex(0x363636), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_brighness_cfg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_brighness_cfg, lv_color_hex(0x529D53), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_brighness_cfg, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_brighness_cfg, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_brighness_cfg, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_brighness_title = lv_label_create(ui_brighness1);
    lv_obj_set_width(ui_brighness_title, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_brighness_title, LV_SIZE_CONTENT);    /// 1
    lv_label_set_text(ui_brighness_title, "Brightness");

    ui_brighness_icon_3 = lv_img_create(ui_brighness1);
    lv_img_set_src(ui_brighness_icon_3, &ui_img_high_light_png);
    lv_obj_set_width(ui_brighness_icon_3, LV_SIZE_CONTENT);   /// 22
    lv_obj_set_height(ui_brighness_icon_3, LV_SIZE_CONTENT);    /// 22
    lv_obj_set_x(ui_brighness_icon_3, 0);
    lv_obj_set_y(ui_brighness_icon_3, 10);
    lv_obj_set_align(ui_brighness_icon_3, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_brighness_icon_3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_brighness_icon_3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_brighness_icon_4 = lv_img_create(ui_brighness1);
    lv_img_set_src(ui_brighness_icon_4, &ui_img_low_light_png);
    lv_obj_set_width(ui_brighness_icon_4, LV_SIZE_CONTENT);   /// 18
    lv_obj_set_height(ui_brighness_icon_4, LV_SIZE_CONTENT);    /// 18
    lv_obj_set_x(ui_brighness_icon_4, 0);
    lv_obj_set_y(ui_brighness_icon_4, 10);
    lv_obj_set_align(ui_brighness_icon_4, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_brighness_icon_4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_brighness_icon_4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_display_keyboard = lv_keyboard_create(ui_screen_display);
    lv_keyboard_set_mode(ui_display_keyboard, LV_KEYBOARD_MODE_NUMBER);
    lv_obj_set_width(ui_display_keyboard, 200);
    lv_obj_set_height(ui_display_keyboard, 120);
    lv_obj_set_x(ui_display_keyboard, 8);
    lv_obj_set_y(ui_display_keyboard, 150);
    lv_obj_set_align(ui_display_keyboard, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_display_keyboard, LV_OBJ_FLAG_HIDDEN);     /// Flags

    ui_display_title1 = lv_label_create(ui_screen_display);
    lv_obj_set_width(ui_display_title1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_display_title1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_display_title1, 1);
    lv_obj_set_y(ui_display_title1, 50);
    lv_obj_set_align(ui_display_title1, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_display_title1, "Display");
    lv_obj_set_style_text_font(ui_display_title1, &ui_font_font0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_back3 = lv_btn_create(ui_screen_display);
    lv_obj_set_width(ui_back3, 100);
    lv_obj_set_height(ui_back3, 50);
    lv_obj_set_x(ui_back3, 10);
    lv_obj_set_y(ui_back3, 30);
    lv_obj_add_flag(ui_back3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_back3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_back3, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_back3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_back3, &ui_img_back_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_sleep_mode_time_cfg, ui_event_sleep_mode_time_cfg, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_sleep_mode_cfg, ui_event_sleep_mode_cfg, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_brighness_cfg, ui_event_brighness_cfg, LV_EVENT_ALL, NULL);
    lv_keyboard_set_textarea(ui_display_keyboard, ui_sleep_mode_time_cfg);
    lv_obj_add_event_cb(ui_display_keyboard, ui_event_display_keyboard, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_back3, ui_event_back3, LV_EVENT_ALL, NULL);

}
