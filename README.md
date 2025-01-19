# RFID Reader with Arduino

This project demonstrates how to use an MFRC522 RFID module with an Arduino to detect and read the UID (Unique Identifier) of an NFC-enabled card or tag. 

## Table of Contents
- [Overview](#overview)
- [Hardware Requirements](#hardware-requirements)
- [Connections](#connections)
- [Installation](#installation)
- [Usage](#usage)
- [License](#license)

## Overview
RFID (Radio Frequency Identification) technology is commonly used in access control systems, inventory tracking, and contactless payment systems. This project reads the UID of an NFC-enabled card or tag using the MFRC522 module and displays it in the Serial Monitor.

## Hardware Requirements
- Arduino board (e.g., Uno, Nano, Mega)
- MFRC522 RFID module
- NFC-enabled ID card or tag
- Jumper wires
- Breadboard (optional)

## Connections
Connect the RFID module to the Arduino as follows:

| RFID Module | Arduino   |
|-------------|-----------|
| VCC         | 3.3V      |
| RST         | Pin 9     |
| GND         | GND       |
| MISO        | Pin 12    |
| MOSI        | Pin 11    |
| SCK         | Pin 13    |
| SDA (SS)    | Pin 10    |

## Installation
1. Install the **MFRC522** library in the Arduino IDE:
   - Go to **Tools > Manage Libraries...**
   - Search for `MFRC522` and install the library by **Miguel Balboa**.
2. Connect the hardware as per the table above.
3. Copy and paste the code from [RFIDReader.ino](./RFIDReader.ino) into your Arduino IDE.

## Usage
1. Upload the code to your Arduino board.
2. Open the Serial Monitor in the Arduino IDE (Ctrl+Shift+M).
3. Set the baud rate to **9600** in the Serial Monitor.
4. Place your NFC-enabled card or tag near the RFID module.
5. The Serial Monitor will display the UID of the card, like this:

