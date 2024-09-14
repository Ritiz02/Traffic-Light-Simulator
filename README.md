### **Traffic Light Simulator**

This Arduino project simulates a traffic light system using RGB LEDs. The code controls the sequence of red, yellow, and green lights, replicating the behavior of a real-world traffic light.

**Key Features:**

- **RGB LED Control:** Utilizes analogWrite to control the brightness of red, yellow, and green LEDs.
- **Traffic Light Sequence:** Implements a standard traffic light sequence:
  - **Stop:** Red light is on.
  - **Prepare to Go:** Red and yellow lights are on.
  - **Go:** Green light is on.
- **Serial Output:** Prints status messages to the serial monitor for debugging and monitoring.
- **Customizable Delay:** The duration of each traffic light state can be adjusted by modifying the delay values in the code.

**Hardware Requirements:**

- Arduino board (e.g., Uno, Mega)
- 3 RGB LEDs (red, yellow, green)
- Resistors (if necessary, based on LED specifications)
- Jumper wires

**Setup:**

1. Connect the RGB LEDs to the specified Arduino pins (redPin, bluePin, greenPin).
2. Ensure proper wiring for the LEDs, including resistors if needed.
3. Upload the code to your Arduino board.

**Usage:**

1. Open the serial monitor to view the status messages and observe the traffic light sequence.
2. Adjust the delay values in the code to modify the duration of each traffic light state.

**Note:** This project is a basic implementation and may require modifications for real-world applications, such as adding safety features or integrating with external sensors.
