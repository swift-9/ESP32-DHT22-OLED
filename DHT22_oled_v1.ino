#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "DHT.h"

#define SCREEN_WIDTH 128 // OLED width
#define SCREEN_HEIGHT 64 // OLED height
#define OLED_RESET    -1 // No reset pin used with ESP32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define DHTPIN 4      // GPIO4 where DHT22 DATA is connected
#define DHTTYPE DHT22 // Change to DHT11 if using DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  Serial.println("DHT22 + OLED on ESP32");

  // Initialize OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // I2C address 0x3C
    Serial.println("❌ SSD1306 allocation failed");
    for (;;);
  }
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("Initializing...");
  display.display();

  dht.begin();
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("❌ Failed to read from DHT sensor!");
    display.clearDisplay();
    display.setCursor(0, 0);
    display.println("Sensor Error!");
    display.display();
    delay(2000);
    return;
  }

  // Print to Serial
  Serial.print("🌡 Temperature: ");
  Serial.print(temperature);
  Serial.print("°C  |  💧 Humidity: ");
  Serial.print(humidity);
  Serial.println("%");

  // Print to OLED
  display.clearDisplay();
  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println("DHT22 Readings:");
  display.setTextSize(2);
  display.setCursor(0, 16);
  display.print(temperature, 1);
  display.println(" C");
  display.setCursor(0, 40);
  display.print(humidity, 1);
  display.println(" %");
  display.display();

  delay(2000); // Read every 2s
}
