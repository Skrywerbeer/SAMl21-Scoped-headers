// ****************************************
// File: port.hpp
// Written by: Johan Grobler.
// Started: 28/8/2017
// Updated: 28/8/2017
// ****************************************
// Constant pointers to the PORT special function
// registers on the ATSAML21J18 mcu.
// ****************************************

#ifndef PORT_HPP_
#define PORT_HPP_

#include "sfr.hpp"

const unsigned int PORT_A_BASE_ADDR = 0x40002800;
const unsigned int PORT_B_BASE_ADDR = 0x40002880;

// ****************************************
// Data Direction Register.
// ****************************************
namespace PORT_A {rw_sfr32 DIR = __sfr32(PORT_A_BASE_ADDR, 0);}
namespace PORT_B {rw_sfr32 DIR = __sfr32(PORT_B_BASE_ADDR, 0);}

// ****************************************
// Data Direction Register Bits.
// ****************************************
namespace PORT_DIR_BITS {
	const uint32_t BIT0 = (1 << 0);
	const uint32_t BIT1 = (1 << 1);
	const uint32_t BIT2 = (1 << 2);
	const uint32_t BIT3 = (1 << 3);
	const uint32_t BIT4 = (1 << 4);
	const uint32_t BIT5 = (1 << 5);
	const uint32_t BIT6 = (1 << 6);
	const uint32_t BIT7 = (1 << 7);
	const uint32_t BIT8 = (1 << 8);
	const uint32_t BIT9 = (1 << 9);
	const uint32_t BIT10 = (1 << 10);
	const uint32_t BIT11 = (1 << 11);
	const uint32_t BIT12 = (1 << 12);
	const uint32_t BIT13 = (1 << 13);
	const uint32_t BIT14 = (1 << 14);
	const uint32_t BIT15 = (1 << 15);
	const uint32_t BIT16 = (1 << 16);
	const uint32_t BIT17 = (1 << 17);
	const uint32_t BIT18 = (1 << 18);
	const uint32_t BIT19 = (1 << 19);
	const uint32_t BIT20 = (1 << 20);
	const uint32_t BIT21 = (1 << 21);
	const uint32_t BIT22 = (1 << 22);
	const uint32_t BIT23 = (1 << 23);
	const uint32_t BIT24 = (1 << 24);
	const uint32_t BIT25 = (1 << 25);
	const uint32_t BIT26 = (1 << 26);
	const uint32_t BIT27 = (1 << 27);
	const uint32_t BIT28 = (1 << 28);
	const uint32_t BIT29 = (1 << 29);
	const uint32_t BIT30 = (1 << 30);
	const uint32_t BIT31 = (1 << 31);
}

// ****************************************
// Data Direction Clear Register.
// ****************************************
namespace PORT_A {rw_sfr32 DIRCLR = __sfr32(PORT_A_BASE_ADDR, 0x04);}
namespace PORT_B {rw_sfr32 DIRCLR = __sfr32(PORT_B_BASE_ADDR, 0x04);}

// ****************************************
// Data Direction Set Register.
// ****************************************
namespace PORT_A {rw_sfr32 DIRSET = __sfr32(PORT_A_BASE_ADDR, 0x08);}
namespace PORT_B {rw_sfr32 DIRSET = __sfr32(PORT_B_BASE_ADDR, 0x08);}

// ****************************************
// Data Direction Toggle Register.
// ****************************************
namespace PORT_A {rw_sfr32 DIRTGL = __sfr32(PORT_A_BASE_ADDR, 0x0C);}
namespace PORT_B {rw_sfr32 DIRTGL = __sfr32(PORT_B_BASE_ADDR, 0x0C);}

// ****************************************
// Data Output Value Register.
// ****************************************
namespace PORT_A {rw_sfr32 OUT = __sfr32(PORT_A_BASE_ADDR, 0x10);}
namespace PORT_B {rw_sfr32 OUT = __sfr32(PORT_B_BASE_ADDR, 0x10);}

// ****************************************
// Data Output Value Clear Register.
// ****************************************
namespace PORT_A {rw_sfr32 OUTCLR = __sfr32(PORT_A_BASE_ADDR, 0x14);}
namespace PORT_B {rw_sfr32 OUTCLR = __sfr32(PORT_B_BASE_ADDR, 0x14);}

