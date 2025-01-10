# Term7_EM2050_Firmware_Uploader

This document aims to updating firmware of EM2050 module on EchoStar-Term-7 board.

### Step 1

- Plug your EchoStar Module to the PC with USB_SERIAL
- Open Arduino and go to **File -> Examples -> Basic_Examples -> Others -> Term7_EM2050_Firmware_Uploader 
- Upload the program to the EchoStar Module
- Unplug your USB_SERIAL after uploading

### Step 2

#### Plug your EchoStar Module to the PC with a USB TTL connect to the header J8 (PA2-USART2_TX & PA3-USART2_RX) -> NOT the USB_SERIAL of the board

- Download and install Tera Term thanks on the [Github](https://github.com/TeraTermProject/teraterm/releases)
- Start Tera Term and begin a serial session with the Nucleo board as shown in the figure below:

<img src="Pictures/Tera_Term_Window.png>

- Choose ''Serial'' and press ''ok''

<img src="Pictures/Tera_Term_Window.png> 

- Go to Setup -> Serial port -> 115200 as Speed -> New Setting

<img src="Pictures/Serial.png> 

- Press USER_BTN will to switch the EM2050 to Firmware bootloader mode
The LED indicates the current EM2050 mode. 
	- LED ON implies the Bootloader mode
	- LED OFF implies the normal running mode
EchoStar Module is well ready when ''CCCCC....'' is displayed like that : 

<img src="Pictures/EchoStar_Ready.png>

if it's not displayed in your terminal, press again USER_BTN


### Step 3

- Go to File -> Transfer -> YMODEM -> Send 
<img src="Pictures/YModem3.jpg> 

- Select your FirmWare from your laptop (.sfb extension)
<img src="Pictures/Firmware_upload_in_progress.png>

