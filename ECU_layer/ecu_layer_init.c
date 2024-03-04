/* 
 * File:   ecu_layer_init.c
 * Author: Mohammed Khairallah
 * linkedin : linkedin.com/in/mohammed-khairallah
 * Created on September 27, 2023, 12:16 PM
 */
#include"ecu_layer_init.h"
/*
 * Example:
dc_motor_t dc_motor_01 = {
    .dc_motor_pin[0].port      = PORTB_INDEX,
    .dc_motor_pin[0].pin       = GPIO_PIN0,
    .dc_motor_pin[0].logic     = DC_MOTOR_OFF_STATUS,
    .dc_motor_pin[0].direction = GPIO_direction_OUTPUT,
    .dc_motor_pin[1].port      = PORTB_INDEX,
    .dc_motor_pin[1].pin       = GPIO_PIN1,
    .dc_motor_pin[1].logic     = DC_MOTOR_OFF_STATUS,
    .dc_motor_pin[1].direction = GPIO_direction_OUTPUT
};
*/
void ecu_layer_intialize(void)
{
    Std_ReturnType ret = E_OK;
    /*
    *Example:
    ret = dc_motor_initialize(&dc_motor_01);
    */
}