// ****************************************
// Data Output Value Set Register.
// ****************************************
namespace PORT_A {rw_sfr32 OUTSET = __sfr32(PORT_A_BASE_ADDR, 0x18);}
namespace PORT_B {rw_sfr32 OUTSET = __sfr32(PORT_B_BASE_ADDR, 0x18);}

// ****************************************
// Data Output Value Toggle Register.
// ****************************************
namespace PORT_A {rw_sfr32 OUTTGL = __sfr32(PORT_A_BASE_ADDR, 0x1c);}
namespace PORT_B {rw_sfr32 OUTTGL = __sfr32(PORT_B_BASE_ADDR, 0x1c);}

// ****************************************
// Data Input Value Register.
// ****************************************
namespace PORT_A {rw_sfr32 IN = __sfr32(PORT_A_BASE_ADDR, 0x20);}
namespace PORT_B {rw_sfr32 IN = __sfr32(PORT_B_BASE_ADDR, 0x20);}

// ****************************************
// Control Register.
// ****************************************
namespace PORT_A {rw_sfr32 CTRL = __sfr32(PORT_A_BASE_ADDR, 0x24);}
namespace PORT_B {rw_sfr32 CTRL = __sfr32(PORT_B_BASE_ADDR, 0x24);}

// ****************************************
// Write Configuration Register.
// ****************************************
namespace PORT_A {rw_sfr32 WRCONFIG = __sfr32(PORT_A_BASE_ADDR, 0x28);}
namespace PORT_B {rw_sfr32 WRCONFIG = __sfr32(PORT_B_BASE_ADDR, 0x28);}

// ****************************************
// Write Configuration Register Bits.
// ****************************************
namespace PORT_WRCONFIG {
	const uint32_t HWSEL = (1 << 31);
	const uint32_t WRPINCFG = (1 << 30);
	const uint32_t WRPMUX = (1 << 28);
	const uint32_t PMUX3 = (1 << 27);
	const uint32_t PMUX2 = (1 << 26);
	const uint32_t PMUX1 = (1 << 25);
	const uint32_t PMUX0 = (1 << 24);
	const uint32_t DRVSTR = (1 << 22);
	const uint32_t PULLEN = (1 << 18);
	const uint32_t INEN = (1 << 17);
	const uint32_t PMUXEN = (1 << 16);
	const uint32_t PINMASK15 = (1 << 15);
	const uint32_t PINMASK14 = (1 << 14);
	const uint32_t PINMASK13 = (1 << 13);
	const uint32_t PINMASK12 = (1 << 12);
	const uint32_t PINMASK11 = (1 << 11);
	const uint32_t PINMASK10 = (1 << 10);
	const uint32_t PINMASK9 = (1 << 9);
	const uint32_t PINMASK8 = (1 << 8);
	const uint32_t PINMASK7 = (1 << 7);
	const uint32_t PINMASK6 = (1 << 6);
	const uint32_t PINMASK5 = (1 << 5);
	const uint32_t PINMASK4 = (1 << 4);
	const uint32_t PINMASK3 = (1 << 3);
	const uint32_t PINMASK2 = (1 << 2);
	const uint32_t PINMASK1 = (1 << 1);
	const uint32_t PINMASK0 = (1 << 0);
}

// ****************************************
// Event Input Control Register.
// ****************************************
namespace PORT_A {rw_sfr32 EVCTRL = __sfr32(PORT_A_BASE_ADDR, 0x2c);}
namespace PORT_B {rw_sfr32 EVCTRL = __sfr32(PORT_B_BASE_ADDR, 0x2c);}

