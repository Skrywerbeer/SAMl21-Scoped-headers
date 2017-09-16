// ****************************************
// File: glck.hpp
// Written by: Johan Grobler
// Started: 30/8/2017
// Updated: 12/9/2017
// ****************************************
// Pointers to the Generic Clock
// Controller registers of the ATSAML21J18
// mcu.
// ****************************************

#ifndef GCLK_HPP_
#define GCLK_HPP_

#include "sfr.hpp"

// ****************************************
// Base addresses and offsets.
// ****************************************
namespace GCLK {
	// Base address.
	const uint32_t GCLK_BASE = 0x40001800;
	// Control A Register offset.
	const uint8_t CTRLA_OFFSET = 0x00;
	// Synchronization Busy Register offset.
	const uint8_t SYNCBUSY_OFFSET = 0x04;
	// Generator Control Register offsets.
	const uint8_t GENCTRL0_OFFSET = 0x20;
	const uint8_t GENCTRL1_OFFSET = 0x24;
	const uint8_t GENCTRL2_OFFSET = 0x28;
	const uint8_t GENCTRL3_OFFSET = 0x2c;
	const uint8_t GENCTRL4_OFFSET = 0x30;
	const uint8_t GENCTRL5_OFFSET = 0x34;
	const uint8_t GENCTRL6_OFFSET = 0x38;
	const uint8_t GENCTRL7_OFFSET = 0x3c;
	const uint8_t GENCTRL8_OFFSET = 0x40;
	// Peripheral Channel Control Register offsets.
	const uint16_t PCHCTRL0_OFFSET = 0x80;
	const uint16_t PCHCTRL1_OFFSET = 0x84;
	const uint16_t PCHCTRL2_OFFSET = 0x88;
	const uint16_t PCHCTRL3_OFFSET = 0x8c;
	const uint16_t PCHCTRL4_OFFSET = 0x90;
	const uint16_t PCHCTRL5_OFFSET = 0x94;
	const uint16_t PCHCTRL6_OFFSET = 0x98;
	const uint16_t PCHCTRL7_OFFSET = 0x9c;
	const uint16_t PCHCTRL8_OFFSET = 0xa0;
	const uint16_t PCHCTRL9_OFFSET = 0xa4;
	const uint16_t PCHCTRL10_OFFSET = 0xa8;
	const uint16_t PCHCTRL11_OFFSET = 0xac;
	const uint16_t PCHCTRL12_OFFSET = 0xb0;
	const uint16_t PCHCTRL13_OFFSET = 0xb4;
	const uint16_t PCHCTRL14_OFFSET = 0xb8;
	const uint16_t PCHCTRL15_OFFSET = 0xbc;
	const uint16_t PCHCTRL16_OFFSET = 0xc0;
	const uint16_t PCHCTRL17_OFFSET = 0xc4;
	const uint16_t PCHCTRL18_OFFSET = 0xc8;
	const uint16_t PCHCTRL19_OFFSET = 0xcc;
	const uint16_t PCHCTRL20_OFFSET = 0xd0;
	const uint16_t PCHCTRL21_OFFSET = 0xd4;
	const uint16_t PCHCTRL22_OFFSET = 0xd8;
	const uint16_t PCHCTRL23_OFFSET = 0xdc;
	const uint16_t PCHCTRL24_OFFSET = 0xe0;
	const uint16_t PCHCTRL25_OFFSET = 0xe4;
	const uint16_t PCHCTRL26_OFFSET = 0xe8;
	const uint16_t PCHCTRL27_OFFSET = 0xec;
	const uint16_t PCHCTRL28_OFFSET = 0xf0;
	const uint16_t PCHCTRL29_OFFSET = 0xf4;
	const uint16_t PCHCTRL30_OFFSET = 0xf8;
	const uint16_t PCHCTRL31_OFFSET = 0xfc;
	const uint16_t PCHCTRL32_OFFSET = 0x100;
	const uint16_t PCHCTRL33_OFFSET = 0x104;
	const uint16_t PCHCTRL34_OFFSET = 0x108;
}

