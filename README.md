# 🔥 Fire & Gas Detection using Arduino UNO and MIT App Inventor

## 📋 Overview

This project demonstrates a real-time **Fire and Gas Detection System** using an **Arduino UNO**, integrated with **MIT App Inventor** for wireless monitoring and control via Bluetooth. It is a compact, low-cost safety system designed to detect the presence of hazardous gases and fire and notify the user through an Android app.

---

## 🧠 Features

* Real-time detection of flammable gas using MQ-2 or MQ-135 sensor
* Fire detection using an LDR (Light Dependent Resistor)
* Alerts using buzzer and LED indicators
* Bluetooth communication with a custom Android app (MIT App Inventor)
* Servo motor control for automated mechanical actions
* Manual override via app using L (left) and R (right) commands

---

## 🛠️ Hardware Components

* Arduino UNO
* Gas Sensor (MQ-2 / MQ-135)
* Light Sensor (LDR)
* Buzzer
* LED
* Servo Motor (SG90)
* HC-05 Bluetooth Module
* Android Smartphone
* Jumper Wires and Breadboard

---

## ⚙️ Software & Tools

* Arduino IDE
* MIT App Inventor (Android App Development)

---

## 📲 MIT App Inventor Interface

The mobile app is developed using MIT App Inventor. It has:

* Live data display of Gas and Light sensor values
* Status messages like "Fire Detected" or "No Fire Detected"
* Two buttons to send 'L' and 'R' commands to rotate the servo motor

---

## 🧾 How It Works

1. **Sensing**:

   * Gas and light values are read using analog pins A0 and A1.
   * If values cross defined thresholds, LED and buzzer are activated.
2. **Communication**:

   * Sensor readings and alert messages are sent over Bluetooth to the mobile app.
3. **Control**:

   * The mobile app sends 'L' or 'R' commands to control the servo motor.

---

## 🔌 Circuit Diagram

![image](https://github.com/user-attachments/assets/b6809a16-6099-4086-909f-87e3958faed6)


---

## 💻 Arduino Code

The complete Arduino code is available in the `gas_fire_detector.ino` file.

---

## 📷 Screenshots

* MIT App Inventor interface
* Hardware prototype setup

![image](https://github.com/user-attachments/assets/126a9347-a993-4835-b75a-0a16b9a1bc4d)


---

## 📚 References

* [Arduino Official Documentation](https://www.arduino.cc/en/Guide/HomePage)
* [MIT App Inventor](https://appinventor.mit.edu/)
* [MQ-2 Sensor Datasheet](https://www.sparkfun.com/datasheets/Sensors/Biometric/MQ-2.pdf)
* [Servo Motor Basics](https://lastminuteengineers.com/servo-motor-arduino-tutorial/)

---
