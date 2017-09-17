// ****************************************
// File: nvmctrl.hpp
// Written by: Johan Grobler
// Started: 13/9/2017
// Updated: 17/9/2017
// ****************************************
// Non-Voltile Memory Conrtoller special
// function registers of the ATSAML21J18
// MCU.
// ****************************************

#ifndef NVMCTRL_HPP_
#define NVMCTRL_HPP

#include "sfr.hpp"

// ****************************************
// Base addresses and offsets.
// ****************************************
namespace NVMCTRL {
	// Base address.
	const uint32_t NVMCTRL_BASE = 0x41004000;
	// Control A Register offset.
	const uint8_t CTRLA_OFFSET = 0x00;
	// Control B Register offset.
	const uint8_t CTRLB_OFFSET = 0x04;
	// NVM Parameter Register offset.
	const uint8_t PARAM_OFFSET = 0x08;
	// Interrupt Enable Clear Register offset.
	const uint8_t INTENCLR_OFFSET = 0x0c;
	// Interrupt Enable Set Register offset.
	const uint8_t INTENSET_OFFSET = 0x10;
	// Interrupt Flag Status and Clear Register offset.
	const uint8_t INTFLAG_OFFSET = 0x14;
	// Status Register offset.
	const uint8_t STATUS_OFFSET = 0x18;
	// Address Register offset.
	const uint8_t ADDR_OFFSET = 0x1c;
	// Lock Section Register offset.
	const uint8_t LOCK_OFFSET = 0x20;
}

// ****************************************
// Control A Register.
// ****************************************
namespace NVMCTRL {
	rw_sfr16 CTRLA = __sfr16(NVMCTRL::NVMCTRL_BASE, NVMCTRL::CTRLA_OFFSET);
}

// ****************************************
// Control A bits.
// ****************************************
namespace NVMCTRL_CTRLA {
	// Command Execution.
	const uint8_t CMDEX_MASK = 0xa5;
	const uint8_t CMDEX_SHIFT = 8;
	// Commands.
	const uint8_t ER = 0x02;		// Erase Row.
	const uint8_t WP = 0x04;		// Write Page.
	const uint8_t EAR = 0x05;		// Erase Auxiliary Row.
	const uint8_t WAP = 0x06;		// Write Auxiliary Page.
	const uint8_t WL = 0x0f;		// Write Lockbits.
	const uint8_t RWWEEWP = 0x1a;	// RWWEE Erase Row.
	const uint8_t RWWEEWP = 0x1c;	// RWWEE Write Page.
	const uint8_t LR = 0x40;		// Lock Region.
	const uint8_t UR = 0x41;		// Unlock Region.
	const uint8_t SPRM = 0x42;		// Set Power Reduction Mode.
	const uint8_t CPRM = 0x42;		// Clear Power Reduction Mode.
	const uint8_t PBC = 0x44;		// Page Buffer Clear.
	const uint8_t SSB = 0x45;		// Set Security Bit.
	const uint8_t INVALL = 0x46;	// Invalidates all cache lines.
	const uint8_t LDR = 0x47;		// Lock Data Region.
	const uint8_t UDR = 0x48;		// Unlock Data Region.
}

// ****************************************
// Control B Register.
// ****************************************
namespace NVMCTRL {
	rw_sfr32 CTRLB = __sfr32(NVMCTRL::NVMCTRL_BASE, NVMCTRL::CTRLB_OFFSET);
}

// ****************************************
// Control B bits.
// ****************************************
namespace NVMCTRL_CTRLB {
	// Cache Disable.
	const uint32_t CACHEDIS = (1 << 18);
	// NVMCTRL Read Mode.
	const uint32_t READMODE1 = (1 << 17);
	const uint32_t READMODE0 = (1 << 16);
	// Power Reduction Mode during Sleep.
	const uint32_t SLEEPPRM1 = (1 << 9);
	const uint32_t SLEEPPRM0 = (1 << 8);
	// Manual Write.
	const uint32_t MANW = (1 << 7);
	// NVM Read Wait States.
	const uint32_t RWS_MASK = 0x1e;
	const uint8_t RWS_SHIFT = 1;
	const uint32_t RWS3 = (1 << 4);
	const uint32_t RWS2 = (1 << 3);
	const uint32_t RWS1 = (1 << 2);
	const uint32_t RWS0 = (1 << 1);
}

// ****************************************
// NVM Parameter Register.
// ****************************************
namespace NVMCTRL {
	ro_sfr32 PARAM = __sfr32(NVMCTRL::NVMCTRL_BASE, NVMCTRL::PARAM_OFFSET);
}

