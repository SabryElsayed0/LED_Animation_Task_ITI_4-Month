#include  "../../LIB/STD_TYPES.h"
#include "../../HAL/LED/LED_interface.h"
#define F_CPU    8000000UL
#include <util/delay.h>
void Flasing_Voidevey_500ms(LED_t * led)
{
	for(s8 i = 0 ; i < 8 ; i++)
	{
		LED_voidOn(&led[i]);

	}
	_delay_ms(500);
	for(s8 i = 0 ; i < 8 ; i++)
	{

	   LED_voidOff(&led[i]);
	}
	_delay_ms(500);
}
/************************************************************************/
void Shifting_VoidLeft_Every_250ms(LED_t * led)
{

	for(s8 i = 0 ; i < 8 ; i++)
	{
		LED_voidOn(&led[i]);
		_delay_ms(250);
		LED_voidOff(&led[i]);
	}

}
/*********************************************************************/
void Shifting_VoidRight_Every_250ms(LED_t * led)
{

	for(s8 i = 7 ; i >= 0  ; i--)
	{
		LED_voidOn(&led[i]);
		_delay_ms(250);
		LED_voidOff(&led[i]);
	}

}

/***********************************************************************/
void Leds_VoidConverging_Every_300ms(LED_t * led)
{
	s8 j = 7;
	for(s8 i = 3 ; i >= 0 ; i--)
	{
		LED_voidOn(&led[i]);
		LED_voidOn(&led[j - i]);
		_delay_ms(300);
		LED_voidOff(&led[i]);
		LED_voidOff(&led[j - i]);
	}

}
/*********************************************************************/
void Leds_VoidDiverging_Every_300ms(LED_t * led)
{
	s8 j = 7;
	for(s8 i = 0 ; i < 4 ; i++)
	{
		LED_voidOn(&led[i]);
		LED_voidOn(&led[j - i]);
		_delay_ms(300);
		LED_voidOff(&led[i]);
		LED_voidOff(&led[j - i]);
	}

}
/************************************************************************/
void Leds_VoidPingPong_Every_250ms(LED_t * led)
{
	for(s8 i = 0 ; i < 8 ; i++)
	{
		LED_voidOn(&led[i]);
		_delay_ms(250);
		LED_voidOff(&led[i]);
	}
	for(s8 i = 6 ; i >=0 ; i--)
	{
		LED_voidOn(&led[i]);
		_delay_ms(250);
		LED_voidOff(&led[i]);
	}
}

/*************************************************************************/
void Leds_VoidSnakeEffect_Every_300ms(LED_t * led)
{
	for(s8 i = 0 ; i < 8 ; i++)
	{
		LED_voidOn(&led[i]);
		_delay_ms(250);
	}
	for(s8 i = 0 ; i < 8 ; i++)
	{
		LED_voidOff(&led[i]);

	}

}

/**********************************************************************/
void Leds_VoidConverging_And_Diverging_Every_300ms(LED_t * led)
{
	s8 j = 7;
	for(s8 i = 3 ; i >= 0 ; i--)
	{
		LED_voidOn(&led[i]);
		LED_voidOn(&led[j - i]);
		_delay_ms(300);
		LED_voidOff(&led[i]);
		LED_voidOff(&led[j - i]);
	}

	for(s8 i = 1 ; i < 4 ; i++)
	{
		LED_voidOn(&led[i]);
		LED_voidOn(&led[j - i]);
		_delay_ms(300);
		LED_voidOff(&led[i]);
		LED_voidOff(&led[j - i]);
	}
}
/************************************************************************/
