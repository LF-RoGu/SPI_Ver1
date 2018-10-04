

#include "LCD_nokia_images.h"

const uint8_t ITESO[] = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x20, 0x20, 0x30, 0x30, 0x30, 0x38, 0x38, 0x3C, 0x3C, 0x7C, 0x7C, 0x7C, 0xFC, 0xFE, 0xFE,
		0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFE,
		0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0x7C, 0x7C, 0x7C, 0x7C, 0x3C, 0x38, 0x38, 0x30, 0x30,
		0x30, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0xFC, 0xFE, 0xF8, 0xE0,
		0x80, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
		0xFE, 0xFE, 0xFC, 0xFC, 0xFC, 0xFD, 0xF9, 0x79, 0x7B, 0x33, 0xB7, 0x87, 0x87, 0xCF, 0xCF, 0xC7,
		0x87, 0xB7, 0x37, 0x73, 0x7B, 0xF9, 0xFD, 0xFC, 0xFC, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x1E, 0x04, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xF0, 0xFE, 0xFC,
		0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0x01, 0x03, 0x07,
		0x0F, 0x1F, 0x1F, 0x0F, 0x67, 0xF7, 0xF3, 0x9B, 0x9D, 0x9C, 0x9C, 0x9E, 0x9F, 0x9F, 0x9F, 0x9F,
		0x9F, 0x00, 0x00, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9E, 0x9C, 0x9C, 0x9D, 0x9B, 0xF3, 0xF7, 0x67,
		0x4F, 0x1F, 0x1F, 0x0F, 0x0F, 0x07, 0x03, 0x81, 0xC0, 0xE0, 0xF0, 0xF0, 0xF8, 0xFC, 0xFE, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xF8, 0x00, 0x00, 0x1F, 0x7F, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x9F, 0xCF, 0xE7, 0xF3, 0xFB,
		0xFD, 0xFC, 0xFE, 0xFE, 0xFC, 0xFC, 0xF8, 0xF0, 0xF0, 0xE0, 0xC0, 0xC1, 0x83, 0x83, 0x07, 0x07,
		0x0F, 0x1F, 0x1F, 0x3F, 0x3F, 0x70, 0x70, 0x3F, 0x3F, 0x1F, 0x1F, 0x0F, 0x07, 0x07, 0x83, 0x83,
		0xC1, 0xC0, 0xE0, 0xF0, 0xF0, 0xF8, 0xFC, 0xFC, 0xFE, 0xFE, 0xFC, 0xF9, 0xF3, 0xF3, 0xC7, 0x8F,
		0x1F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x1F, 0x00,
		0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x3F, 0x0F, 0x03, 0x00, 0x08, 0x1E, 0x3F,
		0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x0F, 0x0F, 0x0F, 0x87,
		0x87, 0x83, 0xC3, 0xC3, 0xC0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0xE0, 0xC2,
		0xC3, 0xC3, 0x87, 0x87, 0x07, 0x0F, 0x0F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F,
		0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1C, 0x00, 0x01, 0x03, 0x0F, 0x3F, 0x3F, 0x1F, 0x0F, 0x07, 0x03,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x0C, 0x0C, 0x0C, 0x1C, 0x1E, 0x1E, 0x1E, 0x1E, 0x3E,
		0x3F, 0x3F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F,
		0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x3F, 0x3E, 0x3E, 0x1E, 0x1E, 0x1E,
		0x1C, 0x1C, 0x0C, 0x0C, 0x0C, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		};

//------------------------------------------------------------------------------
// File generated by LCD Assistant
// http://en.radzio.dxp.pl/bitmap_converter/
//------------------------------------------------------------------------------

const uint8_t teolosico [] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xC0, 0xC0, 0xA0, 0xA0, 0xA0, 0x90, 0x90, 0x91, 0x91, 0xB2, 0xF7, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0x27, 0xC3, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x10, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x02, 0x02, 0x00, 0x01, 0x01, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0D, 0x99, 0x80, 0x80, 0x01, 0x01, 0x04, 0x04, 0x00,
0x01, 0x07, 0x03, 0x03, 0x07, 0xFF, 0xFF, 0xFC, 0xF0, 0xC0, 0xC0, 0xC0, 0xE0, 0xC0, 0xC0, 0xC0,
0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8,
0xF8, 0xF8, 0xF8, 0xF8, 0xFC, 0xFC, 0xFC, 0xFE, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0,
0xE0, 0xC0, 0x80, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x02, 0x01,
0x00, 0x00, 0x00, 0x10, 0x00, 0x01, 0x00, 0x09, 0x09, 0x01, 0x01, 0x01, 0x1B, 0x1B, 0x19, 0x18,
0x08, 0x08, 0x08, 0x80, 0xC0, 0xC0, 0xE0, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xEF, 0xEE,
0xEC, 0xC6, 0x86, 0x97, 0x87, 0xC6, 0x87, 0xE5, 0xFD, 0xFF, 0xFF, 0xFB, 0xFB, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x3F, 0x1F,
0x1F, 0x1F, 0x0F, 0x0F, 0x0F, 0x07, 0x07, 0x01, 0x03, 0x03, 0x03, 0x03, 0x02, 0x06, 0x06, 0x0C,
0x0C, 0x0C, 0x08, 0x18, 0x10, 0x10, 0x50, 0x50, 0x50, 0x58, 0x78, 0xF8, 0xF8, 0x00, 0x00, 0x00,
0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x07, 0x03, 0x03, 0x07, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80,
0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x04, 0x84, 0x9C,
0xBC, 0xF9, 0xB7, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x02,
0xFE, 0x80, 0x80, 0x80, 0xFC, 0x02, 0xFE, 0x80, 0x80, 0x80, 0xB6, 0xB4, 0xFF, 0x80, 0x80, 0x80,
0xBF, 0xBE, 0xC1, 0x80, 0x80, 0x80, 0x3E, 0x80, 0x80, 0x01, 0x7F, 0x88, 0x90, 0x90, 0xA2, 0x84,
0x84, 0x8C, 0xFF, 0x80, 0x80, 0x80, 0xFF, 0xC1, 0x80, 0x80, 0xBE, 0xBE, 0x88, 0x88, 0xC9, 0xFF,
0x81, 0x80, 0x80, 0xBE, 0x80, 0x80, 0x80, 0xC1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};

