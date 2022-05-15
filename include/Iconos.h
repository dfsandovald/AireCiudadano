static const unsigned char PROGMEM Icono_bt_on[] = {
    B00000000,
    B00011100,
    B01010110,
    B00111100,
    B00111000,
    B00111100,
    B01010110,
    B00011100,
};

static const unsigned char PROGMEM Icono_sensor_live[] = {
    B00000000,
    B00000000,
    B00010100,
    B00101010,
    B01010101,
    B00101010,
    B00010100,
    B00000000,
};

static const unsigned char PROGMEM Icono_wifi_on[] = {
    B00000000,
    B00011000,
    B00111100,
    B01000010,
    B10011001,
    B00100100,
    B01000010,
    B00011000,
};

static const unsigned char PROGMEM Icono_data_on[] = {
    B00000000,
    B01100110,
    B11110110,
    B01100110,
    B01100110,
    B01101111,
    B01100110,
    B00000000,
};

static unsigned char Icono_data_on_BIG[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x00, 0x78, 0x30, 0x00,
   0xfc, 0x30, 0x00, 0xfe, 0x31, 0x00, 0xfe, 0x31, 0x00, 0x30, 0x30, 0x00,
   0x30, 0x30, 0x00, 0x30, 0x30, 0x00, 0x30, 0x30, 0x00, 0x30, 0xfe, 0x01,
   0x30, 0xfe, 0x01, 0x30, 0xfc, 0x00, 0x30, 0x78, 0x00, 0x30, 0x30, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

static unsigned char Icono_wifi_on_BIG[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0xe0, 0x7f, 0x00,
   0xf8, 0xff, 0x01, 0x3e, 0xc0, 0x07, 0x0f, 0x00, 0x0f, 0x87, 0x1f, 0x0e,
   0xe0, 0x7f, 0x00, 0xf0, 0xf0, 0x00, 0x38, 0xc0, 0x01, 0x10, 0x8f, 0x00,
   0xc0, 0x3f, 0x00, 0xc0, 0x39, 0x00, 0x80, 0x16, 0x00, 0x00, 0x0f, 0x00,
   0x00, 0x0f, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

static unsigned char SmileFaceGood[] = {                                     //32x32
  0x00, 0xf0, 0x0f, 0x00, 0x00, 0x0e, 0x70, 0x00, 0x00, 0x01, 0x80, 0x00,
  0xc0, 0x00, 0x00, 0x03, 0x20, 0x00, 0x00, 0x04, 0x10, 0x00, 0x00, 0x08,
  0x08, 0x00, 0x00, 0x10, 0x08, 0x00, 0x00, 0x10, 0x04, 0x00, 0x00, 0x20,
  0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 0x02, 0x0e, 0x70, 0x40,
  0x01, 0x0e, 0x70, 0x80, 0x01, 0x0e, 0x70, 0x80, 0x01, 0x00, 0x00, 0x80,
  0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80,
  0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x02, 0xff, 0xff, 0x40,
  0x02, 0x01, 0x80, 0x40, 0x02, 0x02, 0x40, 0x40, 0x04, 0x04, 0x20, 0x20,
  0x08, 0x08, 0x10, 0x10, 0x08, 0x10, 0x08, 0x10, 0x10, 0xe0, 0x07, 0x08,
  0x20, 0x00, 0x00, 0x04, 0xc0, 0x00, 0x00, 0x03, 0x00, 0x01, 0x80, 0x00,
  0x00, 0x0e, 0x70, 0x00, 0x00, 0xf0, 0x0f, 0x00 };


static unsigned char SmileFaceModerate[] = {                                     //32x32
  0x00, 0xf0, 0x0f, 0x00, 0x00, 0x0e, 0x70, 0x00, 0x00, 0x01, 0x80, 0x00,
  0xc0, 0x00, 0x00, 0x03, 0x20, 0x00, 0x00, 0x04, 0x10, 0x00, 0x00, 0x08,
  0x08, 0x00, 0x00, 0x10, 0x08, 0x00, 0x00, 0x10, 0x04, 0x00, 0x00, 0x20,
  0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40,
  0x01, 0x0e, 0x70, 0x80, 0x01, 0x0e, 0x70, 0x80, 0x01, 0x0e, 0x70, 0x80,
  0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80,
  0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x02, 0x00, 0x00, 0x40,
  0x02, 0x02, 0x40, 0x40, 0x02, 0x0c, 0x30, 0x40, 0x04, 0x30, 0x0c, 0x20,
  0x08, 0xc0, 0x03, 0x10, 0x08, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x08,
  0x20, 0x00, 0x00, 0x04, 0xc0, 0x00, 0x00, 0x03, 0x00, 0x01, 0x80, 0x00,
  0x00, 0x0e, 0x70, 0x00, 0x00, 0xf0, 0x0f, 0x00 };

static unsigned char SmileFaceUnhealthySGroups[] = {                                     //32x32
  0x00, 0xf0, 0x0f, 0x00, 0x00, 0x0e, 0x70, 0x00, 0x00, 0x01, 0x80, 0x00,
  0xc0, 0x00, 0x00, 0x03, 0x20, 0x00, 0x00, 0x04, 0x10, 0x00, 0x00, 0x08,
  0x08, 0x00, 0x00, 0x10, 0x08, 0x00, 0x00, 0x10, 0x04, 0x00, 0x00, 0x20,
  0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40,
  0x01, 0x0e, 0x70, 0x80, 0x01, 0x0e, 0x70, 0x80, 0x01, 0x0e, 0x70, 0x80,
  0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80,
  0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x02, 0x00, 0x00, 0x40,
  0x02, 0x00, 0x00, 0x40, 0x02, 0xfc, 0x3f, 0x40, 0x04, 0x00, 0x00, 0x20,
  0x08, 0x00, 0x00, 0x10, 0x08, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x08,
  0x20, 0x00, 0x00, 0x04, 0xc0, 0x00, 0x00, 0x03, 0x00, 0x01, 0x80, 0x00,
  0x00, 0x0e, 0x70, 0x00, 0x00, 0xf0, 0x0f, 0x00 };

static unsigned char SmileFaceUnhealthy[] = {                                     //32x32
  0x00, 0xF0, 0x0F, 0x00, 0x00, 0x0E, 0x70, 0x00, 0x00, 0x01, 0x80, 0x00, 
  0xC0, 0x00, 0x00, 0x03, 0x20, 0x00, 0x00, 0x04, 0x10, 0x00, 0x00, 0x08, 
  0x08, 0x00, 0x00, 0x10, 0x08, 0x00, 0x00, 0x10, 0x04, 0x00, 0x00, 0x20, 
  0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 
  0x01, 0x0E, 0x70, 0x80, 0x01, 0x0A, 0x50, 0x80, 0x01, 0x0E, 0x70, 0x80, 
  0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 
  0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x02, 0xC0, 0x03, 0x40, 
  0x02, 0x30, 0x0C, 0x40, 0x02, 0x0C, 0x30, 0x40, 0x04, 0x02, 0x40, 0x20, 
  0x08, 0x00, 0x00, 0x10, 0x08, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x08, 
  0x20, 0x00, 0x00, 0x04, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x01, 0x80, 0x00, 
  0x00, 0x0E, 0x70, 0x00, 0x00, 0xF0, 0x0F, 0x00, };

static unsigned char SmileFaceVeryUnhealthy[] = {                                     //32x32
  0x00, 0xF0, 0x0F, 0x00, 0x00, 0x0E, 0x70, 0x00, 0x00, 0x01, 0x80, 0x00, 
  0xC0, 0x00, 0x00, 0x03, 0x20, 0x00, 0x00, 0x04, 0x10, 0x00, 0x00, 0x08, 
  0x08, 0x00, 0x00, 0x10, 0x08, 0x00, 0x00, 0x10, 0x04, 0x0C, 0x30, 0x20, 
  0x02, 0x18, 0x18, 0x40, 0x02, 0x30, 0x0C, 0x40, 0x02, 0x60, 0x06, 0x40, 
  0x01, 0x00, 0x00, 0x80, 0x01, 0x0E, 0x70, 0x80, 0x01, 0x0A, 0x50, 0x80, 
  0x01, 0x0E, 0x70, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 
  0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x02, 0xC0, 0x03, 0x40, 
  0x02, 0x30, 0x0C, 0x40, 0x02, 0x0C, 0x30, 0x40, 0x04, 0x02, 0x40, 0x20, 
  0x08, 0x00, 0x00, 0x10, 0x08, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x08, 
  0x20, 0x00, 0x00, 0x04, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x01, 0x80, 0x00, 
  0x00, 0x0E, 0x70, 0x00, 0x00, 0xF0, 0x0F, 0x00, };

static unsigned char SmileFaceHazardous[] = {                                     //32x32
  0x00, 0xf0, 0x0f, 0x00, 0x00, 0x0e, 0x70, 0x00, 0x00, 0x01, 0x80, 0x00,
  0xc0, 0x00, 0x00, 0x03, 0x20, 0x00, 0x00, 0x04, 0x10, 0x00, 0x00, 0x08,
  0x08, 0x00, 0x00, 0x10, 0x08, 0x00, 0x00, 0x10, 0x04, 0x00, 0x00, 0x20,
  0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 0x02, 0x11, 0x88, 0x40,
  0x01, 0x0a, 0x50, 0x80, 0x01, 0x04, 0x20, 0x80, 0x01, 0x0a, 0x50, 0x80,
  0x01, 0x11, 0x88, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80,
  0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x02, 0x00, 0x00, 0x40,
  0x02, 0xfe, 0x7f, 0x40, 0x02, 0x00, 0x44, 0x40, 0x04, 0x00, 0x44, 0x20,
  0x08, 0x00, 0x7c, 0x10, 0x08, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x08,
  0x20, 0x00, 0x00, 0x04, 0xc0, 0x00, 0x00, 0x03, 0x00, 0x01, 0x80, 0x00,
  0x00, 0x0e, 0x70, 0x00, 0x00, 0xf0, 0x0f, 0x00 };

static unsigned char IconoAC [] PROGMEM = {
   0xf8, 0xff, 0xff, 0x1f, 0xfe, 0xff, 0xff, 0x7f, 0xfe, 0xff, 0xff, 0x7f,
   0xff, 0x7f, 0xff, 0xff, 0xff, 0xdb, 0xf5, 0xff, 0xff, 0x7b, 0xe0, 0xff,
   0x7f, 0x0f, 0x80, 0xff, 0xff, 0x1a, 0x00, 0xff, 0x7f, 0x00, 0x00, 0xff,
   0x6f, 0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00, 0xfe, 0x3f, 0x00, 0x00, 0xfa,
   0x2f, 0x00, 0x00, 0xfc, 0x07, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0xc0,
   0x01, 0x00, 0x00, 0xc0, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80,
   0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80,
   0x01, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xe0,
   0x1f, 0x40, 0x00, 0xfa, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xef, 0xfa, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0x7f,
   0xfe, 0xff, 0xff, 0x7f, 0xf8, 0xff, 0xff, 0x1f };

static unsigned char SmileFaceGoodBig[] = {
   0x00, 0x00, 0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xe0, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc,
   0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x17, 0xe8,
   0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0xfe, 0x03,
   0x00, 0x00, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xe0, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00,
   0x7e, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x80, 0x1f, 0x00,
   0x00, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x00, 0xc0, 0x0f, 0x00, 0x00, 0x00,
   0x00, 0xe0, 0x03, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00, 0x00, 0xc0,
   0x07, 0x00, 0x00, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0f, 0x00,
   0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x3c,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x3e, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xf8, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf0, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x01,
   0xc0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x03, 0xc0, 0x03,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0xe0, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x0f, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e,
   0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x38, 0x00,
   0x80, 0x1f, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x1c, 0x3c, 0x00, 0xc0, 0x3f,
   0x00, 0x00, 0xfc, 0x03, 0x00, 0x3c, 0x1c, 0x00, 0xc0, 0x7f, 0x00, 0x00,
   0xfe, 0x03, 0x00, 0x38, 0x1c, 0x00, 0xe0, 0x70, 0x00, 0x00, 0x0e, 0x07,
   0x00, 0x38, 0x1e, 0x00, 0xe0, 0x70, 0x00, 0x00, 0x0e, 0x07, 0x00, 0x78,
   0x0e, 0x00, 0xe0, 0x70, 0x00, 0x00, 0x8e, 0x07, 0x00, 0x70, 0x0e, 0x00,
   0xc0, 0x7f, 0x00, 0x00, 0xbe, 0x03, 0x00, 0x70, 0x0e, 0x00, 0xc0, 0x3f,
   0x00, 0x00, 0xfc, 0x03, 0x00, 0x70, 0x0e, 0x00, 0x80, 0x1f, 0x00, 0x00,
   0xf8, 0x01, 0x00, 0x70, 0x0f, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00,
   0x00, 0xf0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x07, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xe0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0,
   0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x07, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x0f, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x80, 0xaa, 0xaa, 0xaa,
   0xaa, 0x02, 0x00, 0xf0, 0x0e, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xff, 0x07,
   0x00, 0x70, 0x0e, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xff, 0x07, 0x00, 0x70,
   0x0e, 0x00, 0xe0, 0x49, 0x92, 0x24, 0x49, 0x07, 0x00, 0x70, 0x0e, 0x00,
   0xe0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x70, 0x1e, 0x00, 0xc0, 0x01,
   0x00, 0x00, 0x80, 0x03, 0x00, 0x78, 0x1c, 0x00, 0xc0, 0x01, 0x00, 0x00,
   0x80, 0x03, 0x00, 0x38, 0x1c, 0x00, 0xc0, 0x01, 0x00, 0x00, 0x80, 0x03,
   0x00, 0x38, 0x3c, 0x00, 0xc0, 0x01, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x3c,
   0x38, 0x00, 0x80, 0x03, 0x00, 0x00, 0xc0, 0x01, 0x00, 0x1c, 0x78, 0x00,
   0x80, 0x07, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x1e, 0x70, 0x00, 0x00, 0x07,
   0x00, 0x00, 0xe0, 0x00, 0x00, 0x0e, 0xf0, 0x00, 0x00, 0x0f, 0x00, 0x00,
   0xf0, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x78, 0x00,
   0x00, 0x07, 0xe0, 0x01, 0x00, 0x3c, 0x00, 0x00, 0x3c, 0x00, 0x80, 0x07,
   0xc0, 0x01, 0x00, 0xf8, 0x00, 0x00, 0x1f, 0x00, 0xc0, 0x03, 0xc0, 0x03,
   0x00, 0xf0, 0x03, 0xc0, 0x0f, 0x00, 0xc0, 0x03, 0x80, 0x07, 0x00, 0xe0,
   0x2f, 0xf8, 0x07, 0x00, 0xe0, 0x01, 0x00, 0x0f, 0x00, 0x80, 0xff, 0xff,
   0x01, 0x00, 0xf0, 0x00, 0x00, 0x1f, 0x00, 0x00, 0xfe, 0x7f, 0x00, 0x00,
   0xf8, 0x00, 0x00, 0x3e, 0x00, 0x00, 0xe0, 0x0b, 0x00, 0x00, 0x78, 0x00,
   0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0xf8,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0xf0, 0x01, 0x00,
   0x00, 0x00, 0x00, 0x80, 0x0f, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00,
   0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0,
   0x03, 0x00, 0x00, 0x80, 0x1f, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x01, 0x00,
   0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00,
   0xfc, 0x01, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x07,
   0x00, 0x00, 0xe0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x7f, 0x00, 0x00,
   0xfc, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x17, 0xe8, 0xff, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x00 };

static unsigned char SmileFaceModerateBig[] = {
   0x00, 0x00, 0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xe0, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc,
   0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x07, 0xe0,
   0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0xfc, 0x03,
   0x00, 0x00, 0x00, 0x00, 0xf0, 0x07, 0x00, 0x00, 0xe0, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00,
   0x7e, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x80, 0x1f, 0x00,
   0x00, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0x00,
   0x00, 0xe0, 0x03, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00, 0x00, 0xc0,
   0x07, 0x00, 0x00, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0f, 0x00,
   0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x3c,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x1e, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xf8, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf0, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x01,
   0xc0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x03, 0xc0, 0x01,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0xe0, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x0f, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e,
   0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x38, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x3c, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x38, 0x1c, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x00,
   0x00, 0x38, 0x1e, 0x00, 0x80, 0x1f, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x78,
   0x0e, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0xfc, 0x03, 0x00, 0x70, 0x0e, 0x00,
   0xe0, 0x79, 0x00, 0x00, 0x9e, 0x07, 0x00, 0x70, 0x0e, 0x00, 0xe0, 0x70,
   0x00, 0x00, 0x0e, 0x07, 0x00, 0x70, 0x0e, 0x00, 0xe0, 0x70, 0x00, 0x00,
   0x0e, 0x07, 0x00, 0x70, 0x0f, 0x00, 0xe0, 0x79, 0x00, 0x00, 0x9e, 0x07,
   0x00, 0xf0, 0x07, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0xfc, 0x03, 0x00, 0xe0,
   0x07, 0x00, 0x80, 0x3f, 0x00, 0x00, 0xf8, 0x01, 0x00, 0xe0, 0x07, 0x00,
   0x00, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xe0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0,
   0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x07, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xf0, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x70, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70,
   0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0e, 0x00,
   0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x70, 0x1e, 0x00, 0x80, 0x03,
   0x00, 0x00, 0xc0, 0x01, 0x00, 0x78, 0x1c, 0x00, 0x80, 0x0f, 0x00, 0x00,
   0xf0, 0x01, 0x00, 0x38, 0x1c, 0x00, 0x00, 0x1f, 0x00, 0x00, 0xf8, 0x00,
   0x00, 0x38, 0x3c, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x3c,
   0x38, 0x00, 0x00, 0xf8, 0x01, 0x80, 0x1f, 0x00, 0x00, 0x1c, 0x78, 0x00,
   0x00, 0xf0, 0x0f, 0xf0, 0x0f, 0x00, 0x00, 0x1e, 0x70, 0x00, 0x00, 0xc0,
   0xff, 0xff, 0x03, 0x00, 0x00, 0x0e, 0xf0, 0x00, 0x00, 0x00, 0xff, 0x7f,
   0x00, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00,
   0x00, 0x07, 0xe0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07,
   0xc0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0xc0, 0x03,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x03, 0x80, 0x07, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xf0, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf0, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00,
   0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0xf8,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0xf0, 0x01, 0x00,
   0x00, 0x00, 0x00, 0x80, 0x0f, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00,
   0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0x00, 0x00, 0xe0,
   0x03, 0x00, 0x00, 0x80, 0x1f, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x01, 0x00,
   0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00,
   0xfc, 0x01, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x07,
   0x00, 0x00, 0xe0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00,
   0xfc, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x07, 0xe0, 0xff, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x00 };

static unsigned char SmileFaceUnhealthySGroupsBig[] = {
   0x00, 0x00, 0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xe0, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc,
   0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x07, 0xe0,
   0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0xfc, 0x03,
   0x00, 0x00, 0x00, 0x00, 0xf0, 0x07, 0x00, 0x00, 0xe0, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00,
   0x7e, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x80, 0x1f, 0x00,
   0x00, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0x00,
   0x00, 0xe0, 0x03, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00, 0x00, 0xc0,
   0x07, 0x00, 0x00, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0f, 0x00,
   0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x3c,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x1e, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xf8, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf0, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x01,
   0xc0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x03, 0xc0, 0x01,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0xe0, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x0f, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e,
   0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x38, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x3c, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x38, 0x1c, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x00,
   0x00, 0x38, 0x1e, 0x00, 0x80, 0x1f, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x78,
   0x0e, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0xfc, 0x03, 0x00, 0x70, 0x0e, 0x00,
   0xe0, 0x79, 0x00, 0x00, 0x9e, 0x07, 0x00, 0x70, 0x0e, 0x00, 0xe0, 0x70,
   0x00, 0x00, 0x0e, 0x07, 0x00, 0x70, 0x0e, 0x00, 0xe0, 0x70, 0x00, 0x00,
   0x0e, 0x07, 0x00, 0x70, 0x0f, 0x00, 0xe0, 0x79, 0x00, 0x00, 0x8e, 0x07,
   0x00, 0xf0, 0x07, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0xfc, 0x03, 0x00, 0xe0,
   0x07, 0x00, 0x80, 0x1f, 0x00, 0x00, 0xf8, 0x01, 0x00, 0xe0, 0x07, 0x00,
   0x00, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xe0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0,
   0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x07, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xf0, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x70, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70,
   0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0e, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x1e, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x1c, 0x00, 0xc0, 0xff, 0xff, 0xff,
   0xff, 0x03, 0x00, 0x38, 0x1c, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xff, 0x07,
   0x00, 0x38, 0x3c, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xff, 0x07, 0x00, 0x3c,
   0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x78, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x70, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x07, 0xe0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07,
   0xc0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0xc0, 0x03,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x03, 0x80, 0x07, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xf0, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf0, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00,
   0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0xf8,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0xf0, 0x01, 0x00,
   0x00, 0x00, 0x00, 0x80, 0x0f, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00,
   0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0x00, 0x00, 0xe0,
   0x03, 0x00, 0x00, 0x80, 0x1f, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x01, 0x00,
   0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00,
   0xfc, 0x01, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x07,
   0x00, 0x00, 0xe0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00,
   0xfc, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x07, 0xe0, 0xff, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x00 };

static unsigned char SmileFaceUnhealthyBig[] = {
   0x00, 0x00, 0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xe0, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc,
   0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x07, 0xe0,
   0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0xfc, 0x03,
   0x00, 0x00, 0x00, 0x00, 0xf0, 0x07, 0x00, 0x00, 0xe0, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00,
   0x7e, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x80, 0x1f, 0x00,
   0x00, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0x00,
   0x00, 0xe0, 0x03, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00, 0x00, 0xc0,
   0x07, 0x00, 0x00, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0f, 0x00,
   0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x3c,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x1e, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xf8, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf0, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x01,
   0xc0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x03, 0xc0, 0x01,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0xe0, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x0f, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e,
   0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x38, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x3c, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x38, 0x1c, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x00,
   0x00, 0x38, 0x1e, 0x00, 0x80, 0x1f, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x78,
   0x0e, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0xfc, 0x03, 0x00, 0x70, 0x0e, 0x00,
   0xe0, 0x79, 0x00, 0x00, 0x9e, 0x07, 0x00, 0x70, 0x0e, 0x00, 0xe0, 0x70,
   0x00, 0x00, 0x0e, 0x07, 0x00, 0x70, 0x0e, 0x00, 0xe0, 0x70, 0x00, 0x00,
   0x0e, 0x07, 0x00, 0x70, 0x0f, 0x00, 0xe0, 0x79, 0x00, 0x00, 0x8e, 0x07,
   0x00, 0xf0, 0x07, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0xfc, 0x03, 0x00, 0xe0,
   0x07, 0x00, 0x80, 0x1f, 0x00, 0x00, 0xf8, 0x01, 0x00, 0xe0, 0x07, 0x00,
   0x00, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xe0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0,
   0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x07, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xf0, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x70, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70,
   0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0e, 0x00,
   0x00, 0x00, 0xf8, 0x1f, 0x00, 0x00, 0x00, 0x70, 0x1e, 0x00, 0x00, 0x00,
   0xff, 0xff, 0x00, 0x00, 0x00, 0x78, 0x1c, 0x00, 0x00, 0xc0, 0xff, 0xff,
   0x03, 0x00, 0x00, 0x38, 0x1c, 0x00, 0x00, 0xf0, 0x07, 0xe0, 0x0f, 0x00,
   0x00, 0x38, 0x3c, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x3c,
   0x38, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x1c, 0x78, 0x00,
   0x00, 0x1f, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x1e, 0x70, 0x00, 0x80, 0x07,
   0x00, 0x00, 0xe0, 0x01, 0x00, 0x0e, 0xf0, 0x00, 0x80, 0x03, 0x00, 0x00,
   0xc0, 0x01, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x01, 0x00, 0x00, 0x80, 0x00,
   0x00, 0x07, 0xe0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07,
   0xc0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0xc0, 0x03,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x03, 0x80, 0x07, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xf0, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf0, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00,
   0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0xf8,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0xf0, 0x01, 0x00,
   0x00, 0x00, 0x00, 0x80, 0x0f, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00,
   0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0x00, 0x00, 0xe0,
   0x03, 0x00, 0x00, 0x80, 0x1f, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x01, 0x00,
   0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00,
   0xfc, 0x01, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x07,
   0x00, 0x00, 0xe0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00,
   0xfc, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x07, 0xe0, 0xff, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x00 };

static unsigned char SmileFaceVeryUnhealthyBig[] = {
   0x00, 0x00, 0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xe0, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc,
   0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x07, 0xe0,
   0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0xfc, 0x03,
   0x00, 0x00, 0x00, 0x00, 0xf0, 0x07, 0x00, 0x00, 0xe0, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00,
   0x7e, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x80, 0x1f, 0x00,
   0x00, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0x00,
   0x00, 0xe0, 0x03, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00, 0x00, 0xc0,
   0x07, 0x00, 0x00, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0f, 0x00,
   0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x3c,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x1e, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xf8, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf0, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x01,
   0xc0, 0x03, 0x00, 0x0e, 0x00, 0x00, 0x70, 0x00, 0xc0, 0x03, 0xc0, 0x01,
   0x00, 0x3e, 0x00, 0x00, 0x7c, 0x00, 0x80, 0x03, 0xe0, 0x01, 0x00, 0xfc,
   0x00, 0x00, 0x3f, 0x00, 0x80, 0x07, 0xe0, 0x00, 0x00, 0xf0, 0x03, 0xc0,
   0x0f, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0xc0, 0x03, 0xc0, 0x03, 0x00,
   0x00, 0x0f, 0x70, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x0e,
   0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x38, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x3c, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x38, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x38, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78,
   0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0e, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0e, 0x00, 0x80, 0x1f,
   0x00, 0x00, 0xf8, 0x01, 0x00, 0x70, 0x0e, 0x00, 0xc0, 0x3f, 0x00, 0x00,
   0xfc, 0x03, 0x00, 0x70, 0x0f, 0x00, 0xc0, 0x7f, 0x00, 0x00, 0xfe, 0x03,
   0x00, 0xf0, 0x07, 0x00, 0xe0, 0x70, 0x00, 0x00, 0x0e, 0x07, 0x00, 0xe0,
   0x07, 0x00, 0xe0, 0x70, 0x00, 0x00, 0x0e, 0x07, 0x00, 0xe0, 0x07, 0x00,
   0xe0, 0x70, 0x00, 0x00, 0x0e, 0x07, 0x00, 0xe0, 0x07, 0x00, 0xc0, 0x7f,
   0x00, 0x00, 0xfe, 0x03, 0x00, 0xe0, 0x07, 0x00, 0xc0, 0x3f, 0x00, 0x00,
   0xfc, 0x03, 0x00, 0xe0, 0x07, 0x00, 0x80, 0x1f, 0x00, 0x00, 0xf8, 0x01,
   0x00, 0xe0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0,
   0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x07, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xf0, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x70, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70,
   0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0e, 0x00,
   0x00, 0x00, 0xf8, 0x1f, 0x00, 0x00, 0x00, 0x70, 0x1e, 0x00, 0x00, 0x00,
   0xff, 0xff, 0x00, 0x00, 0x00, 0x78, 0x1c, 0x00, 0x00, 0xc0, 0xff, 0xff,
   0x03, 0x00, 0x00, 0x38, 0x1c, 0x00, 0x00, 0xf0, 0x07, 0xe0, 0x0f, 0x00,
   0x00, 0x38, 0x3c, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x3c,
   0x38, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x1c, 0x78, 0x00,
   0x00, 0x1f, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x1e, 0x70, 0x00, 0x80, 0x07,
   0x00, 0x00, 0xe0, 0x01, 0x00, 0x0e, 0xf0, 0x00, 0x80, 0x03, 0x00, 0x00,
   0xc0, 0x01, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x01, 0x00, 0x00, 0x80, 0x00,
   0x00, 0x07, 0xe0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07,
   0xc0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0xc0, 0x03,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x03, 0x80, 0x07, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xf0, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf0, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00,
   0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0xf8,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0xf0, 0x01, 0x00,
   0x00, 0x00, 0x00, 0x80, 0x0f, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00,
   0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0x00, 0x00, 0xe0,
   0x03, 0x00, 0x00, 0x80, 0x1f, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x01, 0x00,
   0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00,
   0xfc, 0x01, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x07,
   0x00, 0x00, 0xe0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00,
   0xfc, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x07, 0xe0, 0xff, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x00 };

static unsigned char SmileFaceHazardousBig[] = {
   0x00, 0x00, 0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xe0, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc,
   0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff,
   0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x03, 0xc0, 0xff, 0x03,
   0x00, 0x00, 0x00, 0x00, 0xf0, 0x3f, 0x00, 0x00, 0xfc, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0x07, 0x00, 0x00, 0xe0, 0x3f, 0x00, 0x00, 0x00, 0x00,
   0xfe, 0x01, 0x00, 0x00, 0x80, 0x7f, 0x00, 0x00, 0x00, 0x80, 0x7f, 0x00,
   0x00, 0x00, 0x00, 0xfe, 0x01, 0x00, 0x00, 0xc0, 0x1f, 0x00, 0x00, 0x00,
   0x00, 0xf8, 0x03, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00, 0x00, 0xe0,
   0x07, 0x00, 0x00, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0f, 0x00,
   0x00, 0xf8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1f, 0x00, 0x00, 0xfc,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x7e, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf8, 0x00, 0x80, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01,
   0xc0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x03, 0xc0, 0x03,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x03, 0xe0, 0x03, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xc0, 0x07, 0xe0, 0x01, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x80, 0x07, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x80, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f,
   0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x78, 0x00,
   0x20, 0xc0, 0x00, 0x00, 0x03, 0x04, 0x00, 0x1e, 0x7c, 0x00, 0xf0, 0xe0,
   0x01, 0x80, 0x07, 0x0f, 0x00, 0x3e, 0x3c, 0x00, 0xf8, 0xf0, 0x03, 0xc0,
   0x0f, 0x1f, 0x00, 0x3c, 0x3c, 0x00, 0xf0, 0xf9, 0x01, 0x80, 0x9f, 0x0f,
   0x00, 0x3c, 0x3e, 0x00, 0xe0, 0xff, 0x00, 0x00, 0xff, 0x07, 0x00, 0x7c,
   0x1e, 0x00, 0xc0, 0x7f, 0x00, 0x00, 0xfe, 0x03, 0x00, 0x78, 0x1e, 0x00,
   0x80, 0x3f, 0x00, 0x00, 0xfc, 0x01, 0x00, 0x78, 0x1e, 0x00, 0x80, 0x3f,
   0x00, 0x00, 0xfc, 0x01, 0x00, 0x78, 0x1e, 0x00, 0xc0, 0x7f, 0x00, 0x00,
   0xfe, 0x03, 0x00, 0x78, 0x0f, 0x00, 0xe0, 0x7f, 0x00, 0x00, 0xfe, 0x07,
   0x00, 0xf0, 0x0f, 0x00, 0xf0, 0xfb, 0x00, 0x00, 0xdf, 0x0f, 0x00, 0xf0,
   0x0f, 0x00, 0xf8, 0xf1, 0x03, 0x80, 0x8f, 0x1f, 0x00, 0xf0, 0x0f, 0x00,
   0xf0, 0xe0, 0x01, 0x80, 0x07, 0x0f, 0x00, 0xf0, 0x0f, 0x00, 0x60, 0xc0,
   0x00, 0x00, 0x03, 0x06, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x0f, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xf0, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x78, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78,
   0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x1e, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x3e, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x3c, 0x3c, 0x00, 0xf8, 0xff, 0xff, 0xff, 0xff, 0x1f,
   0x00, 0x3c, 0x7c, 0x00, 0xf8, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x3e,
   0x78, 0x00, 0xf8, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x1e, 0xf8, 0x00,
   0x00, 0x00, 0x00, 0xf0, 0x00, 0x1e, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00,
   0x00, 0xf0, 0x00, 0x1c, 0x00, 0x0f, 0xf0, 0x01, 0x00, 0x00, 0x00, 0xf0,
   0x00, 0x1c, 0x80, 0x0f, 0xe0, 0x01, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x1c,
   0x80, 0x07, 0xe0, 0x03, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x1e, 0xc0, 0x07,
   0xc0, 0x03, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x1e, 0xc0, 0x03, 0xc0, 0x07,
   0x00, 0x00, 0x00, 0xf0, 0x00, 0x1e, 0xe0, 0x03, 0x80, 0x0f, 0x00, 0x00,
   0x00, 0xe0, 0x01, 0x0f, 0xf0, 0x01, 0x00, 0x1f, 0x00, 0x00, 0x00, 0xe0,
   0xc7, 0x0f, 0xf8, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x07,
   0xfc, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x80, 0xff, 0x03, 0x7e, 0x00,
   0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x3f, 0x00, 0x00, 0xf8,
   0x01, 0x00, 0x00, 0x00, 0x10, 0x80, 0x1f, 0x00, 0x00, 0xf0, 0x03, 0x00,
   0x00, 0x00, 0x00, 0xc0, 0x0f, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00,
   0x00, 0xe0, 0x07, 0x00, 0x00, 0xc0, 0x1f, 0x00, 0x00, 0x00, 0x00, 0xf8,
   0x03, 0x00, 0x00, 0x80, 0x7f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x00,
   0x00, 0x00, 0xfe, 0x01, 0x00, 0x00, 0x80, 0x7f, 0x00, 0x00, 0x00, 0x00,
   0xfc, 0x07, 0x00, 0x00, 0xe0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x3f,
   0x00, 0x00, 0xfc, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x03, 0xc0,
   0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x00 };