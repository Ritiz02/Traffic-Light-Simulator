## Traffic Light Simulator

This Arduino project simulates a traffic light system using RGB LEDs. The code controls the sequence of red, yellow, and green lights, replicating the behavior of a real-world traffic light.

Key Features:

RGB LED Control: Utilizes analogWrite to control the brightness of red, yellow, and green LEDs.
Traffic Light Sequence: Implements a standard traffic light sequence:
Stop: Red light is on.
Prepare to Go: Red and yellow lights are on.
Go: Green light is on.
Serial Output: Prints status messages to the serial monitor for debugging and monitoring.
Customizable Delay: The duration of each traffic light state can be adjusted by modifying the delay values in the code.
How to Use:

Hardware: Connect RGB LEDs to the specified Arduino pins (redPin, bluePin, greenPin).
Upload Code: Upload the code to your Arduino board.
Observe: Open the serial monitor to view the status messages and observe the traffic light sequence.
Customization:

Timing: Modify the delay values to adjust the duration of each traffic light state.
Additional Features: Consider adding features like pedestrian signals, countdown timers, or different traffic patterns.
