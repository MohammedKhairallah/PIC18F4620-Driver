# PIC18F4620-Driver

## Overview:

This repository houses a well-structured PIC 18F4620 driver organized into three layers - ECU (Embedded Control Unit) layer, MCAL (Microcontroller Abstraction Layer) layer, and Application layer. These layers provide a modular and scalable approach to firmware development for the PIC 18F4620 microcontroller, offering a robust foundation for embedded systems, robotics, and IoT projects.

## Layers:

### 1. ECU (Embedded Control Unit) Layer:

The ECU layer serves as the high-level control logic for the PIC 18F4620 and encapsulates the following components:

- **7-Segment Display**
- **Button**
- **Character LCD**
- **DC Motor**
- **Keypad**
- **LED**
- **Relay**

### 2. MCAL (Microcontroller Abstraction Layer) Layer

The MCAL layer abstracts the hardware-specific details of the PIC 18F4620 microcontroller, providing a uniform interface for the ECU layer. It includes drivers for:

- **ADC (Analog-to-Digital Converter)**
- **CCP (Capture/Compare/PWM)**
- **EEPROM**
- **GPIO (General Purpose Input/Output)**
- **I2C**
- **Interrupt**
- **SPI (Serial Peripheral Interface)**
- **Timers (Timer0, Timer1, Timer2, Timer3)**
- **USART (Universal Synchronous/Asynchronous Receiver/Transmitter)**

### 3. Application Layer

The Application layer represents the user-specific logic and functionality. Developers can leverage the ECU and MCAL layers to build and extend the capabilities of the PIC 18F4620 for their specific projects.

## Features

- **Modular Design:** Organized into three layers for better code organization, maintainability, and scalability.
- **Peripheral Abstraction:** MCAL layer abstracts hardware details, providing a consistent interface for ECU and application development.

## Author:

- [Mohammed Khairallah](https://www.linkedin.com/in/mohammed-khairallah/)
