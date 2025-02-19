/*
 *******************************************************************************
 * Copyright (c) 2020, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#pragma once

#define LEAT_BOARD_VERSION 7001

#define CORE_VERSION_MAJOR 12
#define CORE_VERSION_MINOR 7
#define CORE_VERSION_PATCH 3
#define CORE_VERSION_BUILD 0
#define CORE_VERSION_STRING "12.7.3-0"

/*----------------------------------------------------------------------------
 *        STM32 pins number
 *----------------------------------------------------------------------------*/
#define PA0 PIN_A0
#define PA1 PIN_A1
#define PA2 PIN_A2
#define PA3 PIN_A3
#define PA4 PIN_A4
#define PA5 PIN_A5
#define PA6 PIN_A6
#define PA7 PIN_A7
#define PA8 8
#define PA9 9
#define PA10 10
#define PA11 11
#define PA12 12
#define PA13 13
#define PA14 14
#define PA15 15
#define PB0 PIN_A8
#define PB1 PIN_A9
#define PB2 PIN_A10
#define PB3 19
#define PB4 20
#define PB5 21
#define PB6 22
#define PB7 23
#define PB8 24
#define PB9 25
#define PB10 26
#define PB12 27
#define PB13 28
#define PB14 29
#define PB15 30
#define PC13 31
#define PC14 32
#define PC15 33
#define PH0 34
#define PH1 35
#define PH3 36

// Alternate pins number
#define PA0_ALT1 (PA0 | ALT1)
#define PA1_ALT1 (PA1 | ALT1)
#define PA1_ALT2 (PA1 | ALT2)
#define PA2_ALT1 (PA2 | ALT1)
#define PA2_ALT2 (PA2 | ALT2)
#define PA3_ALT1 (PA3 | ALT1)
#define PA3_ALT2 (PA3 | ALT2)
#define PA4_ALT1 (PA4 | ALT1)
#define PA5_ALT1 (PA5 | ALT1)
#define PA6_ALT1 (PA6 | ALT1)
#define PA7_ALT1 (PA7 | ALT1)
#define PA7_ALT2 (PA7 | ALT2)
#define PA7_ALT3 (PA7 | ALT3)
#define PA15_ALT1 (PA15 | ALT1)
#define PB0_ALT1 (PB0 | ALT1)
#define PB0_ALT2 (PB0 | ALT2)
#define PB1_ALT1 (PB1 | ALT1)
#define PB1_ALT2 (PB1 | ALT2)
#define PB3_ALT1 (PB3 | ALT1)
#define PB4_ALT1 (PB4 | ALT1)
#define PB5_ALT1 (PB5 | ALT1)
#define PB6_ALT1 (PB6 | ALT1)
#define PB7_ALT1 (PB7 | ALT1)
#define PB8_ALT1 (PB8 | ALT1)
#define PB9_ALT1 (PB9 | ALT1)
#define PB10_ALT1 (PB10 | ALT1)
#define PB13_ALT1 (PB13 | ALT1)
#define PB14_ALT1 (PB14 | ALT1)
#define PB14_ALT2 (PB14 | ALT2)
#define PB15_ALT1 (PB15 | ALT1)
#define PB15_ALT2 (PB15 | ALT2)

#define NUM_DIGITAL_PINS 37
#define NUM_ANALOG_INPUTS 11

// On-board LED pin number
#ifndef LED_BUILTIN
#define LED_BUILTIN PA15
#endif

// On-board user button
#ifndef USER_BTN
#define USER_BTN PA14
#endif

// EchoStar EM2050 Module
#define ECHOSTAR_PWR_ENABLE_PIN PH1
#define ECHOSTAR_TXD_PIN PA10
#define ECHOSTAR_RXD_PIN PA9
#define ECHOSTAR_RTS_PIN PH3
#define ECHOSTAR_BOOT_PIN PA5
#define ECHOSTAR_nRST_PIN PA6
#define ECHOSTAR_SWCTRL_PIN PA7
// #define DPDT_PWR_ENABLE_PIN -1
#define DPDT_CTRL_PIN PA4

// GNSS
#define GNSS_TXD_PIN PA1
#define GNSS_RXD_PIN PA0
// #define GNSS_WAKEUP_PIN -1
#define GNSS_PWR_ENABLE_PIN PC13
#define GNSS_V_BCKP_PIN PH0
// #define GNSS_1PPS_PIN -1

// Sensors
#define SENSORS_PWR_ENABLE_PIN PA13
#define SENSORS_I2C_SDA_PIN PB7
#define SENSORS_I2C_SCL_PIN PB8
#define SENSORS_BATERY_ADC_PIN PB1
#define SENSORS_ACC_INT_1_PIN PA8
// #define SENSORS_ACC_INT_2_PIN -1
// #define SENSORS_ACC_TRIG_PIN -1

