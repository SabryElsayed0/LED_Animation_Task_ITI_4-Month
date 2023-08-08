/****************************************************************/
/****   Author :  Sabry                   ***********************/
/****   SWC:      LEDS_Annimation_Assighnement ******************/
/****   Date :    3/8/2023        *******************************/
/****   Version : 1.00                ***************************/
/***************************************************************/
#include "LIB/STD_TYPES.h"
#include "LIB/BIT_MATH.h"
#include "MCAL/DIO/DIO_interface.h"
#include "HAL/LED/LED_interface.h"
#include "HAL/SSD/SSD_interface.h"
#include "SERVICES/LEDS/LEDS_Services.h"
#define F_CPU    8000000UL
#include <util/delay.h>
#define sw1   0
#define sw2   1
#define sw3   2
#define sw4   3
#define sw5   4
#define sw6   5
#define sw7   6
#define sw8   7

/**************************decleration array of leds***************/
 LED_t  Leds[8] ={{DIO_PORTA , DIO_PIN0 , LED_ACTIVE_HIGH},
		          {DIO_PORTA , DIO_PIN1 , LED_ACTIVE_HIGH},
		          {DIO_PORTA , DIO_PIN2 , LED_ACTIVE_HIGH},
                  {DIO_PORTA , DIO_PIN3 , LED_ACTIVE_HIGH},
                  {DIO_PORTA , DIO_PIN4 , LED_ACTIVE_HIGH},
                  {DIO_PORTA , DIO_PIN5 , LED_ACTIVE_HIGH},
                  {DIO_PORTA , DIO_PIN6 , LED_ACTIVE_HIGH},
                  {DIO_PORTA , DIO_PIN7 , LED_ACTIVE_HIGH}};
 /*******************************************************************/

int main(void)
{
//initialize traffic leds
for(s8 i = 0 ; i < 8 ; i++)
{
	LED_voidInit(&Leds[i]);

}

DIO_voidSetPortDirection(DIO_PORTB , DIO_INPUT);
DIO_voidSetPortValue(DIO_PORTB , 0xff);
s8 switch_value = -1;
while(1)
{

    for(s8 i = sw1 ; i < (sw8 + 1) ; i++)
    {
    	if(DIO_u8GetPinValue(DIO_PORTB , i) == 0)
    	{
    		switch_value = i;
    		break;
    	}
    	else
    	{
    		 switch_value = -1;
    	}

    }

    switch(switch_value)
    {
    case sw1 :
    	Flasing_Voidevey_500ms(Leds);
	break;
    case sw2 :
    	Shifting_VoidLeft_Every_250ms(Leds);
  	break;
    case sw3 :
    	Shifting_VoidRight_Every_250ms(Leds);
  	break;
    case  sw4 :
    	Leds_VoidConverging_Every_300ms(Leds);
  	break;
    case sw5 :
    	Leds_VoidDiverging_Every_300ms(Leds);
  	break;
    case sw6 :
    	Leds_VoidPingPong_Every_250ms(Leds);
  	break;
    case sw7 :
    	Leds_VoidSnakeEffect_Every_300ms(Leds);
  	break;
    case sw8:
    	Leds_VoidConverging_And_Diverging_Every_300ms(Leds);
     break;
    default:
    	for(s8 i = 0 ; i < 8 ; i++)
		{
			LED_voidOff(&Leds[i]);

		}
    break;
    }
}


  return 0;
}