// ****************************************
// Control A Register.
// ****************************************
namespace GCLK {
	rw_sfr8 CTRLA = __sfr8(GCLK::GCLK_BASE, GCLK::CTRLA_OFFSET);
}

// ****************************************
// Control A Bits.
// ****************************************
namespace GLCK_CTRLA {
	// Software Reset.
	const uint8_t SWRST = (1 << 0);
}

// ****************************************
// Synchronization Busy Register.
// ****************************************
namespace GCLK {
	ro_sfr32 SYNCBUSY = __sfr32(GCLK::GCLK_BASE, GCLK::SYNCBUSY_OFFSET);
}

// ****************************************
// Synchronization Busy Bits.
// ****************************************
namespace GLCK_SYNCBUSY {
	// Generator Control x Synchronization Busy.
	const uint32_t GENCTRL8 = (1 << 10);
	const uint32_t GENCTRL7 = (1 << 9);
	const uint32_t GENCTRL6 = (1 << 8);
	const uint32_t GENCTRL5 = (1 << 7);
	const uint32_t GENCTRL4 = (1 << 6);
	const uint32_t GENCTRL3 = (1 << 5);
	const uint32_t GENCTRL2 = (1 << 4);
	const uint32_t GENCTRL1 = (1 << 3);
	const uint32_t GENCTRL0 = (1 << 2);
	// Software Reset Synchronization Busy.
	const uint32_t SWRST = (1 << 0);
}

// ****************************************
// Generator Control Registers.
// ****************************************
namespace GCLK {
	rw_sfr32 GENCTRL0 = __sfr32(GCLK::GCLK_BASE, GCLK::GENCTRL0_OFFSET);
	rw_sfr32 GENCTRL1 = __sfr32(GCLK::GCLK_BASE, GCLK::GENCTRL1_OFFSET);
	rw_sfr32 GENCTRL2 = __sfr32(GCLK::GCLK_BASE, GCLK::GENCTRL2_OFFSET);
	rw_sfr32 GENCTRL3 = __sfr32(GCLK::GCLK_BASE, GCLK::GENCTRL3_OFFSET);
	rw_sfr32 GENCTRL4 = __sfr32(GCLK::GCLK_BASE, GCLK::GENCTRL4_OFFSET);
	rw_sfr32 GENCTRL5 = __sfr32(GCLK::GCLK_BASE, GCLK::GENCTRL5_OFFSET);
	rw_sfr32 GENCTRL6 = __sfr32(GCLK::GCLK_BASE, GCLK::GENCTRL6_OFFSET);
	rw_sfr32 GENCTRL7 = __sfr32(GCLK::GCLK_BASE, GCLK::GENCTRL7_OFFSET);
	rw_sfr32 GENCTRL8 = __sfr32(GCLK::GCLK_BASE, GCLK::GENCTRL8_OFFSET);
}

// ****************************************
// Generator Control Bits.
// ****************************************
namespace GCLK_GENCTRL {
	// Division Factor.
	const uint32_t DIV15 = (1 << 31);
	const uint32_t DIV14 = (1 << 30);
	const uint32_t DIV13 = (1 << 29);
	const uint32_t DIV12 = (1 << 28);
	const uint32_t DIV11 = (1 << 27);
	const uint32_t DIV10 = (1 << 26);
	const uint32_t DIV9 = (1 << 25);
	const uint32_t DIV8 = (1 << 24);
	const uint32_t DIV7 = (1 << 23);
	const uint32_t DIV6 = (1 << 22);
	const uint32_t DIV5 = (1 << 21);
	const uint32_t DIV4 = (1 << 20);
	const uint32_t DIV3 = (1 << 19);
	const uint32_t DIV2 = (1 << 18);
	const uint32_t DIV1 = (1 << 17);
	const uint32_t DIV0 = (1 << 16);
	// Run in Standby.
	const uint32_t RUNSTDBY = (1 << 13);
	// Divide Selection.
	const uint32_t DIVSEL = (1 << 12);
	// Output Enable.
	const uint32_t OE = (1 << 11);
	// Output Off Value.
	const uint32_t OOV = (1 << 10);
	// Improve Duty Cycle.
	const uint32_t IDC = (1 << 9);
	// Generator Enable.
	const uint32_t GENEN = (1 << 8);
	// Generator Clock Source Selection.
	const uint32_t SRC4 = (1 << 4);
	const uint32_t SRC3 = (1 << 3);
	const uint32_t SRC2 = (1 << 2);
	const uint32_t SRC1 = (1 << 1);
	const uint32_t SRC0 = (1 << 0);
}

