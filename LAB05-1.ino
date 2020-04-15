#include <Keypad.h>

#include <SevSeg.h>
const byte ROWS=4;
const byte COLS=4;
char keys[ROWS][COLS]={{'F','E','D','C'},{'B','3','6','9'},{'A','2','5','8'},{'0','1','4','7'}};
// 定義 Keypad 連到 Arduino 的接腳
byte rowPins[ROWS] = {5, 4, 3, 11};
// 連到 Keypad 的 4 個 Rows
byte colPins[COLS] = {9, 8, 7, 10};
Keypad keypad =
Keypad( makeKeymap(keys), rowPins,
colPins, ROWS, COLS );

void setup() {
  
Serial.begin(9600); 

}

void loop() {
  char key = keypad.getKey(); // 讀取 Keypad

if (key != NO_KEY){
Serial.println(key);
}

}
