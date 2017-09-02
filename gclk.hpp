// ****************************************
// File: glck.hpp
// Written by: Johan Grobler
// Started: 30/8/2017
// Updated: 30/8/2017
// ****************************************
// Pointers to the Generic Clock
// Controller registers of the ATSAML21J18
// mcu.
// ****************************************

#ifndef GCLK_HPP_
#define GCLK_HPP_

#include "sfr.hpp"

static const uint32_t GCLK_BASE_ADDR = 0x40001800;

// ****************************************
// Control A Register.
// ****************************************
namespace GCLK {
	rw_sfr8 CTRLA = __sfr8(GCLK_BASE_ADDR, 0x00);
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
	ro_sfr32 SYNCBUSY = __sfr32(GCLK_BASE_ADDR, 0x04);
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
	rw_sfr32 GENCTRL0 = __sfr32(GCLK_BASE_ADDR, 0x20);
	rw_sfr32 GENCTRL1 = __sfr32(GCLK_BASE_ADDR, 0x24);
	rw_sfr32 GENCTRL2 = __sfr32(GCLK_BASE_ADDR, 0x28);
	rw_sfr32 GENCTRL3 = __sfr32(GCLK_BASE_ADDR, 0x2c);
	rw_sfr32 GENCTRL4 = __sfr32(GCLK_BASE_ADDR, 0x30);
	rw_sfr32 GENCTRL5 = __sfr32(GCLK_BASE_ADDR, 0x34);
	rw_sfr32 GENCTRL6 = __sfr32(GCLK_BASE_ADDR, 0x38);
	rw_sfr32 GENCTRL7 = __sfr32(GCLK_BASE_ADDR, 0x3c);
	rw_sfr32 GENCTRL8 = __sfr32(GCLK_BASE_ADDR, 0x40);
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
	rw_sfr32 PCHCTRL0 = __sfr32(GCLK_BASE_ADDR, 0x80);
	rw_sfr32 PCHCTRL1 = __sfr32(GCLK_BASE_ADDR, 0x84);
	rw_sfr32 PCHCTRL2 = __sfr32(GCLK_BASE_ADDR, 0x88);
	rw_sfr32 PCHCTRL3 = __sfr32(GCLK_BASE_ADDR, 0x8c);
	rw_sfr32 PCHCTRL4 = __sfr32(GCLK_BASE_ADDR, 0x90);
	rw_sfr32 PCHCTRL5 = __sfr32(GCLK_BASE_ADDR, 0x94);
	rw_sfr32 PCHCTRL6 = __sfr32(GCLK_BASE_ADDR, 0x98);
	rw_sfr32 PCHCTRL7 = __sfr32(GCLK_BASE_ADDR, 0x9c);
	rw_sfr32 PCHCTRL8 = __sfr32(GCLK_BASE_ADDR, 0xa0);
	rw_sfr32 PCHCTRL9 = __sfr32(GCLK_BASE_ADDR, 0xa4);
	rw_sfr32 PCHCTRL10 = __sfr32(GCLK_BASE_ADDR, 0xa8);
	rw_sfr32 PCHCTRL11 = __sfr32(GCLK_BASE_ADDR, 0xac);
	rw_sfr32 PCHCTRL12 = __sfr32(GCLK_BASE_ADDR, 0xb0);
	rw_sfr32 PCHCTRL13 = __sfr32(GCLK_BASE_ADDR, 0xb4);
	rw_sfr32 PCHCTRL14 = __sfr32(GCLK_BASE_ADDR, 0xb8);
	rw_sfr32 PCHCTRL15 = __sfr32(GCLK_BASE_ADDR, 0xbc);
	rw_sfr32 PCHCTRL16 = __sfr32(GCLK_BASE_ADDR, 0xc0);
	rw_sfr32 PCHCTRL17 = __sfr32(GCLK_BASE_ADDR, 0xc4);
	rw_sfr32 PCHCTRL18 = __sfr32(GCLK_BASE_ADDR, 0xc8);
	rw_sfr32 PCHCTRL19 = __sfr32(GCLK_BASE_ADDR, 0xcc);
	rw_sfr32 PCHCTRL20 = __sfr32(GCLK_BASE_ADDR, 0xd0);
	rw_sfr32 PCHCTRL21 = __sfr32(GCLK_BASE_ADDR, 0xd4);
	rw_sfr32 PCHCTRL22 = __sfr32(GCLK_BASE_ADDR, 0xd8);
	rw_sfr32 PCHCTRL23 = __sfr32(GCLK_BASE_ADDR, 0xdc);
	rw_sfr32 PCHCTRL24 = __sfr32(GCLK_BASE_ADDR, 0xe0);
	rw_sfr32 PCHCTRL25 = __sfr32(GCLK_BASE_ADDR, 0xe4);
	rw_sfr32 PCHCTRL26 = __sfr32(GCLK_BASE_ADDR, 0xe8);
	rw_sfr32 PCHCTRL27 = __sfr32(GCLK_BASE_ADDR, 0xec);
	rw_sfr32 PCHCTRL28 = __sfr32(GCLK_BASE_ADDR, 0xf0);
	rw_sfr32 PCHCTRL29 = __sfr32(GCLK_BASE_ADDR, 0xf4);
	rw_sfr32 PCHCTRL30 = __sfr32(GCLK_BASE_ADDR, 0xf8);
	rw_sfr32 PCHCTRL31 = __sfr32(GCLK_BASE_ADDR, 0xfc);
	rw_sfr32 PCHCTRL32 = __sfr32(GCLK_BASE_ADDR, 0x100);
	rw_sfr32 PCHCTRL33 = __sfr32(GCLK_BASE_ADDR, 0x104);
	rw_sfr32 PCHCTRL34 = __sfr32(GCLK_BASE_ADDR, 0x108);
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

#endif