// ****************************************
// Peripheral Channel Control Registers.
// ****************************************
namespace GCLK {
	rw_sfr32 PCHCTRL0 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL0_OFFSET);
	rw_sfr32 PCHCTRL1 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL1_OFFSET);
	rw_sfr32 PCHCTRL2 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL2_OFFSET);
	rw_sfr32 PCHCTRL3 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL3_OFFSET);
	rw_sfr32 PCHCTRL4 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL4_OFFSET);
	rw_sfr32 PCHCTRL5 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL5_OFFSET);
	rw_sfr32 PCHCTRL6 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL6_OFFSET);
	rw_sfr32 PCHCTRL7 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL7_OFFSET);
	rw_sfr32 PCHCTRL8 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL8_OFFSET);
	rw_sfr32 PCHCTRL9 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL9_OFFSET);
	rw_sfr32 PCHCTRL10 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL10_OFFSET);
	rw_sfr32 PCHCTRL11 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL11_OFFSET);
	rw_sfr32 PCHCTRL12 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL12_OFFSET);
	rw_sfr32 PCHCTRL13 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL13_OFFSET);
	rw_sfr32 PCHCTRL14 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL14_OFFSET);
	rw_sfr32 PCHCTRL15 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL15_OFFSET);
	rw_sfr32 PCHCTRL16 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL16_OFFSET);
	rw_sfr32 PCHCTRL17 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL17_OFFSET);
	rw_sfr32 PCHCTRL18 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL18_OFFSET);
	rw_sfr32 PCHCTRL19 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL19_OFFSET);
	rw_sfr32 PCHCTRL20 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL20_OFFSET);
	rw_sfr32 PCHCTRL21 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL21_OFFSET);
	rw_sfr32 PCHCTRL22 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL22_OFFSET);
	rw_sfr32 PCHCTRL23 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL23_OFFSET);
	rw_sfr32 PCHCTRL24 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL24_OFFSET);
	rw_sfr32 PCHCTRL25 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL25_OFFSET);
	rw_sfr32 PCHCTRL26 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL26_OFFSET);
	rw_sfr32 PCHCTRL27 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL27_OFFSET);
	rw_sfr32 PCHCTRL28 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL28_OFFSET);
	rw_sfr32 PCHCTRL29 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL29_OFFSET);
	rw_sfr32 PCHCTRL30 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL30_OFFSET);
	rw_sfr32 PCHCTRL31 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL31_OFFSET);
	rw_sfr32 PCHCTRL32 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL32_OFFSET);
	rw_sfr32 PCHCTRL33 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL33_OFFSET);
	rw_sfr32 PCHCTRL34 = __sfr32(GCLK::GCLK_BASE, GCLK::PCHCTRL34_OFFSET);
}

// ****************************************
// Peripheral Channel Control Bits.
// ****************************************
namespace GCLK_PCHTRL {
	// Write Lock.
	const uint32_t WRTLOCK = (1 << 7);
	// Channel Enable.
	const uint32_t CHEN = (1 << 6);
	// Generator Selection.
	const uint32_t GEN3 = (1 << 3);
	const uint32_t GEN2 = (1 << 2);
	const uint32_t GEN1 = (1 << 1);
	const uint32_t GEN0 = (1 << 0);
}

#endif	// GCLK_HPP_
