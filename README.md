# Arduino-Radar-Imaging

This Arduino project implements an ultrasonic radar using an ultrasonic sensor and a servo motor. The servo motor rotates the ultrasonic sensor in a 180-degree range, and the distance to objects is measured using the sensor. The measured data is sent to the serial port for visualization in a compatible software, such as Processing.

![Ultrasonic Radar](ultrasonic_radar.jpg)

## Hardware Requirements
- Arduino board (e.g., Arduino Uno)
- HC-SR04 Ultrasonic Sensor
- Servo Motor (e.g., SG90)
- Jumper wires
- Breadboard

## Software Requirements
- Arduino IDE
- Processing IDE

## Circuit Diagram
![Circuit Diagram](circuit_diagram.png)

## Installation and Usage
1. Connect the HC-SR04 ultrasonic sensor to the Arduino board as shown in the circuit diagram.
2. Upload the Arduino sketch (`radar.ino`) to the Arduino board using the Arduino IDE.
3. Open the Processing sketch (`radar-display.pde`) in the Processing IDE.
4. Make sure the COM port for the Arduino board is correctly set in the Processing sketch (change `COM13` to the appropriate port).
5. Run the Processing sketch to visualize the ultrasonic radar in action.

## Contributing
Contributions to this project are welcome. Please feel free to open issues or submit pull requests with any improvements or bug fixes.

## Acknowledgments
- The Servo library by Arduino: [https://www.arduino.cc/reference/en/libraries/servo/](https://www.arduino.cc/reference/en/libraries/servo/)
- The HC-SR04 Ultrasonic Sensor Library by J.Rodrigo: [https://github.com/JRodrigoTech/Ultrasonic-HC-SR04](https://github.com/JRodrigoTech/Ultrasonic-HC-SR04)

