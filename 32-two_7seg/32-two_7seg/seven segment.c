/*
 * seven segment.c
 *
 * Created: 7/24/2022 5:09:23 AM
 *  Author: Islam Ashraf Mustafa
 */ 
#include "DIO.h"
void seven_seg_vinit(unsigned char portname )
{
	set_port_direction(portname,0xff);
}
void seven_seg_write(unsigned char portname,unsigned char value)
{
    unsigned char arr[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x47,0x7f,0x6f};
    DIO_write_port(portname,arr[value]);
}