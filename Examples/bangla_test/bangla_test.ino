#include <ESP32Video.h>
#include "BanglaTextPrinter.h"
#include "BanglaMNRegular_21pt.h"
#include "Kalpurush_20pt.h"
#include "Kohinur_22pt.h"
#include "SangamMN_21pt.h"

const int redPin = 25, greenPin = 14, bluePin = 13, hsyncPin = 32, vsyncPin = 33;
VGA3Bit videodisplay;

void setup() {
  Serial.begin(115200);
  videodisplay.setFrameBufferCount(2);
  videodisplay.init(VGAMode::MODE320x240, redPin, greenPin, bluePin, hsyncPin, vsyncPin);
  videodisplay.clear(videodisplay.RGB(0, 0, 0));

  //BanglaPrinter::drawBanglaLine("বাংলা টেস্ট ০১২৩৪৫৬৭৮৯", 5, 40, &SangamMN_21pt, videodisplay, 21,255,255,255);
  //BanglaPrinter::drawBanglaLine("বাংলা টেস্ট ০১২৩৪৫৬৭৮৯", 35, 40, &BanglaMNRegular_21pt, videodisplay, 21,255,255,255);
  BanglaPrinter::drawBanglaLine("বাংলা টেস্ট ০১২৩৪৫৬৭৮৯", 65, 40, &Kalpurush_20pt, videodisplay, 21,255,255,255);
  BanglaPrinter::drawBanglaLine("বাংলা টেস্ট ০১২৩৪৫৬৭৮৯", 95, 40, &Kohinur_22pt, videodisplay, 21,255,255,255);
  // BanglaPrinter::drawBanglaLine("৪১৬ প্রোজেক্ট প্রেজেন্টেশন", 140, 60, &Kalpurush_20pt, videodisplay, 20,255,255,255);
  videodisplay.show();
}

void loop() {}
