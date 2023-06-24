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



# Arduino Radar Visualization

[![License](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)

This project provides a 2D visualization of radar data captured by ultrasonic sensors connected to an Arduino board. The radar sweeps in a 180-degree arc and measures the distances to nearby objects. The captured data is then visualized in real-time on a computer screen using the Processing programming language.

The radar visualization displays the detected objects as points on a circular grid, representing the distance and angle of each object. The closer an object is to the center, the shorter the distance, while the angle represents the position relative to the radar's orientation.

## Features

- Real-time visualization of ultrasonic sensor data on a computer screen.
- Sweep range of 180 degrees, providing a comprehensive view of the surroundings.
- Object detection and distance measurement using ultrasonic sensors.
- Interactive circular grid display with adjustable range circles for easy interpretation.
- Serial communication between Arduino and Processing for data transmission.

## Installation

To set up the Arduino radar visualization project, follow these steps:

1. Clone the repository to your local machine:

   ```shell
   $ git clone https://github.com/your-username/arduino-radar-visualization.git
   $ cd arduino-radar-visualization
Connect the Arduino board to your computer via USB.

Upload the Arduino sketch (arduino_radar.ino) to your Arduino board using the Arduino IDE or any other compatible software.

Install the Processing IDE from the official website: https://processing.org/download/

Open the processing_radar.pde file in the Processing IDE.

Connect the ultrasonic sensors to the designated pins on the Arduino board, as specified in the Arduino sketch.

Verify that the correct serial port is selected in the Processing sketch. You may need to modify the COMx variable in the setup() function to match your system.

Run the Processing sketch to start the radar visualization.

For more detailed instructions and troubleshooting, refer to the project documentation.

Usage
Once the Arduino radar visualization is set up, follow these steps to use the project:

Ensure that the Arduino board is connected to your computer and the ultrasonic sensors are properly connected.

Open the Processing sketch (processing_radar.pde) in the Processing IDE.

Click the "Run" button in the Processing IDE to start the visualization.

The radar visualization window will open, displaying the detected objects as points on a circular grid.

Observe the position and distance of the objects on the radar display as the radar sweeps through its range.

Customize the visualization parameters, such as range circles or colors, by modifying the appropriate variables in the Processing sketch.

For a more interactive experience, you can modify the code to add additional features or integrate it into your own projects.

Contributing
Contributions to the Arduino Radar Visualization project are welcome and encouraged! If you find any issues or have ideas for improvements, feel free to open a GitHub issue or submit a pull request.

Please ensure that you adhere to the project's code of conduct when contributing.

License
This project is licensed under the MIT License. See the LICENSE file for details.

Contact
If you have any questions, suggestions, or feedback, please don't hesitate to reach out:

Name: John Doe
Email: johndoe@example.com
Twitter: @johndoe
GitHub: github.com/johndoe
We appreciate your interest in the Arduino Radar Visualization project! Your feedback and contributions are valuable in making this project better.