// ****************************************
// Event Input Control Register Bits.
// ****************************************
namespace PORT_EVCTRL {
	// Event 3.
	const uint32_t PORTEI3 = (1 << 31);
	const uint32_t EVACT31 = (1 << 30);
	const uint32_t EVACT30 = (1 << 29);
	const uint32_t PID34 = (1 << 28);
	const uint32_t PID33 = (1 << 27);
	const uint32_t PID32 = (1 << 26);
	const uint32_t PID31 = (1 << 25);
	const uint32_t PID30 = (1 << 24);
	// Event 2
	const uint32_t PORTEI2 = (1 << 23);
	const uint32_t EVACT21 = (1 << 22);
	const uint32_t EVACT20 = (1 << 21);
	const uint32_t PID24 = (1 << 20);
	const uint32_t PID23 = (1 << 19);
	const uint32_t PID22 = (1 << 18);
	const uint32_t PID21 = (1 << 17);
	const uint32_t PID20 = (1 << 16);
	// Event 1.
	const uint32_t PORTEI1 = (1 << 15);
	const uint32_t EVACT11 = (1 << 14);
	const uint32_t EVACT10 = (1 << 13);
	const uint32_t PID14 = (1 << 12);
	const uint32_t PID13 = (1 << 11);
	const uint32_t PID12 = (1 << 10);
	const uint32_t PID11 = (1 << 9);
	const uint32_t PID10 = (1 << 8);
	// Event 0.
	const uint32_t PORTEI0 = (1 << 7);
	const uint32_t EVACT01 = (1 << 6);
	const uint32_t EVACT00 = (1 << 5);
	const uint32_t PID04 = (1 << 4);
	const uint32_t PID03 = (1 << 3);
	const uint32_t PID02 = (1 << 2);
	const uint32_t PID01 = (1 << 1);
	const uint32_t PID00 = (1 << 0);
}

// ****************************************
// Peripheral Multiplexing Registers.
// ****************************************
namespace PORT_A {
	rw_sfr8 PMUX0 = __sfr8(PORT_A_BASE_ADDR, 0x30);
	rw_sfr8 PMUX1 = __sfr8(PORT_A_BASE_ADDR, 0x31);
	rw_sfr8 PMUX2 = __sfr8(PORT_A_BASE_ADDR, 0x32);
	rw_sfr8 PMUX3 = __sfr8(PORT_A_BASE_ADDR, 0x33);
	rw_sfr8 PMUX4 = __sfr8(PORT_A_BASE_ADDR, 0x34);
	rw_sfr8 PMUX5 = __sfr8(PORT_A_BASE_ADDR, 0x35);
	rw_sfr8 PMUX6 = __sfr8(PORT_A_BASE_ADDR, 0x36);
	rw_sfr8 PMUX7 = __sfr8(PORT_A_BASE_ADDR, 0x37);
	rw_sfr8 PMUX8 = __sfr8(PORT_A_BASE_ADDR, 0x38);
	rw_sfr8 PMUX9 = __sfr8(PORT_A_BASE_ADDR, 0x39);
	rw_sfr8 PMUX10 = __sfr8(PORT_A_BASE_ADDR, 0x3a);
	rw_sfr8 PMUX11 = __sfr8(PORT_A_BASE_ADDR, 0x3b);
	rw_sfr8 PMUX12 = __sfr8(PORT_A_BASE_ADDR, 0x3c);
	rw_sfr8 PMUX13 = __sfr8(PORT_A_BASE_ADDR, 0x3d);
	rw_sfr8 PMUX14 = __sfr8(PORT_A_BASE_ADDR, 0x3e);
	rw_sfr8 PMUX15 = __sfr8(PORT_A_BASE_ADDR, 0x3f);
}
namespace PORT_B {
	rw_sfr8 PMUX0 = __sfr8(PORT_B_BASE_ADDR, 0x30);
	rw_sfr8 PMUX1 = __sfr8(PORT_B_BASE_ADDR, 0x31);
	rw_sfr8 PMUX2 = __sfr8(PORT_B_BASE_ADDR, 0x32);
	rw_sfr8 PMUX3 = __sfr8(PORT_B_BASE_ADDR, 0x33);
	rw_sfr8 PMUX4 = __sfr8(PORT_B_BASE_ADDR, 0x34);
	rw_sfr8 PMUX5 = __sfr8(PORT_B_BASE_ADDR, 0x35);
	rw_sfr8 PMUX6 = __sfr8(PORT_B_BASE_ADDR, 0x36);
	rw_sfr8 PMUX7 = __sfr8(PORT_B_BASE_ADDR, 0x37);
	rw_sfr8 PMUX8 = __sfr8(PORT_B_BASE_ADDR, 0x38);
	rw_sfr8 PMUX9 = __sfr8(PORT_B_BASE_ADDR, 0x39);
	rw_sfr8 PMUX10 = __sfr8(PORT_B_BASE_ADDR, 0x3a);
	rw_sfr8 PMUX11 = __sfr8(PORT_B_BASE_ADDR, 0x3b);
	rw_sfr8 PMUX12 = __sfr8(PORT_B_BASE_ADDR, 0x3c);
	rw_sfr8 PMUX13 = __sfr8(PORT_B_BASE_ADDR, 0x3d);
	rw_sfr8 PMUX14 = __sfr8(PORT_B_BASE_ADDR, 0x3e);
	rw_sfr8 PMUX15 = __sfr8(PORT_B_BASE_ADDR, 0x3f);
}

