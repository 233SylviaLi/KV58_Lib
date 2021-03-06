#ifndef _PORT_CFG_H_
#define _PORT_CFG_H_

#include "port.h"
 
//-----------------------UART-------------------------
#define UART0_RX_PIN    PTB0   //PTA1,PTA15,PTB0,PTB16,PTC6,PTD6,PTE21
#define UART0_TX_PIN    PTB1   //PTA2,PTA14,PTB1,PTB17,PTC7,PTD7,PTE20

#define UART1_RX_PIN    PTE1    //PTC3,PTE1
#define UART1_TX_PIN    PTE0    //PTc4,PTE0

#define UART2_RX_PIN    PTE17   //PTD2,PTE17
#define UART2_TX_PIN    PTE16   //PTD3,PTE16

#define UART3_RX_PIN    PTE5    //PTB10,PTC16,PTE5
#define UART3_TX_PIN    PTE4    //PTB11,PTC17,PTE4

#define UART4_RX_PIN    PTE25   //PTC14,PTE25
#define UART4_TX_PIN    PTE24   //PTC15,PTE24

#define UART5_RX_PIN    PTE9    //PTD8,PTE9
#define UART5_TX_PIN    PTE8    //PTD9,PTE8

//-----------------------FTM-------------------------
#define FTM0_CH0_PIN    PTE24   //PTA3,PTC1,PTD0,PTE24
#define FTM0_CH1_PIN    PTE25   //PTA4,PTC2,PTD1,PTE25
#define FTM0_CH2_PIN    PTE29   //PTA5,PTC3,PTC5,PTD2,PTE29
#define FTM0_CH3_PIN    PTE30   //PTA6,PTC4,PTD3,PTE30
#define FTM0_CH4_PIN    PTE26   //PTA7,PTD4,PTE26
#define FTM0_CH5_PIN    PTA0    //PTA0,PTD5
#define FTM0_CH6_PIN    PTA1    //PTA1,PTD6
#define FTM0_CH7_PIN    PTA2    //PTA2,PTD7

#define FTM1_CH0_PIN    PTE20   //PTA2,PTA8,PTA12,PTB0,PTD6,PTE20
#define FTM1_CH1_PIN    PTE21   //PTA1,PTA9,PTA13,PTB1,PTD7,PTE21

#define FTM2_CH0_PIN    PTE22   //PTA10,PTB18,PTE22
#define FTM2_CH1_PIN    PTE23   //PTA11,PTB19,PTE23

#define FTM3_CH0_PIN    PTE5    //PTD0,PTE5
#define FTM3_CH1_PIN    PTE6    //PTD1,PTE6
#define FTM3_CH2_PIN    PTE7    //PTA18,PTB18,PTD2,PTE7
#define FTM3_CH3_PIN    PTE8    //PTB19,PTD3,PTE8
#define FTM3_CH4_PIN    PTE9    //PTC8,PTE9
#define FTM3_CH5_PIN    PTE10   //PTC9,PTE10
#define FTM3_CH6_PIN    PTE11   //PTC10,PTE11
#define FTM3_CH7_PIN    PTE12   //PTC11,PTE12

//-----------------------I2C-------------------------
#define I2C0_SCL
#define I2C0_SDA

#define I2C1_SCL
#define I2C1_SDA

//-----------------------SPI-------------------------

#endif
