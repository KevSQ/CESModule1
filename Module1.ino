#define DELAY 3000 //A general purpose delay value
#define TFT_WIDTH 160
#define TFT_HEIGHT 128


#include <TFT_eSPI.h>
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();


int timeSince = 0;
int rotation = 1;
void setup(void) {
  // put your setup code here, to run once:
  tft.init();
  tft.setRotation(1);
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(20);
  rotation = rotation + 1;
  drawMovingText(rotation);
}

void drawMovingText(int setRotation) {
  timeSince = millis();
  tft.setTextSize(1);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE, TFT_WHITE);
  tft.drawString("Do you love me?", 70, 64, 2);
  tft.drawEllipse(10, 120, 30, 30, TFT_RED);
  tft.fillEllipse(10, 120, 30, 30, TFT_RED);
  delay(DELAY);

  tft.fillScreen(TFT_WHITE);
  tft.setTextColor(TFT_BLACK, TFT_BLACK);
  tft.drawString("No. Do you know why?", 70, 64, 2);
  tft.drawEllipse(220, 10, 30, 30, TFT_BLUE);
  tft.fillEllipse(220, 10, 30, 30, TFT_BLUE);
  delay(DELAY);

  tft.fillScreen(TFT_WHITE);
  tft.setTextColor(TFT_BLACK, TFT_BLACK);
  tft.drawEllipse(220, 10, 30, 30, TFT_BLUE);
  tft.fillEllipse(220, 10, 30, 30, TFT_BLUE);
  tft.drawString("Because I'm too high up to love you!", 5, 64, 2);
  delay(DELAY);

  tft.fillScreen(TFT_RED);
  tft.setTextColor(TFT_WHITE, TFT_WHITE);
  tft.drawString("A Love Story about Two Circles", 15, 64, 2);
  delay(5000);
}