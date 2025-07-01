# 🏠 IoT-Based Smart Home Automation with WhatsApp Integration

This project is a **WhatsApp-controlled smart home automation system** using IoT technology. It allows users to control appliances like lights and fans via WhatsApp messages and automates lighting based on real-time room temperature using a DHT11 sensor.

This solution was built using **NodeMCU ESP8266**, a **4-channel relay module**, a **DHT11 temperature sensor**, and **Twilio WhatsApp API** for real-time messaging.

---

## 🚀 Features

- 💡 Control home appliances (lights, fans) via WhatsApp commands
- 🌡️ Automatically turn appliances on/off based on temperature
- 🔁 Real-time feedback and status messages to the user
- ⚡ Energy-efficient operation
- 📱 No extra mobile apps required — just WhatsApp

---

## 📷 Project Overview

- **Microcontroller:** NodeMCU ESP8266  
- **Sensors:** DHT11 Temperature Sensor  
- **Actuator:** 4-Channel Relay Module  
- **Communication:** Twilio API for WhatsApp integration  
- **Interface:** Arduino IDE for programming  
- **Platform:** Breadboard prototype

---

## 🛠️ Hardware Components

| Component              | Description                                |
|------------------------|--------------------------------------------|
| NodeMCU ESP8266        | Wi-Fi microcontroller for command handling |
| DHT11 Sensor           | Reads ambient temperature                  |
| 4-Channel Relay Module | Controls AC appliances safely              |
| SMPS / Converter       | Converts AC to DC for the NodeMCU          |
| Breadboard + Jumper Wires | For circuit assembly and prototyping  |

---

## 💡 WhatsApp Commands

| Command           | Action                        |
|-------------------|-------------------------------|
| `light 1 on`      | Turns ON Light 1              |
| `light 2 off`     | Turns OFF Light 2             |
| `status`          | Sends status of all devices   |
| `fan on` (example)| Turns ON the fan              |

---

## 🔄 How It Works

1. User sends a message via WhatsApp (e.g., “light 1 on”)
2. Twilio API receives and forwards the command to a webhook
3. The NodeMCU reads the command and activates the relay
4. Device is turned on/off
5. NodeMCU sends back confirmation via WhatsApp

---

## 🔐 Automation Feature

- If the temperature exceeds a set threshold (e.g., 30°C), the fan turns ON automatically
- The system sends a message like: `"Temperature is 32°C. Fan turned ON."`

---
## 🙋‍♀️ Author

**Bushra Begum A**  
Final Year Student – Artificial Intelligence & Data Science  
IFET College of Engineering  
🔗 [Portfolio Website](https://bushy-ash.github.io)  
📧 bushra.buhsyansari30@gmail.com