#define USB_SERIAL Serial
#define GNSS_SERIAL Serial4
#define ECHOSTAR_SERIAL Serial1
#define HEADER_SERIAL Serial2
#define SENSORS_BME280_ADDRESS 0x76
#define SENSORS_BME680_ADDRESS 0x77
#define SENSORS_KX023_ADDRESS 0x1F
#define SENSORS_LIS3DHTR_ADDRESS 0x19

// SDCard
#ifndef SDCARD_SS_PIN
#define SDCARD_SS_PIN PB0
#else
#warning SDCARD_SS_PIN is already defined, compile using the predefined value
#endif /* SDCARD_SS_PIN */

#ifndef SDCARD_MOSI_PIN
#define SDCARD_MOSI_PIN PB15
#else
#warning SDCARD_MOSI_PIN is already defined, compile using the predefined value
#endif /* SDCARD_MOSI_PIN */

#ifndef SDCARD_MISO_PIN
#define SDCARD_MISO_PIN PB14
#else
#warning SDCARD_MISO_PIN is already defined, compile using the predefined value
#endif /* SDCARD_MISO_PIN */

#ifndef SDCARD_SCK_PIN
#define SDCARD_SCK_PIN PB13
#else
#warning SDCARD_SCK_PIN is already defined, compile using the predefined value
#endif /* SDCARD_SCK_PIN */

// SPI definitions
#ifndef PIN_SPI_SS
#define PIN_SPI_SS SDCARD_SS_PIN
#endif
#ifndef PIN_SPI_SS1
#define PIN_SPI_SS1 PNUM_NOT_DEFINED
#endif
#ifndef PIN_SPI_SS2
#define PIN_SPI_SS2 PNUM_NOT_DEFINED
#endif
#ifndef PIN_SPI_SS3
#define PIN_SPI_SS3 PNUM_NOT_DEFINED
#endif
#ifndef PIN_SPI_MOSI
#define PIN_SPI_MOSI SDCARD_MOSI_PIN
#endif
#ifndef PIN_SPI_MISO
#define PIN_SPI_MISO SDCARD_MISO_PIN
#endif
#ifndef PIN_SPI_SCK
#define PIN_SPI_SCK SDCARD_SCK_PIN
#endif

// I2C definitions
#ifndef PIN_WIRE_SDA
#define PIN_WIRE_SDA SENSORS_I2C_SDA_PIN
#endif
#ifndef PIN_WIRE_SCL
#define PIN_WIRE_SCL SENSORS_I2C_SCL_PIN
#endif

// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#ifndef TIMER_TONE
#define TIMER_TONE TIM6
#endif
#ifndef TIMER_SERVO
#define TIMER_SERVO TIM7
#endif

// UART Definitions
#ifndef SERIAL_UART_INSTANCE
#define SERIAL_UART_INSTANCE 4
#endif

#ifndef HAVE_HWSERIAL1
  #define HAVE_HWSERIAL1
  #define PIN_SERIAL1_RX PA10
  #define PIN_SERIAL1_TX PA9
#endif

#ifndef HAVE_HWSERIAL2
  #define HAVE_HWSERIAL2
  #define PIN_SERIAL2_RX PA3
  #define PIN_SERIAL2_TX PA2
#endif

// Default pin used for generic 'Serial' instance
// Mandatory for Firmata
#ifndef PIN_SERIAL_RX
#define PIN_SERIAL_RX PA1
#endif
#ifndef PIN_SERIAL_TX
#define PIN_SERIAL_TX PA0
#endif

// Extra HAL modules
#if !defined(HAL_DAC_MODULE_DISABLED)
#define HAL_DAC_MODULE_ENABLED
#endif
#if !defined(HAL_OSPI_MODULE_DISABLED)
#define HAL_OSPI_MODULE_ENABLED
#endif

// Alternate SYS_WKUP definition
#define PWR_WAKEUP_PIN1_1
#define PWR_WAKEUP_PIN2_1
#define PWR_WAKEUP_PIN3_1
#define PWR_WAKEUP_PIN4_1
#define PWR_WAKEUP_PIN4_2
#define PWR_WAKEUP_PIN5_1
#define PWR_WAKEUP_PIN6_1
#define PWR_WAKEUP_PIN7_1
#define PWR_WAKEUP_PIN8_1

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
#ifndef SERIAL_PORT_MONITOR
#define SERIAL_PORT_MONITOR Serial
#endif
#ifndef SERIAL_PORT_HARDWARE
#define SERIAL_PORT_HARDWARE Serial
#endif
#endif
