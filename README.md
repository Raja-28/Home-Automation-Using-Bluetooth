## Bluetooth Home Automation System

## Overview

This project demonstrates how to control home appliances using an Arduino Nano and an HC-05 Bluetooth module. It allows users to switch on/off appliances wirelessly through a Bluetooth connection by sending commands to the Arduino from a smartphone app or Bluetooth terminal.

## Components Used
- **Arduino Nano**
- **HC-05 Bluetooth Module**
- **4-Channel Relay Module**
- **Breadboard**
- **Jumper Wires**
- **Smartphone with Bluetooth terminal app** (or similar app for sending commands)

## Wiring Instructions

### HC-05 Bluetooth Module
- **VCC** -> 5V on Arduino Nano
- **GND** -> GND on Arduino Nano
- **TXD** -> RX on Arduino Nano (Pin 0)
- **RXD** -> TX on Arduino Nano (Pin 1)

### Relay Module
- **IN1** -> Pin 2 (for Relay 1)
- **IN2** -> Pin 3 (for Relay 2)
- **IN3** -> Pin 4 (for Relay 3)
- **IN4** -> Pin 5 (for Relay 4)
- **VCC** -> 5V on Arduino Nano
- **GND** -> GND on Arduino Nano

### Power Connections
- **Arduino Nano** powered via USB or external power supply.
- **Relay Module** powered from Arduino or external 5V supply.

## How It Works

1. **Bluetooth Communication**: The Arduino communicates with the HC-05 Bluetooth module over the serial connection. It receives commands wirelessly from a paired smartphone or computer.
2. **Relay Control**: The Bluetooth commands are used to control the 4-channel relay module, allowing the control of up to 4 appliances or devices.
3. **Commands**: Each relay is controlled by a specific command sent via Bluetooth. 
   - `'1'`: Turns on Relay 1
   - `'2'`: Turns off Relay 1
   - `'3'`: Turns on Relay 2
   - `'4'`: Turns off Relay 2
   - `'5'`: Turns on Relay 3
   - `'6'`: Turns off Relay 3
   - `'7'`: Turns on Relay 4
   - `'8'`: Turns off Relay 4

## Setup Instructions

1. **Connect Components**: Follow the wiring instructions to connect the HC-05 Bluetooth module and the relay module to the Arduino Nano.
2. **Upload Code**: Open the provided Arduino code in the Arduino IDE and upload it to your Arduino Nano.
3. **Pair Bluetooth**: Pair your smartphone or computer with the HC-05 Bluetooth module.
4. **Install Bluetooth Terminal App**: Download and install a Bluetooth terminal app on your phone, such as "Bluetooth Terminal" from the Play Store.
5. **Send Commands**: Use the app to send commands to the Arduino and control your relays wirelessly. For example, send '1' to turn on Relay 1, and '2' to turn it off.

## Application Ideas

- **Home Automation**: Control lights, fans, or other appliances wirelessly through Bluetooth.
- **Security Systems**: Automate home security devices like alarms or door locks.
- **IoT Projects**: Easily integrate with IoT-based home systems.

## Libraries Required

- No additional libraries are required for this project.

## Customization

- **Expand Relay Control**: If more relays are needed, simply add more digital pins and expand the code to handle additional relays.
- **Different Control Inputs**: You can modify the project to receive different inputs, such as sensors or another control interface.
- **Smartphone App Integration**: You can develop a custom app to interact with this project rather than using a terminal-based app.

## License

This project is licensed under the MIT License.
