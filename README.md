# Proximity Detection and Object Avoidance System 🚀

This project uses an ultrasonic sensor (HC-SR04), a microcontroller (e.g., Arduino Uno), a servo motor, and other components to create a proximity detection system. The system alerts when an object enters a specified range and activates a servo motor to avoid the object. 🤖

## Objective 🎯
The goal of this project is to build a proximity detection system that:
- Detects objects within a specified distance using an ultrasonic sensor 📏.
- Alerts the user with an LED 💡 and buzzer 🔊 when an object is detected.
- Moves a servo motor 🤖 to avoid the detected object by shifting its position.

## Hardware Components 🛠️
- Arduino Uno or compatible microcontroller
- HC-SR04 Ultrasonic Sensor 📡
- Servo Motor (e.g., SG90) 🦾
- LED 💡
- Buzzer 🔊
- Jumper wires 🔌
- Breadboard 🍞

## Circuit Connections 🔌
- **HC-SR04 Ultrasonic Sensor**:
  - VCC to 5V ⚡
  - GND to GND
  - TRIG pin to digital pin 9
  - ECHO pin to digital pin 8 
- **LED**:
  - Anode (long leg) to digital pin 7
  - Cathode (short leg) to GND (through a 220Ω resistor)
- **Buzzer**:
  - One leg to digital pin 13
  - Other leg to GND
- **Servo Motor**:
  - VCC to 5V ⚡
  - GND to GND
  - Signal pin to digital pin 10

## Software Requirements 💻
- Arduino IDE (or compatible IDE)
- Libraries:
  - `LiquidCrystal` for LCD display 📺
  - `Servo` for servo motor control 🔧

## Code Overview 📝
The program measures the distance between the sensor and the detected object using the ultrasonic sensor. If the distance is less than a defined threshold (e.g., 20 cm), the system:
- Turns on an LED 💡 and buzzer 🔊 for alert.
- Moves the servo motor 🦾 to an avoidance position (0 degrees). 

When the object is no longer in the detection range, the system:
- Turns off the LED 💡 and buzzer 🔊.
- Moves the servo motor 🦾 back to its default position (90 degrees).

<img src="https://lastminuteengineers.com/wp-content/uploads/arduino/HC-SR04-Ultrasonic-Sensor-Working-Echo-when-no-Obstacle.gif" width="300" height="auto" />

## Usage 🚀
1. Connect all the components as shown in the circuit diagram.
2. Upload the code to your Arduino board using the Arduino IDE.
3. Open the Serial Monitor to observe the distance readings. 📏
4. The LCD display will show the detected distance and whether an object is detected.
5. When an object is detected within the specified threshold distance (e.g., 20 cm), the LED 💡 will light up, the buzzer 🔊 will sound, and the servo motor 🦾 will move.
6. If the object moves out of the range, the system will reset, and the servo 🦾 will return to its default position.

## Calibration and Adjustments ⚙️
- You can modify the `THRESHOLD_DISTANCE` value to adjust the detection range.
- Ensure the ultrasonic sensor is properly calibrated to avoid false readings.
- If the servo motor 🦾 doesn't move as expected, check the wiring and the motor's signal pin.

## Future Improvements 🔮
- Add additional sensors for better coverage (e.g., infrared sensors or multiple ultrasonic sensors).
- Implement more sophisticated object avoidance mechanisms (e.g., robotic arm movement or redirection).
- Integrate a real-time clock to record and display timestamps for object detection.

<h2 align="center">Contact With Me</h2>
<div align="center">
  <a href="https://linkedin.com/in/yash-tekale-6157ba246" target="blank">
    <img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" alt="Yash Tekale LinkedIn" height="30" width="40" />
  </a>
    <a href="mailto:tekaleyash16@gmail.com" target="_blank">
    <img align="center" src="https://i.pinimg.com/736x/a1/d1/4b/a1d14ba7881740c8c3e428a75132a2ae.jpg" alt="tekaleyash16@gmail.com" height="30" width="40" />
  </a>
  <a href="https://github.com/yashtekale06" target="blank">
    <img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/github.svg" alt="Yash Tekale GitHub" height="30" width="40" />
  </a>
</div>
<h3 align="center">
  View this project on <a href="https://www.tinkercad.com/things/51DGr1M2U8y-copy-of-smooth-blad-trug" target="_blank">Tinkercad</a>
</h3>

<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&height=65&section=footer"/>
</p>
