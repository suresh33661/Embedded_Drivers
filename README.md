# 📘 Embedded Systems Learning Repository

This repository contains my personal collection of embedded systems projects and driver implementations. Each folder represents an individual concept or peripheral that I explored while strengthening my fundamentals as an embedded engineer.  

My intention behind this work is to understand embedded systems **from the lowest level**, by writing my own drivers, studying reference manuals, and building complete working modules instead of relying on auto-generated code. Every project here reflects consistent effort, learning, debugging, and curiosity.

---

## 📂 Project Overview

### 🔹 ADC_MPLAB
Implementation of an Analog-to-Digital Converter (ADC) driver using MPLAB.
- Register-level configuration  
- Sampling and conversion workflow  
- Improved understanding of analog signal handling and timing

### 🔹 GPIO_interrup
General-purpose input/output interrupt driver.
- EXTI configuration  
- Edge selection and interrupt triggering  
- Helped me understand real-time event handling in microcontrollers

### 🔹 I2C_Driver
A complete bare-metal I2C driver.
- Start/Stop condition generation  
- ACK/NACK management  
- Polling and bus error handling  
- Deepened my understanding of serial communication protocols

### 🔹 LED_FreeRTOS_STM
A simple FreeRTOS-based LED blinking project on STM32.
- Task creation and scheduling  
- vTaskDelay usage  
- Foundation for RTOS-based embedded development

### 🔹 Ultrasonic_sensor
Interface and measurement code for ultrasonic distance sensors.
- Trigger–echo timing  
- Timer/Capture usage  
- Learning real-time measurement and signal interpretation

### 🔹 servo_motor
Servo motor control using PWM.
- Duty-cycle mapping  
- Timer configuration  
- Understanding timing precision for electromechanical systems

### 🔹 stm32f407gv_driver
Low-level driver development for STM32F407.
- GPIO configuration  
- RCC and system clock setup  
- Base for building more advanced STM32 firmware modules

---

## 🎯 Purpose of This Repository

- To build strong fundamentals in **bare-metal programming**  
- To practice reading and applying **datasheets and reference manuals**  
- To understand how each MCU peripheral works internally  
- To grow as an embedded engineer capable of writing clean, efficient, low-level code  

This repository showcases the effort I am putting into mastering embedded systems step by step, through real projects and hands-on driver development.

---

## 🛠️ Tools & Technologies

- STM32F4 Series MCUs  
- PIC Microcontrollers (MPLAB)  
- FreeRTOS  
- C / Embedded C  
- Timer peripherals, GPIO, ADC, PWM, I2C  

---

## 🚀 Future Work

- SPI, CAN, UART custom drivers  
- More FreeRTOS examples  
- State-machine-based architectures  
- Automotive communication and SDR-related modules  

---

## 🙌 Closing Note

These projects represent my continuous learning journey in embedded systems. Every directory here reflects the effort, curiosity, and discipline I am investing to become a strong embedded engineer.

