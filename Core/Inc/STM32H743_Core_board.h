/*
 * STM32H743_Core_board.h
 *
 *  Created on: Jun 8, 2025
 *      Author: spc
 */

#ifndef INC_STM32H743_CORE_BOARD_H_
#define INC_STM32H743_CORE_BOARD_H_

#define USER_LED_PORT GPIOG
#define USER_LED 2

//UART4
#define UART4_PORT GPIOA
#define UART4_TX 0
#define UART4_RX 1

//I2C1
#define I2C1_PORT GPIOB
#define I2C1_SCL 6
#define I2C1_SDA 7

//USB HS ULPI
#define USB_HS_ULPI_D0_PORT GPIOA
#define USB_HS_ULPI_DX_PORT GPIOB
#define ULPI_D0 3 //GPIOA
#define ULPI_D1 0 //GPIOB
#define ULPI_D2 1 //GPIOB
#define ULPI_D3 10 //GPIOB
#define ULPI_D4 11 //GPIOB
#define ULPI_D5 12 //GPIOB
#define ULPI_D6 13 //GPIOB
#define ULPI_D7 5 //GPIOB

#define USB_HS_ULPI_CK_PORT GPIOA
#define USB_HS_ULPI_STP_PORT GPIOC
#define USB_HS_ULPI_DIR_PORT GPIOC
#define USB_HS_ULPI_NXT_PORT GPIOC
#define ULPI_CK 5 //GPIOA
#define ULPI_STP 0 //GPIOC
#define ULPI_DIR 2 //GPIOC
#define ULPI_ 3 //GPIOC

//DCMI
#define DCMI_D0_PORT GPIOC
#define DCMI_D1_PORT GPIOA
#define DCMI_D2_PORT GPIOG
#define DCMI_D3_PORT GPIOG
#define DCMI_D4_PORT GPIOE
#define DCMI_D5_PORT GPIOD
#define DCMI_D6_PORT GPIOE
#define DCMI_D7_PORT GPIOE

#define DCMI_HSYNC_PORT GPIOA
#define DCMI_VSYNC_PORT GPIOG
#define DCMI_PCLK_PORT GPIOA
#define DCMI_XLK_PORT GPIOD

#define DCMI_D0 6
#define DCMI_D1 10
#define DCMI_D2 10
#define DCMI_D3 11
#define DCMI_D4 4
#define DCMI_D5 3
#define DCMI_D6 5
#define DCMI_D7 6

#define DCMI_HSYNC 4
#define DCMI_VSYNC 9
#define DCMI_PCLK 6
#define DCMI_XLK 15

//SDMMC1
#define SDMMC1_DX_PORT GPIOC
#define SDMMC1_D0 8
#define SDMMC1_D1 9
#define SDMMC1_D2 10
#define SDMMC1_D3 11

#define SDMMC1_CK_PORT GPIOC
#define SDMMC1_CK 12

#define SDMMC1_CMD_PORT GPIOD
#define SDMMC1_CMD 2


#endif /* INC_STM32H743_CORE_BOARD_H_ */
