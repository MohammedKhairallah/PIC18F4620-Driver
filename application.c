/* 
 * File:   application.c
 * Author: Mohammed Khairallah
 * linkedin : linkedin.com/in/mohammed-khairallah
 * Created on August 20, 2023, 1:35 PM
 */

#include "application.h"

int main(){
    application_intialize();  /* Make initialization for all hardware */
    
    while(1){
        
    }
    return (EXIT_SUCCESS);
}
void application_intialize(void)
{
    ecu_layer_intialize();  // Initialize ECU layer
    mcal_layer_intialize(); // Initialize MCAL layer
}
