#ifndef CFG_MCU_H
#define CFG_MCU_H

//#define MCU_STM32F401RE
#define MCU_STM32F429ZI

// MCU System Clock AHB
#define MCU_SYSTEM_CLK 16000000u

/* Used controllers */
#define MCU_USED_CAN_COUNT    2
#define MCU_USED_SPI_COUNT    2

/* CAN controller IDs */
#define MCU_CAN0              0
#define MCU_CAN1              1

#endif
