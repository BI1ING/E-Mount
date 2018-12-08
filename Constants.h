#ifndef Constants_h
#define Constants_h

const int INVALID_POSITION = -999;
const int INPUT_BUFFER_SIZE = 256;
const int lensToBody = 1;
const int bodyToLens = 0;

const int MESSAGE_CLASS_INIT = 0x02;
const int MESSAGE_CLASS_NORMAL = 0x01;

const int HEADER_LENGTH = 6;  // START_BYTE, 16BIT LENGTH, CLASS, SEQ, TYPE
const int FOOTER_LENGTH = 3;  // 16BIT CHECKSUM, END_BYTE

const byte START_BYTE = 0xF0;
const byte END_BYTE = 0x55;

const byte VD_DWELL_LOW = 62; // micros

const byte init0B[] = {0xF0, 0x0B, 0x00, 0x02, 0x00, 0x0B, 0x60, 0x00, 0x78, 0x00, 0x55};
const byte init09[] = {0xF0, 0x14, 0x00, 0x02, 0x00, 0x09, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x55};
const byte init0D[] = {0xF0, 0x0A, 0x00, 0x02, 0x00, 0x0D, 0x00, 0x19, 0x00, 0x55};
const byte init10[] = {0xF0, 0x0A, 0x00, 0x02, 0x00, 0x10, 0x00, 0x1C, 0x00, 0x55};
const byte init0A[] = {0xF0, 0x19, 0x00, 0x02, 0x00, 0x0A, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE2, 0x01, 0x55};

//optional?
const byte init01[] = {0xF0, 0x29, 0x00, 0x02, 0x00, 0x01, 0xFF, 0x97, 0x78, 0x15, 0x80, 0x40, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x03, 0x55};
const byte init08[] = {0xF0, 0xD2, 0x00, 0x02, 0x00, 0x08, 0x55, 0x14, 0x55, 0x14, 0x00, 0x40, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x02, 0xE1, 0x00, 0x03, 0x00, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0xAB, 0x04, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x43, 0x00, 0xE0, 0xFF, 0x84, 0xA4, 0x00, 0x00, 0x08, 0x32, 0x25, 0x40, 0x2F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x25, 0x04, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF3, 0xF3, 0x07, 0xFB, 0xFB, 0x00, 0x00, 0x00, 0x04, 0x04, 0x20, 0x46, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x09, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE6, 0x80, 0xDD, 0x52, 0x00, 0xD0, 0xDD, 0xDF, 0xF0, 0x00, 0x08, 0xA0, 0xDD, 0xE0, 0x00, 0x52, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x64, 0x27, 0x00, 0x06, 0x10, 0xFF, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x01, 0x00, 0x01, 0x9F, 0x1A, 0x55};
const byte init07[] = {0xF0, 0x2B, 0x00, 0x02, 0x00, 0x07, 0x01, 0x01, 0x60, 0x01, 0x00, 0x01, 0x01, 0x00, 0xA0, 0x30, 0xC7, 0x00, 0x00, 0x00, 0x00, 0x60, 0x92, 0x86, 0x5E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x04, 0x55};

const byte norm05[] = {0x55, 0x14, 0x55, 0x14, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0xFF, 0x96, 0x00, 0x96, 0x00, 0x10, 0x01, 0x00, 0x00, 0xB1, 0x28, 0x47, 0x51, 0x4B, 0x38, 0x27, 0x08, 0x35, 0x30, 0x40, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x15, 0x00, 0x00, 0x9A, 0x00, 0x0F, 0x37, 0xD4, 0xC6, 0xC9, 0xDE, 0x0F, 0x37, 0xD4, 0xC6, 0xC9, 0xDE, 0x00};
const byte norm06[] = {0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x10, 0x3F, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

#endif