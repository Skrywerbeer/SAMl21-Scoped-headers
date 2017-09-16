// ****************************************
// File: pm.hpp
// Written by: Johan Grobler.
// Started: 3/9/2017
// Updated: 12/9/2017
// ****************************************
// Power Manager special function
// registers of the ATSAML21LJ18.
// ****************************************

#ifndef PM_HPP_
#define PM_HPP_

#include "sfr.hpp"

// ****************************************
// Base addresses and offsets.
// ****************************************
namespace PM {
	// Base address.
	const uint32_t PM_BASE = 0x40000000;
	// Control A Register offset.
	const uint8_t CTRLA_OFFSET = 0x00;
	// Sleep Configuration Register offset.
	const uint8_t SLEEPCFG_OFFSET = 0x01;
	// Performance Level Configuration Register offset.
	const uint8_t PLCFG_OFFSET = 0x02;
	// Interrupt Enable Clear Register offset.
	const uint8_t INTENCLR_OFFSET = 0x04;
	// Interrupt Enable Set Register offset.
	const uint8_t INTENSET_OFFSET = 0x05;
	// Interrupt Flag Status and Clear Register offset.
	const uint8_t INTFLAG_OFFSET = 0x06;
	// Stantby Configuration Register offset.
	const uint8_t STDBYCFG_OFFSET = 0x08;
}

// ****************************************
// Control A register.
// ****************************************
namespace PM {
	rw_sfr8 CTRLA = __sfr8(PM::PM_BASE, PM::CTRLA_OFFSET);
}

// ****************************************
// Control A Bits.
// ****************************************
namespace PM_CTRLA {
	// I/O Retention.
	const uint8_t IORET = (1 << 2);
}

// ****************************************
// Sleep Configuration Register.
// ****************************************
namespace PM {
	rw_sfr8 SLEEPCFG = __sfr8(PM::PM_BASE, PM::SLEEPCFG_OFFSET);
}

// ****************************************
// Sleep Configuration Bits.
// ****************************************
namespace PM_SLEEPCFG {
	// Sleep Mode.
	const uint8_t SLEEPMODE2 = (1 << 2);
	const uint8_t SLEEPMODE1 = (1 << 1);
	const uint8_t SLEEPMODE0 = (1 << 0);
}

// ****************************************
// Performance Level Configuration Register.
// ****************************************
namespace PM {
	rw_sfr8 PLCFG = __sfr8(PM::PM_BASE, PM::PLCFG_OFFSET);
}

// ****************************************
// Performance Level Configuration Bits.
// ****************************************
namespace PM_PLCFG {
	// Performance Level Disable.
	const uint8_t PLDIS = (1 << 7);
	// Performance Level Select.
	const uint8_t PLSEL1 = (1 << 1);
	const uint8_t PLSEL0 = (1 << 0);
}

// ****************************************
// Interrupt Enable Clear Register.
// ****************************************
namespace PM {
	rw_sfr8 INTENCLR = __sfr8(PM::PM_BASE, PM::INTENCLR_OFFSET);
}

// ****************************************
// Interrupt Enable Clear Bits.
// ****************************************
namespace PM_INTENCLR {
	// PDSW Back Biasing Ready Interrupt Disable.
	const uint8_t BBRDY = (1 << 1);
	// Performance Level Interrupt Disable.
	const uint8_t PLRDY = (1 << 0);
}

// ****************************************
// Interrupt Enable Set Register.
// ****************************************
namespace PM {
	rw_sfr8 INTENSET = __sfr8(PM::PM_BASE, PM::INTENSET_OFFSET);
}

// ****************************************
// Interrupt Enable Set Bits.
// ****************************************
namespace PM_INTENSET {
	// PDSW Back Biasing Ready Interrupt Enable.
	const uint8_t BBRDY = (1 << 1);
	// Performance Level Ready Interrupt Enable.
	const uint8_t PLRDY = (1 << 0);
}

// ****************************************
// Interrupt Flag Status and Clear Register.
// ****************************************
namespace PM {
	rw_sfr8 INTFLAG = __sfr8(PM::PM_BASE, PM::INTFLAG_OFFSET);
}

// ****************************************
// Interrupt Flag Status and Clear Bits.
// ****************************************
namespace PM_INTFLAG {
	// PDSW Back Biasing Ready.
	const uint8_t BBRDY = (1 << 1);
	// Performance Level Ready.
	const uint8_t PLRDY = (1 << 0);
}

// ****************************************
// Standby Configuration Register.
// ****************************************
namespace PM {
	rw_sfr16 STDBYCFG = __sfr16(PM::PM_BASE, PM::STDBYCFG_OFFSET);
}

// ****************************************
// Standby Configuration Bits.
// ****************************************
namespace PM_STDBYCFG {
	// Back Bias for HMCRAMCLP.
	const uint16_t BBIASLP1 = (1 << 13);
	const uint16_t BBIASLP0 = (1 << 12);
	// Back Bias for HMCRAMCHS.
	const uint16_t BBIASHS1 = (1 << 11);
	const uint16_t BBIASHS0 = (1 << 10);
	// Linked Power Domain.
	const uint16_t LINKPD1 = (1 << 9);
	const uint16_t LINKPD0 = (1 << 8);
	// VREG Switching Mode.
	const uint16_t VREGSMOD1 = (1 << 7);
	const uint16_t VREGSMOD0 = (1 << 6);
	// Dynamic Power Gating for Power Domain 1.
	const uint16_t DPGPD1 = (1 << 5);
	// Dynamic Power Gating for Power Domain 0.
	const uint16_t DPGPD0 = (1 << 4);
	// Power Domain Configuration.
	const uint16_t PDCFG1 = (1 << 1);
	const uint16_t PDCFG0 = (1 << 0);
}

#endif	// PM_HPP_
