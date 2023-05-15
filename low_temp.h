#define celcius_width 32
#define celcius_height 32

uint8_t low_temp[] PROGMEM= {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x92,0xdb,0xdb,0x6e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x92,0xff,0xff,0xff,0xdb,0x6e,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x32,0x0e,0x0e,0x32,0x09,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xff,0xff,0xff,0xdb,0xdb,0x00,0x00,0x00,0x00,0x09,0x04,0x00,0x32,0x37,0x37,0x32,0x00,0x04,0x09,0x00,0x00,0x00,0x00
,0x00,0x00,0x37,0x37,0x37,0x37,0x00,0x00,0xff,0xff,0xff,0xff,0xdb,0xdb,0x00,0x00,0x04,0x05,0x0e,0x0e,0x00,0x00,0x32,0x32,0x00,0x00,0x0e,0x0e,0x05,0x04,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xdb,0xdb,0x00,0x00,0x04,0x37,0x33,0x33,0x00,0x00,0x09,0x0a,0x00,0x00,0x33,0x33,0x37,0x04,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xdb,0xdb,0x00,0x00,0x00,0x0a,0x37,0x37,0x0e,0x00,0x09,0x0a,0x00,0x0e,0x37,0x37,0x0a,0x00,0x00,0x00
,0x00,0x00,0x00,0x37,0x37,0x37,0x00,0x00,0xff,0xff,0xff,0xff,0xdb,0xdb,0x00,0x00,0x09,0x0e,0x05,0x00,0x2e,0x37,0x33,0x33,0x37,0x2e,0x00,0x05,0x2e,0x09,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xdb,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x37,0x37,0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xdb,0xdb,0x00,0x00,0x09,0x2e,0x05,0x00,0x2e,0x37,0x33,0x33,0x37,0x2e,0x00,0x05,0x2e,0x09,0x00,0x00
,0x00,0x00,0x37,0x37,0x37,0x37,0x00,0x00,0xff,0xff,0xff,0xff,0xdb,0xdb,0x00,0x00,0x00,0x09,0x37,0x37,0x0e,0x00,0x09,0x0a,0x00,0x0e,0x37,0x37,0x0a,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xdb,0xdb,0x00,0x00,0x04,0x37,0x33,0x33,0x00,0x00,0x09,0x0a,0x00,0x00,0x33,0x33,0x37,0x04,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xdb,0xdb,0x00,0x00,0x04,0x05,0x0e,0x0e,0x00,0x00,0x32,0x32,0x00,0x00,0x0e,0x0e,0x05,0x04,0x00,0x00
,0x00,0x00,0x00,0x37,0x37,0x37,0x00,0x00,0xff,0xff,0xff,0xff,0xdb,0xdb,0x00,0x00,0x00,0x00,0x09,0x04,0x00,0x32,0x37,0x37,0x32,0x00,0x04,0x09,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x9b,0x9b,0xdb,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x32,0x0e,0x0e,0x32,0x09,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x9b,0x9b,0xdb,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x37,0x37,0x37,0x37,0x00,0x00,0xff,0xff,0x9b,0x9b,0xdb,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x9b,0x9b,0xdb,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x9b,0x9b,0xdb,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x92,0xff,0xff,0x9b,0x9b,0xdb,0xdb,0x92,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x6e,0xff,0xff,0xff,0x9b,0x9b,0xff,0xdb,0xdb,0x6d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0x9b,0x57,0x37,0x9b,0xdb,0xdb,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x49,0xff,0xff,0xbb,0x37,0x37,0x37,0x37,0xbb,0xdb,0xdb,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x6d,0xff,0xff,0x9b,0x37,0x37,0x37,0x37,0x9b,0xdb,0xdb,0x6d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x49,0xff,0xff,0xbb,0x37,0x37,0x37,0x37,0xbb,0xdb,0xdb,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0x9b,0x57,0x57,0x9b,0xff,0xdb,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x92,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdb,0x6e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xb6,0xff,0xff,0xff,0xff,0xff,0xff,0x92,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x49,0xb7,0xff,0xff,0xb7,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};