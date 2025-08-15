

<div align="center">
  <h1>🌡️ ESP32 DHT22 OLED Display</h1>
  <p><i>Real-time temperature & humidity monitoring on an OLED screen</i></p>
  
  <br />
  
  <div>
    <img src="https://img.shields.io/badge/-ESP32-000000?style=for-the-badge&logo=espressif&logoColor=white" alt="ESP32" />
    <img src="https://img.shields.io/badge/-Arduino IDE-00979D?style=for-the-badge&logo=arduino&logoColor=white" alt="Arduino IDE" />
    <img src="https://img.shields.io/badge/-DHT22 Sensor-F9A825?style=for-the-badge" alt="DHT22" />
    <img src="https://img.shields.io/badge/-OLED Display-4B0082?style=for-the-badge" alt="OLED Display" />
    <img src="https://img.shields.io/badge/-Adafruit Libraries-FF5733?style=for-the-badge" alt="Adafruit" />
  </div>
</div>

An **ESP32-based IoT project** that reads **temperature** 🌡️ and **humidity** 💧 from a **DHT22 sensor** and displays them in real-time on a crisp **0.96" OLED display** 📺.

---

## ✨ Features
- 📊 Real-time temperature & humidity readings.
- 🖥️ OLED display with clear text output.
- ⚡ Fast and accurate DHT22 sensor.
- 🔌 Simple wiring and lightweight code.

---

## 🛠️ Hardware Required
- **ESP32 Development Board**
- **DHT22 Temperature & Humidity Sensor**
- **0.96" OLED Display** (I2C)
- Jumper wires & breadboard

---

## 🔌 Wiring Diagram

| ESP32 Pin | OLED Pin | DHT22 Pin |
|-----------|----------|-----------|
| 3.3V      | VCC      | VCC       |
| GND       | GND      | GND       |
| GPIO22    | SCL      | —         |
| GPIO21    | SDA      | —         |
| GPIO4     | —        | Data      |

---

## 📜 Installation
1. **Clone this repository**  
   ```bash
   git clone https://github.com/yourusername/esp32-dht22-oled.git
   cd esp32-dht22-oled
   ```

2. **Install required Arduino libraries**
   - ***Adafruit SSD1306***
   - ***Adafruit GFX Library***
   - ***DHT Sensor Library***

3. **Upload to ESP32 using Arduino IDE or PlatformIO**  

---
## 📷 Demo
  - ***Wokwi Demo*** = https://wokwi.com/projects/439332029392918529
## <div><img src="s1.png" alt="sketch" /></div>
## <div><img src="s2.png" alt="sketch" /></div>
## <div><img src="s3" alt="sketch" /></div>

---

## 📄 Sketch

## <div><img src="Sketch.png" alt="sketch" /></div>

---

💡 Tip: You can expand this project by adding Wi-Fi logging, SD card storage, or IoT cloud integration.