// ****************************************
// Peripheral Multiplexing Register Bits.
// ****************************************
namespace PORT_PMUX {
	const uint8_t PMUXO3 = (1 << 7);
	const uint8_t PMUXO2 = (1 << 6);
	const uint8_t PMUXO1 = (1 << 5);
	const uint8_t PMUXO0 = (1 << 4);
	const uint8_t PMUXE3 = (1 << 3);
	const uint8_t PMUXE2 = (1 << 2);
	const uint8_t PMUXE1 = (1 << 1);
	const uint8_t PMUXE0 = (1 << 0);
}

// ****************************************
// Pin Configuration Registers.
// ****************************************
namespace PORT_A {
	rw_sfr8 PINCFG0 = __sfr8(PORT_A_BASE_ADDR, 0x40);
	rw_sfr8 PINCFG1 = __sfr8(PORT_A_BASE_ADDR, 0x41);
	rw_sfr8 PINCFG2 = __sfr8(PORT_A_BASE_ADDR, 0x42);
	rw_sfr8 PINCFG3 = __sfr8(PORT_A_BASE_ADDR, 0x43);
	rw_sfr8 PINCFG4 = __sfr8(PORT_A_BASE_ADDR, 0x44);
	rw_sfr8 PINCFG5 = __sfr8(PORT_A_BASE_ADDR, 0x45);
	rw_sfr8 PINCFG6 = __sfr8(PORT_A_BASE_ADDR, 0x46);
	rw_sfr8 PINCFG7 = __sfr8(PORT_A_BASE_ADDR, 0x47);
	rw_sfr8 PINCFG8 = __sfr8(PORT_A_BASE_ADDR, 0x48);
	rw_sfr8 PINCFG9 = __sfr8(PORT_A_BASE_ADDR, 0x49);
	rw_sfr8 PINCFG10 = __sfr8(PORT_A_BASE_ADDR, 0x4a);
	rw_sfr8 PINCFG11 = __sfr8(PORT_A_BASE_ADDR, 0x4b);
	rw_sfr8 PINCFG12 = __sfr8(PORT_A_BASE_ADDR, 0x4c);
	rw_sfr8 PINCFG13 = __sfr8(PORT_A_BASE_ADDR, 0x4d);
	rw_sfr8 PINCFG14 = __sfr8(PORT_A_BASE_ADDR, 0x4e);
	rw_sfr8 PINCFG15 = __sfr8(PORT_A_BASE_ADDR, 0x4f);
	rw_sfr8 PINCFG16 = __sfr8(PORT_A_BASE_ADDR, 0x50);
	rw_sfr8 PINCFG17 = __sfr8(PORT_A_BASE_ADDR, 0x51);
	rw_sfr8 PINCFG18 = __sfr8(PORT_A_BASE_ADDR, 0x52);
	rw_sfr8 PINCFG19 = __sfr8(PORT_A_BASE_ADDR, 0x53);
	rw_sfr8 PINCFG20 = __sfr8(PORT_A_BASE_ADDR, 0x54);
	rw_sfr8 PINCFG21 = __sfr8(PORT_A_BASE_ADDR, 0x55);
	rw_sfr8 PINCFG22 = __sfr8(PORT_A_BASE_ADDR, 0x56);
	rw_sfr8 PINCFG23 = __sfr8(PORT_A_BASE_ADDR, 0x57);
	rw_sfr8 PINCFG24 = __sfr8(PORT_A_BASE_ADDR, 0x58);
	rw_sfr8 PINCFG25 = __sfr8(PORT_A_BASE_ADDR, 0x59);
	rw_sfr8 PINCFG26 = __sfr8(PORT_A_BASE_ADDR, 0x5a);
	rw_sfr8 PINCFG27 = __sfr8(PORT_A_BASE_ADDR, 0x5b);
	rw_sfr8 PINCFG28 = __sfr8(PORT_A_BASE_ADDR, 0x5c);
	rw_sfr8 PINCFG29 = __sfr8(PORT_A_BASE_ADDR, 0x5d);
	rw_sfr8 PINCFG30 = __sfr8(PORT_A_BASE_ADDR, 0x5e);
	rw_sfr8 PINCFG31 = __sfr8(PORT_A_BASE_ADDR, 0x5f);
}
namespace PORT_B {
	rw_sfr8 PINCFG0 = __sfr8(PORT_B_BASE_ADDR, 0x40);
	rw_sfr8 PINCFG1 = __sfr8(PORT_B_BASE_ADDR, 0x41);
	rw_sfr8 PINCFG2 = __sfr8(PORT_B_BASE_ADDR, 0x42);
	rw_sfr8 PINCFG3 = __sfr8(PORT_B_BASE_ADDR, 0x43);
	rw_sfr8 PINCFG4 = __sfr8(PORT_B_BASE_ADDR, 0x44);
	rw_sfr8 PINCFG5 = __sfr8(PORT_B_BASE_ADDR, 0x45);
	rw_sfr8 PINCFG6 = __sfr8(PORT_B_BASE_ADDR, 0x46);
	rw_sfr8 PINCFG7 = __sfr8(PORT_B_BASE_ADDR, 0x47);
	rw_sfr8 PINCFG8 = __sfr8(PORT_B_BASE_ADDR, 0x48);
	rw_sfr8 PINCFG9 = __sfr8(PORT_B_BASE_ADDR, 0x49);
	rw_sfr8 PINCFG10 = __sfr8(PORT_B_BASE_ADDR, 0x4a);
	rw_sfr8 PINCFG11 = __sfr8(PORT_B_BASE_ADDR, 0x4b);
	rw_sfr8 PINCFG12 = __sfr8(PORT_B_BASE_ADDR, 0x4c);
	rw_sfr8 PINCFG13 = __sfr8(PORT_B_BASE_ADDR, 0x4d);
	rw_sfr8 PINCFG14 = __sfr8(PORT_B_BASE_ADDR, 0x4e);
	rw_sfr8 PINCFG15 = __sfr8(PORT_B_BASE_ADDR, 0x4f);
	rw_sfr8 PINCFG16 = __sfr8(PORT_B_BASE_ADDR, 0x50);
	rw_sfr8 PINCFG17 = __sfr8(PORT_B_BASE_ADDR, 0x51);
	rw_sfr8 PINCFG18 = __sfr8(PORT_B_BASE_ADDR, 0x52);
	rw_sfr8 PINCFG19 = __sfr8(PORT_B_BASE_ADDR, 0x53);
	rw_sfr8 PINCFG20 = __sfr8(PORT_B_BASE_ADDR, 0x54);
	rw_sfr8 PINCFG21 = __sfr8(PORT_B_BASE_ADDR, 0x55);
	rw_sfr8 PINCFG22 = __sfr8(PORT_B_BASE_ADDR, 0x56);
	rw_sfr8 PINCFG23 = __sfr8(PORT_B_BASE_ADDR, 0x57);
	rw_sfr8 PINCFG24 = __sfr8(PORT_B_BASE_ADDR, 0x58);
	rw_sfr8 PINCFG25 = __sfr8(PORT_B_BASE_ADDR, 0x59);
	rw_sfr8 PINCFG26 = __sfr8(PORT_B_BASE_ADDR, 0x5a);
	rw_sfr8 PINCFG27 = __sfr8(PORT_B_BASE_ADDR, 0x5b);
	rw_sfr8 PINCFG28 = __sfr8(PORT_B_BASE_ADDR, 0x5c);
	rw_sfr8 PINCFG29 = __sfr8(PORT_B_BASE_ADDR, 0x5d);
	rw_sfr8 PINCFG30 = __sfr8(PORT_B_BASE_ADDR, 0x5e);
	rw_sfr8 PINCFG31 = __sfr8(PORT_B_BASE_ADDR, 0x5f);
}

// ****************************************
// Pin Configuration Register Bits.
// ****************************************
namespace PORT_PINCFG {
	const uint8_t DRVSTR = (1 << 6);
	const uint8_t PULLEN = (1 << 2);
	const uint8_t INEN = (1 << 1);
	const uint8_t PMUXEN = (1 << 0);
}

#endif
