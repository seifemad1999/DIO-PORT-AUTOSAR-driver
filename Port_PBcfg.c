 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Seif Emad 
 ******************************************************************************/

#include "Port.h"

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* AUTOSAR Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Dio_PBcfg.c and Dio.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif

/* PB structure used with Port_Init API */
const Port_ConfigType Port_confi = {
                                             PORTA,Pin_0,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,CAN},
                                             PORTA,Pin_1,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,CAN},
                                             PORTA,Pin_2,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,SSI},
                                             PORTA,Pin_3,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,SSI},
                                             PORTA,Pin_4,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,SSI},
                                             PORTA,Pin_5,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,SSI},
                                             PORTA,Pin_6,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,I2C,PWM1},
                                             PORTA,Pin_7,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,I2C,PWM1},
                                               
                                             PORTB,Pin_0,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,WTDOG},
                                             PORTB,Pin_1,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,WTDOG},
                                             PORTB,Pin_2,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,I2C,WTDOG},
                                             PORTB,Pin_3,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,I2C,WTDOG},
                                             PORTB,Pin_4,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,SSI,PWM0,WTDOG,CAN,ANALOG},
                                             PORTB,Pin_5,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,SSI,PWM0,WTDOG,CAN,ANALOG},
                                             PORTB,Pin_6,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,SSI,PWM0,WTDOG},
                                             PORTB,Pin_7,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,SSI,PWM0,WTDOG},
                                               
                                             PORTC,Pin_4,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,SSI,PWM0,IDX,WTDOG,CAN},
                                             PORTC,Pin_5,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,SSI,PWM0,IDX,WTDOG,CAN},
                                             PORTC,Pin_6,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,IDX,WTDOG,CAN},
                                             PORTC,Pin_7,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,WTDOG,CAN},

                                             PORTD,Pin_0,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,SSI,I2C,PWM0,PWM1,WTDOG,ANALOG},
                                             PORTD,Pin_1,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,SSI,I2C,PWM0,PWM1,WTDOG,ANALOG},
                                             PORTD,Pin_2,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,SSI,PWM0,WTDOG,CAN,ANALOG},
                                             PORTD,Pin_3,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,SSI,IDX,WTDOG,CAN,ANALOG},
                                             PORTD,Pin_4,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,WTDOG},
                                             PORTD,Pin_5,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,WTDOG},
                                             PORTD,Pin_6,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,PWM0,IDX,WTDOG},
                                             PORTD,Pin_7,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,IDX,WTDOG,CAN},
                                               
                                             PORTE,Pin_0,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,ANALOG},
                                             PORTE,Pin_1,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,ANALOG},
                                             PORTE,Pin_2,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,ANALOG},
                                             PORTE,Pin_3,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,ANALOG},
                                             PORTE,Pin_4,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,I2C,PWM0,PWM1,CAN,ANALOG},
                                             PORTE,Pin_5,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,I2C,PWM0,PWM1,CAN,ANALOG},

                                             PORTF,Pin_0,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,SSI,I2C,PWM1,IDX,WTDOG,CAN,C0},
                                             PORTF,Pin_1,OUTPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,USART,SSI,PWM1,IDX,WTDOG,C0,TRD},
                                             PORTF,Pin_2,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,SSI,PWM0,PWM1,WTDOG,TRD},
                                             PORTF,Pin_3,INPUT,OFF,STD_LOW,TRUE,GPIO,TRUE,{GPIO,SSI,I2C,PWM1,WTDOG,TRD},
                                             PORTF,Pin_4,INPUT,PULL_UP,STD_HIGH,TRUE,GPIO,TRUE,{GPIO,PWM1,IDX,WTDOG,CAN}                                                                                    
};


