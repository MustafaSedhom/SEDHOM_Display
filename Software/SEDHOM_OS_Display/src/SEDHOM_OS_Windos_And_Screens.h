#ifndef SCREENS_H
#define SCREENS_H

#include "SEDHOM_OS_data_type.h"
// #include "SEDHOM_OS_variable_for_system.h"
#include "SEDHOM_OS_variable_for_system.h"
#include "SEDHOM_OS_Icons_And_Widgets.h"

#define SEDHOM_OS_Icons_t      extern Icons_t
#define SEDHOM_OS_Icon         Icon
#define SEDHOM_OS_Display_t    extern UTFTGLUE
#define SEDHOM_OS_Display      Display

#define Boud_Rate    9600
#define SEDHOM_OS_Device_Start_Comunication()     Serial.begin(Boud_Rate);

extern Icons_t Icon ;
extern int pixel_x;
extern int pixel_y;
extern int pixel_z;

void init_Rotation_and_mode(int Rotation = Horizontal , Color_t Mode = Night_Mode);

void send_command_to_terminal(word_t Command);
void Setting_screen();
void main_Screen();
void WIFI_Settings_window();
void start_screen();
void lock_screen();
void color_setting_Window();
void LCD_3D_Controll_Axis_Screen();
void BLE_Settings_window();
void Add_new_WIFI_Window();
void Switch_screen();
void Sensor_screen();
void Slider_screen();
void SD_Card_screen();
void Terminal_screen();
void ADD_screen();
void Full_KeyBoard_window();
void Numeric_KeyBoard_window();
void Time_setting_window();
void Date_setting_window();
void warning_window();
void Timer_clock_screen();
//touch 
bool Is_Touch_Presssed();
int touch_get_X_point();
int touch_get_Y_point();
int touch_get_Z_point();

//
word_t Full_KeyBoard_window_touch();
word_t Numeric_KeyBoard_window_touch();
void Switch_screen_touch();
void timer_screen_touch();
void slider_screen_touch();









#endif // SCREENS_H








