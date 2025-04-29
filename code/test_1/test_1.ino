#include <OneWire.h>
#include <DallasTemperature.h>

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED width,  in pixels
#define SCREEN_HEIGHT 64 // OLED height, in pixels

// create an OLED display object connected to I2C
Adafruit_SSD1306 oled(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

#define SENSOR_PIN  16 // ESP32 pin GPIO17 connected to DS18B20 sensor's DATA pin

OneWire oneWire(SENSOR_PIN);
DallasTemperature DS18B20(&oneWire);

float tempC; // temperature in Celsius

void setup() {
  Serial.begin(9600); // initialize serial
  DS18B20.begin();    // initialize the DS18B20 sensor

    if (!oled.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("failed to start SSD1306 OLED"));
    while (1);
  }

  delay(2000);         // wait two seconds for initializing
  oled.setTextSize(3);         // set text size
  oled.setTextColor(WHITE);    // set text color

}

void loop() {
  DS18B20.requestTemperatures();       // send the command to get temperatures
  float tempC = DS18B20.getTempCByIndex(0);  // read temperature in °C
  oled.setCursor(0, 10);       // set position to display

  //Serial.print("Temperature: ");
  //Serial.print(tempC);    // print the temperature in °C
  Serial.println(tempC);

  oled.clearDisplay(); // clear display
  oled.print(tempC); // set text
  oled.display();              // display on OLED

  delay(500);
}
