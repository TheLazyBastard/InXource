//------------------------------------------------------------------------------
// File generated by LCD Assistant
// http://en.radzio.dxp.pl/bitmap_converter/
// NB : Array used as display buffer, should not be declared as const.
//------------------------------------------------------------------------------

#ifndef PINGUINO_84x48_H
#define PINGUINO_84x48_H

#include <typedef.h>

u8 logo[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40,
0xA0, 0xD0, 0xB0, 0x68, 0x78, 0x24, 0x2C, 0x2C, 0x2C, 0x2C, 0x3E, 0x7E, 0xBC, 0xFF, 0x7E, 0xFC,
0xBE, 0xBC, 0x7C, 0x7C, 0xF4, 0xB8, 0xA8, 0x50, 0xD0, 0xA0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xC0, 0xBE, 0xF1, 0xFE, 0x1C, 0xA2, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x03, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x82, 0x35, 0xDA, 0xF1,
0x7E, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0x80, 0x50, 0x4C, 0x74, 0x3A,
0x3A, 0xFE, 0x7D, 0xFF, 0xFF, 0x1F, 0x07, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x01, 0x03, 0x05, 0x1E, 0x7D, 0xBE, 0xF4, 0xF8, 0xF8, 0xA8, 0xE8, 0x10, 0x40, 0x80, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x38, 0x47, 0x3F, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x1F, 0x41, 0x1F, 0x00, 0x00, 0x00,
0x01, 0x01, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x05, 0x09,
0x0A, 0x14, 0x18, 0x30, 0x30, 0x40, 0x40, 0xC0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xF8, 0xE4, 0xFA, 0xC5, 0x82, 0x81, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20, 0x10, 0x10, 0x10, 0x10, 0x38, 0x24, 0x24, 0x24,
0x24, 0x18, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xB0, 0x60, 0x20, 0xA0, 0xA0,
0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
0x01, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x07, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,
0x05, 0x05, 0x04, 0x05, 0x05, 0x05, 0x05, 0x05, 0x06, 0x04, 0x06, 0x06, 0x06, 0x0A, 0x0A, 0x16,
0x12, 0x12, 0x23, 0x23, 0x21, 0x21, 0x21, 0x21, 0x29, 0x49, 0x69, 0x68, 0x28, 0x38, 0x00, 0x00,
0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

#endif // PINGUINO_84x48_H
