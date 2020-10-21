#include "SPIFFS.h"
#include "FS.h"
#include "libraries/TFT_eSPI/TFT_eSPI.h"

void init();

boolean chDir(fs::FS &fs, const char * dirname);

void listDir(fs::FS &fs, const char * dirname, uint8_t levels, TFT_eSPI *tft);

void drawBmp(const char *filename, int16_t x, int16_t y, TFT_eSPI *tft);