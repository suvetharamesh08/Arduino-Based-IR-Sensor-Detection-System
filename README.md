#  Arduino-Based IR Sensor Detection System

### Object Detection and Digital Signal Monitoring Using Arduino UNO

---

##  About the Project

This project uses an **Infrared (IR) Sensor** with an Arduino UNO to detect the presence of nearby objects. The IR sensor detects objects using infrared light and sends a digital signal to the Arduino.

The Arduino reads the sensor output through digital pin 3 and displays the detected digital value (`0` or `1`) on the Serial Monitor every second.

---

##  Features

- Detects nearby objects using an IR sensor.
- Reads digital signals through Arduino pin 3.
- Displays sensor values on the Serial Monitor.
- Updates readings every 1 second.
- Simple and low-cost object detection system.

---

## Components Required

| Component | Quantity |
|---|---:|
| Arduino UNO | 1 |
| IR Sensor Module | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

##  Pin Connections

| IR Sensor | Arduino UNO |
|---|---|
| VCC | 5V |
| GND | GND |
| OUT | Digital Pin 3 |

---

##  Working Principle

1. The IR sensor emits infrared light.
2. When an object is nearby, reflected infrared light is detected by the sensor.
3. The sensor generates a digital output.
4. Arduino reads the output using `digitalRead()`.
5. The sensor value is displayed on the Serial Monitor every second.

---

## 📸 Project Output

![IR Sensor Project Output](./IR%20SENSOR.jpeg)


##  Expected Output

```text
1
1
0
0
1
```

*The readings depend on the IR sensor module and its output configuration. Typically, many IR obstacle detection modules output LOW when an object is detected and HIGH when no object is detected.*

---

##  Applications

- Obstacle detection
- Automatic object counting
- Robotics
- Smart automation systems
- Object detection projects

---

