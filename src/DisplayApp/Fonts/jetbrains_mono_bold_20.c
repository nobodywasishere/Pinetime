#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef JETBRAINS_MONO_BOLD_20
#define JETBRAINS_MONO_BOLD_20 1
#endif

#if JETBRAINS_MONO_BOLD_20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */
    0x0,

    /* U+21 "!" */
    0xff, 0xff, 0xff, 0xe0, 0xf, 0xc0,

    /* U+22 "\"" */
    0xef, 0xdf, 0xbf, 0x7e, 0xfd, 0xc0,

    /* U+23 "#" */
    0x8, 0xc3, 0x10, 0x62, 0x3f, 0xf7, 0xfe, 0x23,
    0x4, 0x61, 0x88, 0x31, 0x1f, 0xfb, 0xff, 0x19,
    0x82, 0x30, 0xc4, 0x0,

    /* U+24 "$" */
    0x8, 0x2, 0x1, 0xc1, 0xfe, 0xeb, 0xf2, 0x7c,
    0x83, 0xa0, 0x7c, 0xf, 0xc0, 0xf8, 0x27, 0x9,
    0xf2, 0x7f, 0xf9, 0xfc, 0x8, 0x2, 0x0, 0x80,

    /* U+25 "%" */
    0x78, 0x1f, 0x83, 0x30, 0x66, 0x1f, 0xcc, 0xf2,
    0x1, 0x80, 0xde, 0x67, 0xf8, 0xcc, 0x19, 0x83,
    0x30, 0x7e, 0x7, 0x80,

    /* U+26 "&" */
    0x1e, 0x7, 0xe1, 0xce, 0x38, 0x7, 0x0, 0x70,
    0x1e, 0x7, 0x66, 0xed, 0xdc, 0xf3, 0x9c, 0x73,
    0xcf, 0xfc, 0xf9, 0x80,

    /* U+27 "'" */
    0xff, 0xff, 0xc0,

    /* U+28 "(" */
    0x2, 0x1c, 0xfb, 0xc7, 0x1e, 0x38, 0x70, 0xe1,
    0xc3, 0x87, 0xe, 0x1c, 0x3c, 0x38, 0x38, 0x7c,
    0x38,

    /* U+29 ")" */
    0x1, 0xc3, 0xc1, 0xc1, 0xc3, 0xc3, 0x87, 0xe,
    0x1c, 0x38, 0x70, 0xe1, 0xc7, 0x8e, 0x79, 0xe3,
    0x80,

    /* U+2A "*" */
    0xc, 0x3, 0x8, 0xc7, 0xb7, 0x7f, 0x83, 0x1,
    0xe0, 0xcc, 0x73, 0x80, 0x0,

    /* U+2B "+" */
    0x1c, 0x7, 0x1, 0xc3, 0xff, 0xff, 0xc7, 0x1,
    0xc0, 0x70, 0x1c, 0x0,

    /* U+2C "," */
    0x7b, 0x9c, 0xce, 0x60,

    /* U+2D "-" */
    0xff, 0xff,

    /* U+2E "." */
    0x6f, 0xf6,

    /* U+2F "/" */
    0x1, 0xc0, 0x60, 0x38, 0xe, 0x3, 0x1, 0xc0,
    0x70, 0x18, 0xe, 0x3, 0x1, 0xc0, 0x70, 0x18,
    0xe, 0x3, 0x80, 0xc0, 0x70, 0x18, 0xe, 0x0,

    /* U+30 "0" */
    0x3f, 0x1f, 0xef, 0x3f, 0x87, 0xed, 0xfb, 0x7e,
    0xdf, 0xb7, 0xed, 0xf8, 0x7e, 0x1f, 0xcf, 0x7f,
    0x8f, 0x80,

    /* U+31 "1" */
    0x3c, 0x3e, 0x3f, 0x13, 0x81, 0xc0, 0xe0, 0x70,
    0x38, 0x1c, 0xe, 0x7, 0x3, 0x8f, 0xff, 0xfc,

    /* U+32 "2" */
    0x1f, 0x1f, 0xef, 0x3f, 0x87, 0x1, 0xc0, 0x70,
    0x38, 0x1e, 0xf, 0x7, 0x87, 0x83, 0xc0, 0xff,
    0xff, 0xf0,

    /* U+33 "3" */
    0x7f, 0xdf, 0xf0, 0x3c, 0x1c, 0x1c, 0x7, 0xc1,
    0xf8, 0xf, 0x1, 0xc0, 0x7e, 0x1d, 0x8f, 0x7f,
    0x87, 0xc0,

    /* U+34 "4" */
    0x7, 0x7, 0x3, 0x83, 0x83, 0x81, 0xc1, 0xcf,
    0xe7, 0xe3, 0xff, 0xff, 0xe0, 0x70, 0x38, 0x1c,

    /* U+35 "5" */
    0xff, 0x7f, 0xb8, 0x1c, 0xe, 0x7, 0x73, 0xfd,
    0xcf, 0x3, 0x81, 0xc0, 0xfc, 0xff, 0xf1, 0xf0,

    /* U+36 "6" */
    0x6, 0x3, 0x1, 0xc0, 0x60, 0x30, 0x1b, 0xc7,
    0xfb, 0xcf, 0xe1, 0xf8, 0x7e, 0x1f, 0xcf, 0x7f,
    0x87, 0x80,

    /* U+37 "7" */
    0xff, 0xff, 0xfe, 0xb, 0x86, 0x1, 0x80, 0xc0,
    0x30, 0x18, 0x6, 0x3, 0x80, 0xc0, 0x70, 0x18,
    0xe, 0x0,

    /* U+38 "8" */
    0x3e, 0x1f, 0xce, 0x3b, 0x6, 0xe3, 0x9f, 0xc7,
    0xf1, 0x8e, 0xc1, 0xf0, 0x7c, 0x1f, 0x8f, 0x7f,
    0x8f, 0x80,

    /* U+39 "9" */
    0x1e, 0x1f, 0xef, 0x3f, 0x87, 0xe1, 0xf8, 0x7f,
    0x3d, 0xfe, 0x3d, 0x80, 0xc0, 0x60, 0x38, 0xc,
    0x6, 0x0,

    /* U+3A ":" */
    0xff, 0x80, 0x0, 0xff, 0x80,

    /* U+3B ";" */
    0x7b, 0xde, 0x0, 0x0, 0x0, 0x7b, 0x9c, 0xce,
    0x60,

    /* U+3C "<" */
    0x0, 0x81, 0xc3, 0xe7, 0xcf, 0x6, 0x3, 0xc0,
    0x7c, 0xf, 0x81, 0xc0, 0x20,

    /* U+3D "=" */
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x7, 0xff, 0xfe,

    /* U+3E ">" */
    0x0, 0x70, 0x3e, 0x7, 0xc0, 0xf8, 0xc, 0x1e,
    0x7c, 0xf8, 0x70, 0x20, 0x0,

    /* U+3F "?" */
    0xfc, 0xfe, 0xf, 0x7, 0x7, 0xf, 0x3e, 0x3c,
    0x30, 0x30, 0x0, 0x0, 0x70, 0x70,

    /* U+40 "@" */
    0x1f, 0x87, 0xf9, 0xc3, 0xf0, 0x3c, 0x77, 0x9f,
    0xf3, 0x1e, 0x63, 0xcc, 0x79, 0x8f, 0x31, 0xe7,
    0xfc, 0x77, 0xc0, 0x1c, 0x1, 0xf0, 0x1e, 0x0,

    /* U+41 "A" */
    0xf, 0x0, 0xf0, 0xf, 0x1, 0xf8, 0x19, 0x81,
    0x98, 0x19, 0x83, 0x9c, 0x3f, 0xc3, 0xfc, 0x70,
    0xe7, 0xe, 0x60, 0x66, 0x6,

    /* U+42 "B" */
    0xfe, 0x3f, 0xce, 0x3b, 0x8e, 0xe3, 0xb8, 0xcf,
    0xe3, 0xfc, 0xe3, 0xb8, 0x7e, 0x1f, 0x8f, 0xff,
    0xbf, 0xc0,

    /* U+43 "C" */
    0x3f, 0x1f, 0xef, 0x3f, 0x87, 0xe0, 0x38, 0xe,
    0x3, 0x80, 0xe0, 0x38, 0xe, 0x1f, 0xcf, 0x7f,
    0x8f, 0xc0,

    /* U+44 "D" */
    0xfe, 0x3f, 0xee, 0x3f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xe1, 0xf8, 0x7e, 0x1f, 0x8f, 0xff,
    0xbf, 0x80,

    /* U+45 "E" */
    0xff, 0xff, 0xf8, 0x1c, 0xe, 0x7, 0x3, 0xfd,
    0xfe, 0xe0, 0x70, 0x38, 0x1c, 0xf, 0xff, 0xfc,

    /* U+46 "F" */
    0xff, 0xff, 0xf8, 0x1c, 0xe, 0x7, 0x3, 0xff,
    0xff, 0xe0, 0x70, 0x38, 0x1c, 0xe, 0x7, 0x0,

    /* U+47 "G" */
    0x3f, 0x1f, 0xef, 0x3f, 0x87, 0xe0, 0x38, 0xe,
    0x7f, 0x9f, 0xe1, 0xf8, 0x7e, 0x1f, 0xcf, 0x7f,
    0x87, 0x80,

    /* U+48 "H" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0xff,
    0xff, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1c,

    /* U+49 "I" */
    0xff, 0xff, 0xc7, 0x3, 0x81, 0xc0, 0xe0, 0x70,
    0x38, 0x1c, 0xe, 0x7, 0x3, 0x8f, 0xff, 0xfc,

    /* U+4A "J" */
    0x3f, 0xcf, 0xf0, 0x1c, 0x7, 0x1, 0xc0, 0x70,
    0x1c, 0x7, 0x1, 0xc0, 0x7e, 0x1f, 0x8f, 0x7f,
    0x8f, 0xc0,

    /* U+4B "K" */
    0xe1, 0xdc, 0x3b, 0x8e, 0x71, 0xce, 0x31, 0xce,
    0x3f, 0x87, 0xf0, 0xe7, 0x1c, 0x63, 0x8e, 0x70,
    0xce, 0x1d, 0xc3, 0x80,

    /* U+4C "L" */
    0xe0, 0x70, 0x38, 0x1c, 0xe, 0x7, 0x3, 0x81,
    0xc0, 0xe0, 0x70, 0x38, 0x1c, 0xf, 0xff, 0xfc,

    /* U+4D "M" */
    0xe1, 0xf8, 0x7f, 0x3f, 0xcf, 0xda, 0xf7, 0xbd,
    0xef, 0x33, 0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0,
    0xf0, 0x30,

    /* U+4E "N" */
    0xe1, 0xf0, 0xfc, 0x7e, 0x3d, 0x9e, 0xcf, 0x67,
    0x9b, 0xcd, 0xe6, 0xf1, 0xf8, 0xfc, 0x3e, 0x1c,

    /* U+4F "O" */
    0x3f, 0x1f, 0xef, 0x3f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xe1, 0xf8, 0x7e, 0x1f, 0xcf, 0x7f,
    0x8f, 0x80,

    /* U+50 "P" */
    0xff, 0x3f, 0xee, 0x3f, 0x87, 0xe1, 0xf8, 0xff,
    0xfb, 0xfc, 0xe0, 0x38, 0xe, 0x3, 0x80, 0xe0,
    0x38, 0x0,

    /* U+51 "Q" */
    0x3f, 0x1f, 0xef, 0x3f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xe1, 0xf8, 0x7e, 0x1f, 0xcf, 0x7f,
    0x8f, 0x80, 0x70, 0xe, 0x1, 0xc0,

    /* U+52 "R" */
    0xff, 0x3f, 0xee, 0x3f, 0x87, 0xe1, 0xf8, 0xff,
    0xfb, 0xf8, 0xe6, 0x39, 0xce, 0x33, 0x8e, 0xe3,
    0xb8, 0x70,

    /* U+53 "S" */
    0x3f, 0x1f, 0xee, 0x1f, 0x87, 0xe0, 0x3e, 0x7,
    0xf0, 0x7e, 0x3, 0xc0, 0x7e, 0x1f, 0xcf, 0x7f,
    0x8f, 0xc0,

    /* U+54 "T" */
    0xff, 0xff, 0xf0, 0xe0, 0x38, 0xe, 0x3, 0x80,
    0xe0, 0x38, 0xe, 0x3, 0x80, 0xe0, 0x38, 0xe,
    0x3, 0x80,

    /* U+55 "U" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x77, 0xf1, 0xf0,

    /* U+56 "V" */
    0x60, 0x66, 0x6, 0x70, 0xe7, 0xe, 0x30, 0xc3,
    0xc, 0x39, 0xc1, 0x98, 0x19, 0x81, 0x98, 0x1f,
    0x80, 0xf0, 0xf, 0x0, 0xf0,

    /* U+57 "W" */
    0xc6, 0x78, 0xcf, 0x39, 0xe7, 0x3e, 0xa6, 0xd6,
    0xda, 0xdb, 0x5b, 0x6b, 0x6d, 0x2d, 0xe7, 0x3c,
    0xe7, 0x9c, 0xe3, 0x80,

    /* U+58 "X" */
    0xe1, 0xd8, 0x67, 0x38, 0xcc, 0x3f, 0x7, 0x81,
    0xe0, 0x78, 0x1e, 0xf, 0xc3, 0x31, 0xce, 0xe1,
    0xf8, 0x70,

    /* U+59 "Y" */
    0xe0, 0xfc, 0x1d, 0xc7, 0x38, 0xe3, 0x98, 0x77,
    0x6, 0xc0, 0xf8, 0xe, 0x1, 0xc0, 0x38, 0x7,
    0x0, 0xe0, 0x1c, 0x0,

    /* U+5A "Z" */
    0xff, 0xff, 0xc0, 0xe0, 0xe0, 0x60, 0x70, 0x70,
    0x38, 0x38, 0x38, 0x1c, 0x1c, 0xf, 0xff, 0xfc,

    /* U+5B "[" */
    0xff, 0xfe, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0x8e, 0x38, 0xff, 0xf0,

    /* U+5C "\\" */
    0xe0, 0x18, 0x7, 0x1, 0xc0, 0x30, 0xe, 0x3,
    0x80, 0x60, 0x1c, 0x3, 0x0, 0xe0, 0x38, 0x6,
    0x1, 0xc0, 0x70, 0xc, 0x3, 0x80, 0x60, 0x1c,

    /* U+5D "]" */
    0xff, 0xf1, 0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0x71, 0xc7, 0xff, 0xf0,

    /* U+5E "^" */
    0xc, 0x7, 0x81, 0xe0, 0xfc, 0x33, 0x1c, 0xe6,
    0x19, 0x86,

    /* U+5F "_" */
    0xff, 0xff, 0xf0,

    /* U+60 "`" */
    0x63, 0x8e,

    /* U+61 "a" */
    0x3f, 0x1f, 0xee, 0x1c, 0x7, 0x3f, 0xdf, 0xfe,
    0x1f, 0x87, 0xe3, 0xff, 0xf7, 0xdc,

    /* U+62 "b" */
    0xe0, 0x38, 0xe, 0x3, 0xbc, 0xff, 0xbc, 0xfe,
    0x1f, 0x87, 0xe1, 0xf8, 0x7e, 0x1f, 0xcf, 0xff,
    0xbb, 0xc0,

    /* U+63 "c" */
    0x3f, 0x1f, 0xef, 0x1f, 0x83, 0xe0, 0x38, 0xe,
    0x3, 0x87, 0xf1, 0xdf, 0xe3, 0xe0,

    /* U+64 "d" */
    0x1, 0xc0, 0x70, 0x1c, 0xf7, 0x7f, 0xfc, 0xfe,
    0x1f, 0x87, 0xe1, 0xf8, 0x7e, 0x1f, 0xcf, 0x7f,
    0xcf, 0x70,

    /* U+65 "e" */
    0x3f, 0x1f, 0xef, 0x3f, 0x87, 0xff, 0xff, 0xfe,
    0x3, 0x80, 0xf1, 0xdf, 0xe3, 0xf0,

    /* U+66 "f" */
    0xf, 0xc7, 0xf1, 0xc0, 0x70, 0xff, 0xff, 0xf1,
    0xc0, 0x70, 0x1c, 0x7, 0x1, 0xc0, 0x70, 0x1c,
    0x7, 0x0,

    /* U+67 "g" */
    0x3d, 0xdf, 0xff, 0x3f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0xcf, 0x7f, 0xcf, 0x70, 0x1c, 0xf, 0x3f,
    0x8f, 0xc0,

    /* U+68 "h" */
    0xe0, 0x70, 0x38, 0x1d, 0xcf, 0xf7, 0x9f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1c,

    /* U+69 "i" */
    0x1c, 0x7, 0x0, 0x0, 0x0, 0xfc, 0x3f, 0x1,
    0xc0, 0x70, 0x1c, 0x7, 0x1, 0xc0, 0x70, 0x1c,
    0x3f, 0xff, 0xfc,

    /* U+6A "j" */
    0x7, 0x7, 0x0, 0x0, 0x7f, 0x7f, 0x7, 0x7,
    0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0xf,
    0xfe, 0xfc,

    /* U+6B "k" */
    0xe0, 0x38, 0xe, 0x3, 0x87, 0xe1, 0xb8, 0xee,
    0x33, 0x9c, 0xfe, 0x3f, 0x8e, 0x73, 0x8e, 0xe3,
    0xb8, 0x70,

    /* U+6C "l" */
    0xfe, 0x1f, 0xc0, 0x38, 0x7, 0x0, 0xe0, 0x1c,
    0x3, 0x80, 0x70, 0xe, 0x1, 0xc0, 0x38, 0x7,
    0x0, 0xfe, 0xf, 0xc0,

    /* U+6D "m" */
    0xd9, 0xbf, 0xfc, 0xcf, 0x33, 0xcc, 0xf3, 0x3c,
    0xcf, 0x33, 0xcc, 0xf3, 0x3c, 0xcc,

    /* U+6E "n" */
    0xee, 0x7f, 0xbc, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xe0,

    /* U+6F "o" */
    0x3f, 0x1f, 0xef, 0x3f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xf3, 0xdf, 0xe3, 0xf0,

    /* U+70 "p" */
    0xef, 0x3f, 0xef, 0x3f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xf3, 0xff, 0xee, 0xf3, 0x80, 0xe0,
    0x38, 0x0,

    /* U+71 "q" */
    0x3d, 0xdf, 0xff, 0x3f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xf3, 0xdf, 0xf3, 0xdc, 0x7, 0x1,
    0xc0, 0x70,

    /* U+72 "r" */
    0xef, 0x3f, 0xef, 0x3f, 0x87, 0xe1, 0xf8, 0xe,
    0x3, 0x80, 0xe0, 0x38, 0xe, 0x0,

    /* U+73 "s" */
    0x3f, 0x3f, 0xee, 0x1f, 0x80, 0xfc, 0x1f, 0xe0,
    0x3c, 0x7, 0xe1, 0xff, 0xe3, 0xf0,

    /* U+74 "t" */
    0x1c, 0x7, 0x1, 0xc3, 0xff, 0xff, 0xc7, 0x1,
    0xc0, 0x70, 0x1c, 0x7, 0x1, 0xc0, 0x70, 0xf,
    0xc1, 0xf0,

    /* U+75 "u" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xbf, 0x8f, 0x80,

    /* U+76 "v" */
    0xc0, 0xf8, 0x76, 0x19, 0x86, 0x73, 0x8c, 0xc3,
    0x30, 0xfc, 0x1e, 0x7, 0x81, 0xe0,

    /* U+77 "w" */
    0xc6, 0x79, 0xcf, 0x39, 0xb5, 0x36, 0xa6, 0xd6,
    0xda, 0xdb, 0x4e, 0x79, 0xcf, 0x38, 0xc7, 0x0,

    /* U+78 "x" */
    0xe1, 0xdc, 0xe3, 0x30, 0xfc, 0x1e, 0x7, 0x81,
    0xe0, 0xfc, 0x73, 0x9c, 0x6e, 0x1c,

    /* U+79 "y" */
    0xe1, 0xf8, 0x76, 0x19, 0xce, 0x33, 0x8e, 0xc3,
    0xf0, 0x7c, 0x1e, 0x3, 0x80, 0xc0, 0x70, 0x1c,
    0x6, 0x0,

    /* U+7A "z" */
    0xff, 0xff, 0xc1, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
    0xe0, 0xe0, 0x7f, 0xff, 0xe0,

    /* U+7B "{" */
    0x7, 0x87, 0xc3, 0x81, 0xc0, 0xe0, 0x70, 0x38,
    0x1c, 0xfc, 0x7e, 0x3, 0x81, 0xc0, 0xe0, 0x70,
    0x38, 0x1c, 0xf, 0x83, 0xc0,

    /* U+7C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,

    /* U+7D "}" */
    0xf0, 0x3f, 0x1, 0xc0, 0x70, 0x1c, 0x7, 0x1,
    0xc0, 0x70, 0xf, 0xc3, 0xf1, 0xc0, 0x70, 0x1c,
    0x7, 0x1, 0xc0, 0x70, 0xf8, 0x3c, 0x0,

    /* U+7E "~" */
    0x78, 0xff, 0x3c, 0xff, 0x1e,

    /* U+F017 "" */
    0x3, 0xf8, 0x1, 0xff, 0xc0, 0x7f, 0xfc, 0x1f,
    0xff, 0xc7, 0xf1, 0xfc, 0xfe, 0x3f, 0x9f, 0xc7,
    0xf7, 0xf8, 0xff, 0xff, 0x1f, 0xff, 0xe3, 0xff,
    0xfc, 0x3f, 0xff, 0x83, 0xff, 0xfc, 0x7e, 0xff,
    0xcf, 0x9f, 0xff, 0xf1, 0xff, 0xfc, 0x1f, 0xff,
    0x1, 0xff, 0xc0, 0x1f, 0xf0, 0x0, 0x70, 0x0,

    /* U+F03A "" */
    0xf0, 0x0, 0xf, 0x3f, 0xff, 0xf3, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0x0, 0x0, 0xf3, 0xff, 0xff, 0x3f,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0x0, 0x0, 0xf3, 0xff, 0xff, 0x3f, 0xff,
    0xf0, 0x0, 0x0,

    /* U+F129 "" */
    0x3c, 0x7e, 0x7e, 0x7e, 0x3c, 0x0, 0x0, 0xfc,
    0xfc, 0xfc, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c,
    0xff, 0xff, 0xff,

    /* U+F185 "" */
    0x0, 0x60, 0x0, 0x6, 0x0, 0x0, 0xf0, 0x1,
    0xcf, 0x38, 0x1f, 0xff, 0x81, 0xf0, 0xf8, 0xc,
    0xf3, 0x1, 0xdf, 0xb8, 0x7b, 0xfd, 0xef, 0xbf,
    0xdf, 0x7b, 0xfd, 0xe1, 0x9f, 0x98, 0xc, 0xf3,
    0x0, 0xc0, 0x30, 0x1f, 0xf, 0x81, 0xff, 0xf8,
    0x1c, 0xf3, 0x80, 0xf, 0x0, 0x0, 0x60, 0x0,
    0x6, 0x0,

    /* U+F1E6 "" */
    0x18, 0x30, 0x70, 0x70, 0xe0, 0xe1, 0xc1, 0xc3,
    0x83, 0x80, 0x0, 0x3f, 0xff, 0xff, 0xff, 0x7f,
    0xfc, 0xff, 0xf9, 0xff, 0xf1, 0xff, 0xc3, 0xff,
    0x83, 0xfe, 0x3, 0xf8, 0x1, 0xc0, 0x3, 0x80,
    0x7, 0x0, 0xe, 0x0,

    /* U+F21E "" */
    0x1e, 0x7, 0x83, 0xf9, 0xfe, 0x7f, 0xff, 0xef,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xfc,
    0xf7, 0xf7, 0xd6, 0x3e, 0x79, 0x6b, 0xe0, 0x34,
    0x80, 0x1f, 0x9f, 0x80, 0xf9, 0xf0, 0x7, 0xfe,
    0x0, 0x3f, 0xc0, 0x1, 0xf8, 0x0, 0xf, 0x0,
    0x0, 0x60, 0x0,

    /* U+F240 "" */
    0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xb8, 0x0,
    0x1, 0xfd, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0x7f,
    0x7f, 0xff, 0x9f, 0xbf, 0xff, 0xcf, 0xdf, 0xff,
    0xe7, 0xe0, 0x0, 0x7, 0xf0, 0x0, 0x3, 0xff,
    0xff, 0xff, 0xcf, 0xff, 0xff, 0xe0,

    /* U+F241 "" */
    0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xb8, 0x0,
    0x1, 0xfd, 0xff, 0xe0, 0xfe, 0xff, 0xf0, 0x7f,
    0x7f, 0xf8, 0x1f, 0xbf, 0xfc, 0xf, 0xdf, 0xfe,
    0x7, 0xe0, 0x0, 0x7, 0xf0, 0x0, 0x3, 0xff,
    0xff, 0xff, 0xcf, 0xff, 0xff, 0xe0,

    /* U+F242 "" */
    0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xb8, 0x0,
    0x1, 0xfd, 0xfe, 0x0, 0xfe, 0xff, 0x0, 0x7f,
    0x7f, 0x80, 0x1f, 0xbf, 0xc0, 0xf, 0xdf, 0xe0,
    0x7, 0xe0, 0x0, 0x7, 0xf0, 0x0, 0x3, 0xff,
    0xff, 0xff, 0xcf, 0xff, 0xff, 0xe0,

    /* U+F243 "" */
    0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xb8, 0x0,
    0x1, 0xfd, 0xf0, 0x0, 0xfe, 0xf8, 0x0, 0x7f,
    0x7c, 0x0, 0x1f, 0xbe, 0x0, 0xf, 0xdf, 0x0,
    0x7, 0xe0, 0x0, 0x7, 0xf0, 0x0, 0x3, 0xff,
    0xff, 0xff, 0xcf, 0xff, 0xff, 0xe0,

    /* U+F244 "" */
    0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xb8, 0x0,
    0x1, 0xfc, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x1f, 0x80, 0x0, 0xf, 0xc0, 0x0,
    0x7, 0xe0, 0x0, 0x7, 0xf0, 0x0, 0x3, 0xff,
    0xff, 0xff, 0xcf, 0xff, 0xff, 0xe0,

    /* U+F293 "" */
    0x7, 0xe0, 0x3f, 0xe0, 0xfb, 0xe3, 0xf3, 0xe7,
    0xe3, 0xdf, 0xd3, 0xf9, 0xb3, 0xf9, 0x4f, 0xf8,
    0x3f, 0xf8, 0xff, 0xf1, 0xff, 0xc1, 0xff, 0x29,
    0xfc, 0xd9, 0xff, 0xa7, 0xbf, 0x1e, 0x7e, 0x7c,
    0x7d, 0xf0, 0x7f, 0xe0, 0x7f, 0x0,

    /* U+F294 "" */
    0x0, 0x0, 0x80, 0x18, 0x3, 0x80, 0x78, 0x8d,
    0xb9, 0x9b, 0xb6, 0x3f, 0x83, 0xe0, 0x38, 0x7,
    0x81, 0xf8, 0x6d, 0x99, 0x9a, 0x36, 0x7, 0x80,
    0xe0, 0x18, 0x2, 0x0, 0x0,

    /* U+F54B "" */
    0x0, 0xf, 0xf8, 0x1, 0xdf, 0xff, 0x1, 0xef,
    0xff, 0xc0, 0xf7, 0xff, 0xf0, 0x7b, 0xff, 0xf8,
    0x1d, 0xff, 0xfc, 0x0, 0x1f, 0xfc, 0x0, 0x3,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xf8, 0x0, 0xf, 0xfe,
    0x3, 0xbf, 0xff, 0x83, 0xdf, 0xff, 0xc1, 0xef,
    0xff, 0xe0, 0xf7, 0xff, 0xe0, 0x3b, 0xff, 0xe0,
    0x0, 0x7f, 0xc0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 192, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 192, .box_w = 3, .box_h = 14, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 192, .box_w = 7, .box_h = 6, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 13, .adv_w = 192, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 33, .adv_w = 192, .box_w = 10, .box_h = 19, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 57, .adv_w = 192, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 192, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 192, .box_w = 3, .box_h = 6, .ofs_x = 5, .ofs_y = 8},
    {.bitmap_index = 100, .adv_w = 192, .box_w = 7, .box_h = 19, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 117, .adv_w = 192, .box_w = 7, .box_h = 19, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 134, .adv_w = 192, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 147, .adv_w = 192, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 159, .adv_w = 192, .box_w = 5, .box_h = 6, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 163, .adv_w = 192, .box_w = 8, .box_h = 2, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 165, .adv_w = 192, .box_w = 4, .box_h = 4, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 192, .box_w = 10, .box_h = 19, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 191, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 192, .box_w = 9, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 192, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 192, .box_w = 9, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 293, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 311, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 365, .adv_w = 192, .box_w = 3, .box_h = 11, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 192, .box_w = 5, .box_h = 14, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 379, .adv_w = 192, .box_w = 9, .box_h = 11, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 392, .adv_w = 192, .box_w = 9, .box_h = 7, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 400, .adv_w = 192, .box_w = 9, .box_h = 11, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 413, .adv_w = 192, .box_w = 8, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 427, .adv_w = 192, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 451, .adv_w = 192, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 472, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 490, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 508, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 192, .box_w = 9, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 542, .adv_w = 192, .box_w = 9, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 576, .adv_w = 192, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 592, .adv_w = 192, .box_w = 9, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 608, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 626, .adv_w = 192, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 646, .adv_w = 192, .box_w = 9, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 662, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 680, .adv_w = 192, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 714, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 192, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 754, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 772, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 790, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 808, .adv_w = 192, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 824, .adv_w = 192, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 845, .adv_w = 192, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 865, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 883, .adv_w = 192, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 903, .adv_w = 192, .box_w = 9, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 919, .adv_w = 192, .box_w = 6, .box_h = 18, .ofs_x = 4, .ofs_y = -2},
    {.bitmap_index = 933, .adv_w = 192, .box_w = 10, .box_h = 19, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 957, .adv_w = 192, .box_w = 6, .box_h = 18, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 971, .adv_w = 192, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 981, .adv_w = 192, .box_w = 10, .box_h = 2, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 984, .adv_w = 192, .box_w = 5, .box_h = 3, .ofs_x = 3, .ofs_y = 13},
    {.bitmap_index = 986, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1000, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1018, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1032, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1050, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1064, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1082, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1100, .adv_w = 192, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1116, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1135, .adv_w = 192, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1153, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1171, .adv_w = 192, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1191, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1205, .adv_w = 192, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1218, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1232, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1250, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1268, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1282, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1296, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1314, .adv_w = 192, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1327, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1341, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1357, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1371, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1389, .adv_w = 192, .box_w = 9, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1402, .adv_w = 192, .box_w = 9, .box_h = 18, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 1423, .adv_w = 192, .box_w = 3, .box_h = 18, .ofs_x = 5, .ofs_y = -2},
    {.bitmap_index = 1430, .adv_w = 192, .box_w = 10, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1453, .adv_w = 192, .box_w = 10, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1458, .adv_w = 320, .box_w = 19, .box_h = 20, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1506, .adv_w = 320, .box_w = 20, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1549, .adv_w = 120, .box_w = 8, .box_h = 19, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1568, .adv_w = 320, .box_w = 20, .box_h = 20, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1618, .adv_w = 240, .box_w = 15, .box_h = 19, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1654, .adv_w = 320, .box_w = 20, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1697, .adv_w = 400, .box_w = 25, .box_h = 12, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1735, .adv_w = 400, .box_w = 25, .box_h = 12, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1773, .adv_w = 400, .box_w = 25, .box_h = 12, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1811, .adv_w = 400, .box_w = 25, .box_h = 12, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1849, .adv_w = 400, .box_w = 25, .box_h = 12, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1887, .adv_w = 280, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1925, .adv_w = 200, .box_w = 11, .box_h = 21, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1954, .adv_w = 400, .box_w = 25, .box_h = 19, .ofs_x = 0, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x23, 0x112, 0x16e, 0x1cf, 0x207, 0x229, 0x22a,
    0x22b, 0x22c, 0x22d, 0x27c, 0x27d, 0x534
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 61463, .range_length = 1333, .glyph_id_start = 96,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 14, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t jetbrains_mono_bold_20 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 21,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if JETBRAINS_MONO_BOLD_20*/

