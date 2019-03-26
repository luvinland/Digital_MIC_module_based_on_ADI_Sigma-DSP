///////////////////////////////////////////////////////////////////////
// Copyright (C) BSE Co., Ltd. 2012-2013
//
// Description : 122Q Hyundai Mobis Project
//
// @file    adau.h
// @brief   This header file contains ADAU control interfaces.
///////////////////////////////////////////////////////////////////////


// Header files ///////////////////////////////////////////////////////
#include "private.h"


// Defines      ///////////////////////////////////////////////////////
#ifdef RX_MODULE
const unsigned char programData[225] =
{
    0x00,   0x00,   0x00,   0x00,   0x00,
    0xFE,   0xE0,   0x00,   0x00,   0x00,
    0xFF,   0x34,   0x00,   0x00,   0x00,
    0xFF,   0x2C,   0x00,   0x00,   0x00,
    0xFF,   0x54,   0x00,   0x00,   0x00,
    0xFF,   0x5C,   0x00,   0x00,   0x00,
    0xFF,   0xF5,   0x08,   0x20,   0x00,
    0xFF,   0x38,   0x00,   0x00,   0x00,
    0xFF,   0x80,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0xFE,   0xE8,   0x0C,   0x00,   0x00,
    0xFE,   0x30,   0x00,   0xE2,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0xFF,   0xE8,   0x07,   0x20,   0x08,
    0x00,   0x00,   0x06,   0xA0,   0x00,
    0xFF,   0xE0,   0x00,   0xC0,   0x00,
    0xFF,   0x80,   0x07,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0xFF,   0x00,   0x00,   0x00,   0x00,
    0xFE,   0xC0,   0x22,   0x00,   0x27,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0xFE,   0xE8,   0x1E,   0x00,   0x00,
    0xFF,   0xE8,   0x01,   0x20,   0x00,
    0xFF,   0xD8,   0x01,   0x03,   0x00,
    0x00,   0x07,   0xC6,   0x00,   0x00,
    0xFF,   0x08,   0x00,   0x00,   0x00,
    0xFF,   0xF4,   0x00,   0x20,   0x00,
    0xFF,   0xD8,   0x07,   0x02,   0x00,
    0xFD,   0xA5,   0x08,   0x20,   0x00,
    0x00,   0x00,   0x00,   0xE2,   0x00,
    0x00,   0x05,   0x08,   0x20,   0x00,
    0xFD,   0xB0,   0x00,   0xE2,   0x00,
    0x00,   0x05,   0x08,   0x20,   0x00,
    0xFD,   0xB8,   0x00,   0xE2,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0xFE,   0x30,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0xFE,   0xC0,   0x0F,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00
};

const unsigned char paramData[32] =
{
    0x00,   0x00,   0x10,   0x00,
    0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00
};
#else // TX_MODULE
const unsigned char programData[255] =
{
    0x00,   0x00,   0x00,   0x00,   0x00,
    0xFE,   0xE0,   0x00,   0x00,   0x00,
    0xFF,   0x34,   0x00,   0x00,   0x00,
    0xFF,   0x2C,   0x00,   0x00,   0x00,
    0xFF,   0x54,   0x00,   0x00,   0x00,
    0xFF,   0x5C,   0x00,   0x00,   0x00,
    0xFF,   0xF5,   0x08,   0x20,   0x00,
    0xFF,   0x38,   0x00,   0x00,   0x00,
    0xFF,   0x80,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0xFE,   0xE8,   0x0C,   0x00,   0x00,
    0xFE,   0x30,   0x00,   0xE2,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0xFF,   0xE8,   0x07,   0x20,   0x08,
    0x00,   0x00,   0x06,   0xA0,   0x00,
    0xFF,   0xE0,   0x00,   0xC0,   0x00,
    0xFF,   0x80,   0x07,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0xFF,   0x00,   0x00,   0x00,   0x00,
    0xFE,   0xC0,   0x22,   0x00,   0x27,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0xFE,   0xE8,   0x1E,   0x00,   0x00,
    0xFF,   0xE8,   0x01,   0x20,   0x00,
    0xFF,   0xD8,   0x01,   0x03,   0x00,
    0x00,   0x07,   0xC6,   0x00,   0x00,
    0xFF,   0x08,   0x00,   0x00,   0x00,
    0xFF,   0xF4,   0x00,   0x20,   0x00,
    0xFF,   0xD8,   0x07,   0x02,   0x00,
    0xFD,   0xA5,   0x08,   0x20,   0x00,
    0x00,   0x00,   0x00,   0xE2,   0x00,
    0x00,   0x00,   0x08,   0x20,   0x00,
    0x00,   0x08,   0x00,   0xE2,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0x00,   0x08,   0x09,   0x20,   0x00,
    0x00,   0x10,   0x00,   0xE2,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0x00,   0x15,   0x08,   0x20,   0x00,
    0xFD,   0xB0,   0x00,   0xE2,   0x00,
    0x00,   0x15,   0x08,   0x20,   0x00,
    0xFD,   0xB8,   0x00,   0xE2,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0xFE,   0x30,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00,
    0xFE,   0xC0,   0x0F,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,   0x00
};

const unsigned char paramData[40] =
{
    0x00,   0x00,   0x10,   0x00,
    0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,
    0x00,   0x00,   0x00,   0x00,
    0x05,   0x00,   0x00,   0x00,
    0x00,   0xFF,   0x64,   0xC1
};
#endif

/* Not download Non Modulo RAM
const unsigned char nonmoduloData[4] =
{
    0x00,   0x00,   0x00,   0x00
};
*/


// Functions    ///////////////////////////////////////////////////////
void interface_ADAU(void);

void start_ADAU(void);
