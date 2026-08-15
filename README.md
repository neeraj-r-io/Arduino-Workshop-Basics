# 🚀 Foundational Arduino Hardware Integration

This repository contains the circuit schematics and firmware for a series of embedded hardware projects I completed during a hands-on workshop. 

The focus of these builds was on physical system integration, understanding microcontroller pinouts, and successfully deploying C++ firmware to interact with the physical world.

## 🧰 Hardware & Tools Used
* **Microcontroller:** Arduino Uno R3
* **Simulation:** Tinkercad Circuits
* **Components:** 16x2 I2C LCD, Potentiometers, Piezo Buzzers, RGB LEDs, Push Buttons.
* **Concepts Applied:** Digital I/O, Pulse Width Modulation (PWM), Analog-to-Digital Conversion (ADC), I2C Communication.

---

## 🛠️ Project Modules

### [01] Digital I/O
* **Components:** Push Buttons, LEDs.
* **Integration:** Configured digital pins for `INPUT_PULLUP` to read physical state changes and drive external LEDs.

### [02] Potentiometer & Buzzer (Analog to PWM)
* **Components:** Potentiometer, Passive Piezo Buzzer.
* **Integration:** Mapped 0-1023 analog signals from a potentiometer to dynamically adjust the output volume/tone of a buzzer using PWM.

### [03] RGB Controller
* **Components:** RGB LED.
* **Integration:** Utilized multiple PWM pins and `analogWrite()` loops to simulate analog output for dynamic RGB color mixing.

### [04] LCD Display (I2C Protocol)
* **Components:** 16x2 LCD with I2C Backpack.
* **Integration:** Condensed a standard 12-pin LCD setup into a 4-pin system (VCC, GND, SDA, SCL) using the I2C communication protocol.

---

## 🌱 Current Learning & Next Steps
While I successfully wired, deployed, and tested the physical hardware integration for these systems, the C++ code was provided by the workshop instructors. 

My current focus is reverse-engineering this firmware. My next steps are:
- [ ] Understand the non-blocking timer alternatives to the `delay()` function.
- [ ] Write my own custom logic from scratch for a new sensor integration.
