 /******************************************************************************
 *
 * Module: Dio
 *
 * File Name: Dio_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for TM4C123GH6PM Microcontroller - Dio Driver
 *
 * Author: Seif Emad
 ******************************************************************************/

#ifndef PORT_CFG_H
#define PORT_CFG_H

/*
 * Module Version 1.0.0
 */
#define PORT_CFG_SW_MAJOR_VERSION              (1U)
#define PORT_CFG_SW_MINOR_VERSION              (0U)
#define PORT_CFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION     (3U)

/* Pre-compile option for Development Error Detect */
#define PORT_DEV_ERROR_DETECT                (STD_ON)

/* Pre-compile option for Version Info API */
#define PORT_VERSION_INFO_API                (STD_OFF)


/* Number of the configured PORT Channels */
#define PORT_CONFIGURED_PINS              (39U)
/* Number of Available Modes for One pin*/   
#define Available_Modes 14   

/* Channel Index in the array of structures in Dio_PBcfg.c */
#define PortConf_LED1_CHANNEL_ID_INDEX        (uint8)0x23
#define PortConf_SW1_CHANNEL_ID_INDEX         (uint8)0x26

   
/*  Configured Port ID's  */
#define PORTA                                 (Port_PortType)0 /* PORTA */
#define PORTB                                 (Port_PortType)1 /* PORTB */
#define PORTC                                 (Port_PortType)2 /* PORTC */
#define PORTD                                 (Port_PortType)3 /* PORTD */
#define PORTE                                 (Port_PortType)4 /* PORTE */
#define PORTF                                 (Port_PortType)5 /* PORTF */


/* PORT Configured Channel ID's */
#define Pin_0              (Port_PinType)0  /* Pin 0 */
#define Pin_1              (Port_PinType)1  /* Pin 1 */
#define Pin_2              (Port_PinType)2  /* Pin 2 */
#define Pin_3              (Port_PinType)3  /* Pin 3 */
#define Pin_4              (Port_PinType)4  /* Pin 4 */
#define Pin_5              (Port_PinType)5  /* Pin 5 */
#define Pin_6              (Port_PinType)6  /* Pin 6 */
#define Pin_7              (Port_PinType)7  /* Pin 7 */

   
  
#define GPIO 0  
#define USART 1
#define SSI 2
#define I2C 3
#define PWM0 4
#define PWM1 5
#define IDX 6
#define WTDOG 7
#define CAN 8
#define C0 9
#define ANALOG 10   
#define TRD 14   

#endif /* DIO_CFG_H */
