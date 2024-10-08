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

#define LEAT_BOARD_VERSION 6

#define CORE_VERSION_MAJOR 12
#define CORE_VERSION_MINOR 7
#define CORE_VERSION_PATCH 3
#define CORE_VERSION_BUILD 0
#define CORE_VERSION_STRING "12.7.3-0"

/*----------------------------------------------------------------------------
 *        STM32 pins number
 *----------------------------------------------------------------------------*/
#define PA0                     PIN_A0
#define PA1                     PIN_A1
#define PA2                     PIN_A2
#define PA3                     PIN_A3
#define PA4                     PIN_A4
#define PA5                     PIN_A5
#define PA6                     PIN_A6
#define PA7                     PIN_A7
#define PA8                     PIN_A8
#define PA9                     PIN_A9
#define PA10                    10
#define PA11                    11
#define PA12                    12
#define PA13                    13
#define PA14                    14
#define PA15                    15
#define PB0                     16
#define PB1                     17
#define PB2                     18
#define PB3                     19
#define PB4                     20
#define PB5                     21
#define PB6                     22
#define PB7                     23
#define PB8                     24
#define PB9                     25
#define PB10                    26
#define PB11                    27
#define PB12                    28
#define PB13                    29
#define PB14                    30
#define PB15                    31
#define PC0                     PIN_A10
#define PC1                     PIN_A11
#define PC2                     PIN_A12
#define PC3                     PIN_A13
#define PC4                     PIN_A14
#define PC5                     PIN_A15
#define PC6                     38
#define PC7                     39
#define PC8                     40
#define PC9                     41
#define PC10                    42
#define PC11                    43
#define PC12                    44
#define PC13                    45
#define PD0                     46
#define PD1                     47
#define PD2                     48
#define PD3                     49
#define PD4                     50
#define PD5                     51
#define PD6                     52
#define PD7                     53
#define PD8                     54
#define PD9                     55
#define PD10                    56
#define PD11                    57
#define PD12                    58
#define PD13                    59
#define PD14                    60
#define PD15                    61
#define PE0                     62
#define PE1                     63
#define PE2                     64
#define PE3                     65
#define PE4                     66
#define PH0                     67
#define PH1                     68
#define PH3                     69

// Alternate pins number
#define PA7_ALT1                (PA7 | ALT1)
#define PB8_ALT1                (PB8 | ALT1)
#define PB9_ALT1                (PB9 | ALT1)

#define NUM_DIGITAL_PINS        70
#define NUM_ANALOG_INPUTS       16

// On-board LED pin number
#ifndef LED_BUILTIN
  #define LED_BUILTIN           PA13
#endif

// On-board user button
#ifndef USER_BTN
  #define USER_BTN              PC2
#endif

// EchoStar EM2050 Module
// #define ECHOSTAR_PWR_ENABLE_PIN -1
#define ECHOSTAR_TXD_PIN PC0
#define ECHOSTAR_RXD_PIN PC1
#define ECHOSTAR_RTS_PIN PC12
#define ECHOSTAR_BOOT_PIN PC11
#define ECHOSTAR_nRST_PIN PC10
#define ECHOSTAR_SWCTRL_PIN PB4
// #define DPDT_PWR_ENABLE_PIN -1
#define DPDT_CTRL_PIN PB8

// GNSS
#define GNSS_TXD_PIN PB7
#define GNSS_RXD_PIN PA9
#define GNSS_WAKEUP_PIN PB5
#define GNSS_PWR_ENABLE_PIN PA1
#define GNSS_V_BCKP_PIN PC3
#define GNSS_1PPS_PIN PA0

// Sensors
#define SENSORS_PWR_ENABLE_PIN PA14
#define SENSORS_I2C_SDA_PIN PA10
#define SENSORS_I2C_SCL_PIN PB6
#define SENSORS_BATERY_ADC_PIN PA2
#define SENSORS_ACC_INT_1_PIN PB11
#define SENSORS_ACC_INT_2_PIN PB10
#define SENSORS_ACC_TRIG_PIN PB12

#define USB_SERIAL Serial
#define GNSS_SERIAL Serial1
#define ECHOSTAR_SERIAL SerialLP1
#define SENSORS_BME280_ADDRESS 0x76
// #define SENSORS_BME680_ADDRESS 0x77
#define SENSORS_KX023_ADDRESS 0x1F
#define SENSORS_LIS3DHTR_ADDRESS 0x19

// SPI definitions
#ifndef PIN_SPI_SS
  #define PIN_SPI_SS            PA4
#endif
#ifndef PIN_SPI_SS1
  #define PIN_SPI_SS1           PA15
#endif
#ifndef PIN_SPI_SS2
  #define PIN_SPI_SS2           PB2
#endif
#ifndef PIN_SPI_SS3
  #define PIN_SPI_SS3           PNUM_NOT_DEFINED
#endif
#ifndef PIN_SPI_MOSI
  #define PIN_SPI_MOSI          PA7
#endif
#ifndef PIN_SPI_MISO
  #define PIN_SPI_MISO          PA6
#endif
#ifndef PIN_SPI_SCK
  #define PIN_SPI_SCK           PA1
#endif

// I2C definitions
#ifndef PIN_WIRE_SDA
  #define PIN_WIRE_SDA          SENSORS_I2C_SDA_PIN
#endif
#ifndef PIN_WIRE_SCL
  #define PIN_WIRE_SCL          SENSORS_I2C_SCL_PIN
#endif

// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#ifndef TIMER_TONE
  #define TIMER_TONE            TIM16
#endif
#ifndef TIMER_SERVO
  #define TIMER_SERVO           TIM17
#endif

// UART Definitions
#ifndef SERIAL_UART_INSTANCE
  #define SERIAL_UART_INSTANCE  101
#endif

// Default pin used for generic 'Serial' instance
// Mandatory for Firmata
#ifndef PIN_SERIAL_RX
  #define PIN_SERIAL_RX         PA3
#endif
#ifndef PIN_SERIAL_TX
  #define PIN_SERIAL_TX         PA2
#endif

#define ENABLE_HWSERIAL1
#ifndef PIN_SERIAL1_RX
  #define PIN_SERIAL1_RX         PB7
#endif
#ifndef PIN_SERIAL1_TX
  #define PIN_SERIAL1_TX         PA9
#endif

#define ENABLE_HWSERIALLP1
#ifndef PIN_SERIALLP1_RX
  #define PIN_SERIALLP1_RX         PC0
#endif
#ifndef PIN_SERIALLP1_TX
  #define PIN_SERIALLP1_TX         PC1
#endif

// Extra HAL modules
#if !defined(HAL_QSPI_MODULE_DISABLED)
  #define HAL_QSPI_MODULE_ENABLED
#endif

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
    #define SERIAL_PORT_MONITOR   Serial
  #endif
  #ifndef SERIAL_PORT_HARDWARE
    #define SERIAL_PORT_HARDWARE  Serial
  #endif
#endif