// ****************************************
// NVM Parameter bits.
// ****************************************
namespace NVMCTRL_PARAM {
	// Read While Write EEPROM emulation area Pages.
	const uint32_t RWWEEP_MASK = 0xfff00000;
	const uint32_t RWWEEP = 20;
	const uint32_t RWWEEP11 = (1 << 31);
	const uint32_t RWWEEP10 = (1 << 30);
	const uint32_t RWWEEP9 = (1 << 29);
	const uint32_t RWWEEP8 = (1 << 28);
	const uint32_t RWWEEP7 = (1 << 27);
	const uint32_t RWWEEP6 = (1 << 26);
	const uint32_t RWWEEP5 = (1 << 25);
	const uint32_t RWWEEP4 = (1 << 24);
	const uint32_t RWWEEP3 = (1 << 23);
	const uint32_t RWWEEP2 = (1 << 22);
	const uint32_t RWWEEP1 = (1 << 21);
	const uint32_t RWWEEP0 = (1 << 20);
	// Page Size.
	const uint32_t PSZ_MASK = 0x70000;
	const uint32_t PSZ = 16;
	const uint32_t PSZ2 = (1 << 18);
	const uint32_t PSZ1 = (1 << 17);
	const uint32_t PSZ0 = (1 << 16);
	// NVM Pages.
	const uint32_t NVMP_MASK = 0xffff;
}

// ****************************************
// Interrupt Enable Clear Register.
// ****************************************
namespace NVMCTRL {
	rw_sfr8 INTENCLR = __sfr8(NVMCTRL::NVMCTRL_BASE, NVMCTRL::INTENCLR_OFFSET);
}

// ****************************************
// Interrupt Enable Clear bits.
// ****************************************
namespace NVMCTRL_INTENCLR {
	// Error Interrupt Disable.
	const uint8_t ERROR = (1 << 1);
}

// ****************************************
// Interrupt Enable Set Register.
// ****************************************
namespace NVMCTRL {
	rw_sfr8 INTENSET = __sfr8(NVMCTRL::NVMCTRL_BASE, NVMCTRL::INTENSET_OFFSET);
}

// ****************************************
// Interrupt Enable Set bits.
// ****************************************
namespace NVMCTRL_INTENSET {
	// Error Interrupt Enable.
	const uint8_t ERROR = (1 << 1);
}

// ****************************************
// Interrupt Flag Status and Clear Register.
// ****************************************
namespace NVMCTRL {
	rw_sfr8 INTFLAG = __sfr8(NVMCTRL::NVMCTRL_BASE, NVMCTRL::INTFLAG_OFFSET);
}

// ****************************************
// Interrupt Flag Status and Clear bits.
// ****************************************
namespace NVMCTRL_INTFLAG {
	// Error Interrupt.
	const uint8_t ERROR = (1 << 1);
}

// ****************************************
// Status Register.
// ****************************************
namespace NVMCTRL {
	rw_sfr16 STATUS = __sfr16(NVMCTRL::NVMCTRL_BASE, NVMCTRL::STATUS_OFFSET);
}

// ****************************************
// Status bits.
// ****************************************
namespace NVMCTRL_STATUS {
	// Security Bits Status.
	const uint16_t SB = (1 << 8);
	// NVM Error.
	const uint16_t NVME = (1 << 4);
	// Lock Error Status.
	const uint16_t LOCKE = (1 << 3);
	// Programming Error Status.
	const uint16_t PROGE = (1 << 2);
	// NVM Page Buffer Active Loading.
	const uint16_t LOAD = (1 << 1);
	// Power Reduction Mode.
	const uint16_t PRM = (1 << 0);
}

// ****************************************
// Address Register.
// ****************************************
namespace NVMCTRL {
	rw_sfr32 ADDR = __sfr32(NVMCTRL::NVMCTRL_BASE, NVMCTRL::ADDR_OFFSET);
}

// ****************************************
// Address bits.
// ****************************************
namespace NVMCTRL_ADDR {
	// NVM Address.
	const uint32_t ADDR = 0x003fffff;
	// TODO: Add individual bits, maybe.
}

// ****************************************
// Lock Section Register.
// ****************************************
namespace NVMCTRL {
	ro_sfr16 LOCK = __sfr16(NVMCTRL::NVMCTRL_BASE, NVMCTRL::LOCK_OFFSET);
}

// ****************************************
// Lock Section bits.
// ****************************************
namespace NVMCTRL_LOCK {
	// Region Lock Bits.
	const uint16_t LOCK15 = (1 << 15);
	const uint16_t LOCK14 = (1 << 14);
	const uint16_t LOCK13 = (1 << 13);
	const uint16_t LOCK12 = (1 << 12);
	const uint16_t LOCK11 = (1 << 11);
	const uint16_t LOCK10 = (1 << 10);
	const uint16_t LOCK9 = (1 << 9);
	const uint16_t LOCK8 = (1 << 8);
	const uint16_t LOCK7 = (1 << 7);
	const uint16_t LOCK6 = (1 << 6);
	const uint16_t LOCK5 = (1 << 5);
	const uint16_t LOCK4 = (1 << 4);
	const uint16_t LOCK3 = (1 << 3);
	const uint16_t LOCK2 = (1 << 2);
	const uint16_t LOCK1 = (1 << 1);
	const uint16_t LOCK0 = (1 << 0);
}

#endif	// NVMCTRL_HPP
