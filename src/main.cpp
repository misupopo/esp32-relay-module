/**
 * @date 2022-11-24
 * @author Toshihiko Arai
 * @copyright https://101010.fun
 * @brief ESP32とリレーモジュールを使って、ウインカー風にLチカするプログラム
*/
#include <Arduino.h>

/**
 * @brief Relay  <-->  ESP32  の配線
 *        DC+    <-->  5V
 *        DC-    <-->  GND
 *        IN     <-->  GPIO14
 *        COM    <-->  330Ω--LED--5V
 *        NO     <-->  GND
*/
#define TRG_PIN 14

void setup() {
    Serial.begin(115200);
    pinMode(TRG_PIN, OUTPUT);
}

void loop() {
    digitalWrite(TRG_PIN, HIGH);
    delay(5000);
    digitalWrite(TRG_PIN, LOW);
    delay(5000);
}
