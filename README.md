# Arduino-Radar-Imaging

This project provides a 2D visualization of radar data captured by ultrasonic sensors connected to an Arduino board. The radar sweeps in a 180-degree arc and measures the distances to nearby objects. The captured data is then visualized in real-time on a computer screen using the Processing programming language.
The radar visualization displays the detected objects as points on a circular grid, representing the distance and angle of each object. The closer an object is to the center, the shorter the distance, while the angle represents the position relative to the radar's orientation.

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
   git clone https://github.com/UdaySMukherjee/Arduino-Radar-Imaging.git
   cd arduino-radar-visualization
   ```
   
2. Connect the Arduino board to your computer via USB.

3. Upload the Arduino sketch (radar.ino) to your Arduino board using the Arduino IDE or any other compatible software.

4. Install the Processing IDE from the official website: https://processing.org/download/

5. Open the processing_radar.pde file in the Processing IDE.

6. Connect the ultrasonic sensors to the designated pins on the Arduino board, as specified in the Arduino sketch.

7. Verify that the correct serial port is selected in the Processing sketch. You may need to modify the COMx variable in the setup() function to match your system.

8. Run the Processing sketch to start the radar visualization.

For more detailed instructions and troubleshooting, refer to the project documentation.

## Usage

Once the Arduino radar visualization is set up, follow these steps to use the project:

1. Ensure that the Arduino board is connected to your computer and the ultrasonic sensors are properly connected.

2. Open the Processing sketch (processing_radar.pde) in the Processing IDE.

3. Click the "Run" button in the Processing IDE to start the visualization.

4. The radar visualization window will open, displaying the detected objects as points on a circular grid.

5. Observe the position and distance of the objects on the radar display as the radar sweeps through its range.

6. Customize the visualization parameters, such as range circles or colors, by modifying the appropriate variables in the Processing sketch.

For a more interactive experience, you can modify the code to add additional features or integrate it into your own projects.

## Contributing

Contributions to the Arduino Radar Visualization project are welcome and encouraged! If you find any issues or have ideas for improvements, feel free to open a GitHub issue or submit a pull request.
Please ensure that you adhere to the project's code of conduct when contributing.

## Contact
If you have any questions, suggestions, or feedback, please don't hesitate to reach out:

Name: Uday Sankar Mukherjee <br>
Email: udaysankar2003@gmail.com

We appreciate your interest in the Arduino Radar Visualization project! Your feedback and contributions are valuable in making this project better.
