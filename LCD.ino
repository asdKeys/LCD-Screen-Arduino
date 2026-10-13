#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

String fruits[] = {"apple", "banana", "grape", "cherry", "blueberry"};
int index = 0;

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(fruits[index]);

  index = (index + 1) % 5;
  delay(1000);
}
