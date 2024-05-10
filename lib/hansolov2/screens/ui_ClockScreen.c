// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: han-wt32

#include "../ui.h"

void ui_ClockScreen_screen_init(void)
{
    ui_ClockScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ClockScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_ClockScreen, &ui_img_sky_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label18 = lv_label_create(ui_ClockScreen);
    lv_obj_set_width(ui_Label18, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label18, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label18, -177);
    lv_obj_set_y(ui_Label18, -131);
    lv_obj_set_align(ui_Label18, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label18, "Clock");
    lv_obj_set_style_text_color(ui_Label18, lv_color_hex(0xFAFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label18, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label18, &ui_font_star32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnpre3 = lv_btn_create(ui_ClockScreen);
    lv_obj_set_width(ui_btnpre3, 100);
    lv_obj_set_height(ui_btnpre3, 50);
    lv_obj_set_x(ui_btnpre3, -177);
    lv_obj_set_y(ui_btnpre3, 124);
    lv_obj_set_align(ui_btnpre3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnpre3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnpre3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_btnpre3, lv_color_hex(0x2EFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnpre3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnconfirm3 = lv_btn_create(ui_ClockScreen);
    lv_obj_set_width(ui_btnconfirm3, 100);
    lv_obj_set_height(ui_btnconfirm3, 50);
    lv_obj_set_x(ui_btnconfirm3, -59);
    lv_obj_set_y(ui_btnconfirm3, 124);
    lv_obj_set_align(ui_btnconfirm3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnconfirm3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnconfirm3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_btnconfirm3, lv_color_hex(0xFAFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnconfirm3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnpost3 = lv_btn_create(ui_ClockScreen);
    lv_obj_set_width(ui_btnpost3, 100);
    lv_obj_set_height(ui_btnpost3, 50);
    lv_obj_set_x(ui_btnpost3, 60);
    lv_obj_set_y(ui_btnpost3, 124);
    lv_obj_set_align(ui_btnpost3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnpost3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnpost3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_btnpost3, lv_color_hex(0xFF9400), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnpost3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btndelete3 = lv_btn_create(ui_ClockScreen);
    lv_obj_set_width(ui_btndelete3, 100);
    lv_obj_set_height(ui_btndelete3, 50);
    lv_obj_set_x(ui_btndelete3, 183);
    lv_obj_set_y(ui_btndelete3, 124);
    lv_obj_set_align(ui_btndelete3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btndelete3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btndelete3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_btndelete3, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btndelete3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblclock2 = lv_label_create(ui_ClockScreen);
    lv_obj_set_width(ui_lblclock2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblclock2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblclock2, -6);
    lv_obj_set_y(ui_lblclock2, -28);
    lv_obj_set_align(ui_lblclock2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblclock2, "00:00:00");
    lv_obj_set_style_text_color(ui_lblclock2, lv_color_hex(0xFAFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblclock2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblclock2, &ui_font_calculator128, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label15 = lv_label_create(ui_ClockScreen);
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label15, -179);
    lv_obj_set_y(ui_Label15, 126);
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label15, "Pre");
    lv_obj_set_style_text_color(ui_Label15, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label17 = lv_label_create(ui_ClockScreen);
    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label17, 59);
    lv_obj_set_y(ui_Label17, 126);
    lv_obj_set_align(ui_Label17, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label17, "Post");
    lv_obj_set_style_text_color(ui_Label17, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_btnpre3, ui_event_btnpre3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnpost3, ui_event_btnpost3, LV_EVENT_ALL, NULL);

}
