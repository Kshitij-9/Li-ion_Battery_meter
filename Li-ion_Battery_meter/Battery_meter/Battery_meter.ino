float battPin = A1;
#include <LiquidCrystal.h>
int Contrast = 80;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  analogWrite(6, Contrast);
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(battPin, INPUT);

}
void loop() {

  float x = analogRead(battPin);
  int volts = x;

  if (volts <= 650)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("0%");

  }

  else if (volts <= 738)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("5%");

  }

  else if (volts <= 754)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("10%");

  }

  else if (volts <= 758)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("15%");

  }

  else if (volts <= 762)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("20%");

  }

  else if (volts <= 766)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("25%");

  }

  else if (volts <= 771)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("30%");

  }

  else if (volts <= 775)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("35%");

  }

  else if (volts <= 777)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("40%");

  }

  else if (volts <= 781)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("45%");

  }

  else if (volts <= 785)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("50%");

  }

  else if (volts <= 787)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("55%");

  }

  else if (volts <= 791)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("60%");

  }

  else if (volts <= 799)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("65%");

  }

  else if (volts <= 807)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("70%");

  }

  else if (volts <= 814)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("75%");

  }

  else if (volts <= 822)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("80%");

  }

  else if (volts <= 834)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("85%");

  }

  else if (volts <= 840)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("90%");

  }

  else if (volts <= 848)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("95%");

  }

  else if (volts <= 859)
  {
    lcd.setCursor(9, 0);
    lcd.print("V");
    lcd.setCursor(5, 0);
    lcd.print((x * 5) / 1023);
    lcd.setCursor(0, 0);
    lcd.print("100%");

  }
  delay(1000);
  lcd.clear();

}
