// ****************************************
// File: port.hpp
// Written by: Johan Grobler.
// Started: 28/8/2017
// Updated: 12/9/2017
// ****************************************
// Constant pointers to the PORT special function
// registers on the ATSAML21J18 mcu.
// ****************************************

#ifndef PORT_HPP_
#define PORT_HPP_

#include "sfr.hpp"

// ****************************************
// Register base address and offsets.
// ****************************************
namespace PORT {
	// Peripheral Base Addresses.
	const uint32_t PORT_A_BASE = 0x40002800;
	const uint32_t PORT_B_BASE = 0x40002880;
	// Data Direction Register offset.
	const uint8_t DIR_OFFSET = 0x00;
	// Data Direction Clear Register offset.
	const uint8_t DIRCLR_OFFSET = 0x04;
	// Data Direction Set Register offset.
	const uint8_t DIRSET_OFFSET = 0x08;
	// Data Direction Toggle Register offset.
	const uint8_t DIRTGL_OFFSET = 0x0c;
	// Data Output Value Register offset.
	const uint8_t OUT_OFFSET = 0x10;
	// Data Output Value Clear Register offset.
	const uint8_t OUTCLR_OFFSET = 0x14;
	// Data Output Value Set Register offset.
	const uint8_t OUTSET_OFFSET = 0x18;
	// Data Output Value Toggle Register offset.
	const uint8_t OUTTGL_OFFSET = 0x1c;
	// Data Input Value Register offset.
	const uint8_t IN_OFFSET = 0x20;
	// Control Register offset.
	const uint8_t CTRL_OFFSET = 0x24;
	// Write Configuration Register offset.
	const uint8_t WRCONFIG_OFFSET = 0x28;
	// Event Input Control Register offset.
	const uint8_t EVCTRL_OFFSET = 0x2c;
	// Peripheral Multiplexing n Register offsets.
	const uint8_t PMUX0_OFFSET = 0x30;
	const uint8_t PMUX1_OFFSET = 0x31;
	const uint8_t PMUX2_OFFSET = 0x32;
	const uint8_t PMUX3_OFFSET = 0x33;
	const uint8_t PMUX4_OFFSET = 0x34;
	const uint8_t PMUX5_OFFSET = 0x35;
	const uint8_t PMUX6_OFFSET = 0x36;
	const uint8_t PMUX7_OFFSET = 0x37;
	const uint8_t PMUX8_OFFSET = 0x38;
	const uint8_t PMUX9_OFFSET = 0x39;
	const uint8_t PMUX10_OFFSET = 0x3a;
	const uint8_t PMUX11_OFFSET = 0x3b;
	const uint8_t PMUX12_OFFSET = 0x3c;
	const uint8_t PMUX13_OFFSET = 0x3d;
	const uint8_t PMUX14_OFFSET = 0x3e;
	const uint8_t PMUX15_OFFSET = 0x3f;
	// Pin Configuration Register offsets.
	const uint8_t PINCFG0_OFFSET = 0x40;
	const uint8_t PINCFG1_OFFSET = 0x41;
	const uint8_t PINCFG2_OFFSET = 0x42;
	const uint8_t PINCFG3_OFFSET = 0x43;
	const uint8_t PINCFG4_OFFSET = 0x44;
	const uint8_t PINCFG5_OFFSET = 0x45;
	const uint8_t PINCFG6_OFFSET = 0x46;
	const uint8_t PINCFG7_OFFSET = 0x47;
	const uint8_t PINCFG8_OFFSET = 0x48;
	const uint8_t PINCFG9_OFFSET = 0x49;
	const uint8_t PINCFG10_OFFSET = 0x4a;
	const uint8_t PINCFG11_OFFSET = 0x4b;
	const uint8_t PINCFG12_OFFSET = 0x4c;
	const uint8_t PINCFG13_OFFSET = 0x4d;
	const uint8_t PINCFG14_OFFSET = 0x4e;
	const uint8_t PINCFG15_OFFSET = 0x4f;
	const uint8_t PINCFG16_OFFSET = 0x50;
	const uint8_t PINCFG17_OFFSET = 0x51;
	const uint8_t PINCFG18_OFFSET = 0x52;
	const uint8_t PINCFG19_OFFSET = 0x53;
	const uint8_t PINCFG20_OFFSET = 0x54;
	const uint8_t PINCFG21_OFFSET = 0x55;
	const uint8_t PINCFG22_OFFSET = 0x56;
	const uint8_t PINCFG23_OFFSET = 0x57;
	const uint8_t PINCFG24_OFFSET = 0x58;
	const uint8_t PINCFG25_OFFSET = 0x59;
	const uint8_t PINCFG26_OFFSET = 0x5a;
	const uint8_t PINCFG27_OFFSET = 0x5b;
	const uint8_t PINCFG28_OFFSET = 0x5c;
	const uint8_t PINCFG29_OFFSET = 0x5d;
	const uint8_t PINCFG30_OFFSET = 0x5e;
	const uint8_t PINCFG31_OFFSET = 0x5f;
}

// ****************************************
// Register Bits.
// ****************************************
namespace PORT_BITS {
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
// Data Direction Register.
// ****************************************
namespace PORT_A {
	rw_sfr32 DIR = __sfr32(PORT::PORT_A_BASE, PORT::DIR_OFFSET);
}
namespace PORT_B {
	rw_sfr32 DIR = __sfr32(PORT::PORT_B_BASE, PORT::DIR_OFFSET);
}

// ****************************************
// Data Direction Clear Register.
// ****************************************
namespace PORT_A {
	rw_sfr32 DIRCLR = __sfr32(PORT::PORT_A_BASE, PORT::DIRCLR_OFFSET);
}
namespace PORT_B {
	rw_sfr32 DIRCLR = __sfr32(PORT::PORT_B_BASE, PORT::DIRCLR_OFFSET);
}

// ****************************************
// Data Direction Set Register.
// ****************************************
namespace PORT_A {
	rw_sfr32 DIRSET = __sfr32(PORT::PORT_A_BASE, PORT::DIRSET_OFFSET);
}
namespace PORT_B {
	rw_sfr32 DIRSET = __sfr32(PORT::PORT_B_BASE, PORT::DIRSET_OFFSET);
}

// ****************************************
// Data Direction Toggle Register.
// ****************************************
namespace PORT_A {
	rw_sfr32 DIRTGL = __sfr32(PORT::PORT_A_BASE, PORT::DIRTGL_OFFSET);
}
namespace PORT_B {
	rw_sfr32 DIRTGL = __sfr32(PORT::PORT_B_BASE, PORT::DIRTGL_OFFSET);
}

// ****************************************
// Data Output Value Register.
// ****************************************
namespace PORT_A {
	rw_sfr32 OUT = __sfr32(PORT::PORT_A_BASE, PORT::OUT_OFFSET);
}
namespace PORT_B {
	rw_sfr32 OUT = __sfr32(PORT::PORT_B_BASE, PORT::OUT_OFFSET);
}

// ****************************************
// Data Output Value Clear Register.
// ****************************************
namespace PORT_A {
	rw_sfr32 OUTCLR = __sfr32(PORT::PORT_A_BASE, PORT::OUTCLR_OFFSET);
}
namespace PORT_B {
	rw_sfr32 OUTCLR = __sfr32(PORT::PORT_B_BASE, PORT::OUTCLR_OFFSET);
}

// ****************************************
// Data Output Value Set Register.
// ****************************************
namespace PORT_A {
	rw_sfr32 OUTSET = __sfr32(PORT::PORT_A_BASE, PORT::OUTSET_OFFSET);
}
namespace PORT_B {
	rw_sfr32 OUTSET = __sfr32(PORT::PORT_B_BASE, PORT::OUTSET_OFFSET);
}

// ****************************************
// Data Output Value Toggle Register.
// ****************************************
namespace PORT_A {
	rw_sfr32 OUTTGL = __sfr32(PORT::PORT_A_BASE, PORT::OUTTGL_OFFSET);
}
namespace PORT_B {
	rw_sfr32 OUTTGL = __sfr32(PORT::PORT_B_BASE, PORT::OUTTGL_OFFSET);
}

// ****************************************
// Data Input Value Register.
// ****************************************
namespace PORT_A {
	rw_sfr32 IN = __sfr32(PORT::PORT_A_BASE, PORT::IN_OFFSET);
}
namespace PORT_B {
	rw_sfr32 IN = __sfr32(PORT::PORT_B_BASE, PORT::IN_OFFSET);
}

// ****************************************
// Control Register.
// ****************************************
namespace PORT_A {
	rw_sfr32 CTRL = __sfr32(PORT::PORT_A_BASE, PORT::CTRL_OFFSET);
}
namespace PORT_B {
	rw_sfr32 CTRL = __sfr32(PORT::PORT_B_BASE, PORT::CTRL_OFFSET);
}

// ****************************************
// Write Configuration Register.
// ****************************************
namespace PORT_A {
	rw_sfr32 WRCONFIG = __sfr32(PORT::PORT_A_BASE, PORT::WRCONFIG_OFFSET);
}
namespace PORT_B {
	rw_sfr32 WRCONFIG = __sfr32(PORT::PORT_B_BASE, PORT::WRCONFIG_OFFSET);
}

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
namespace PORT_A {
	rw_sfr32 EVCTRL = __sfr32(PORT::PORT_A_BASE, PORT::EVCTRL_OFFSET);
}
namespace PORT_B {
	rw_sfr32 EVCTRL = __sfr32(PORT::PORT_B_BASE, PORT::EVCTRL_OFFSET);
}

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
	rw_sfr8 PMUX0 = __sfr8(PORT::PORT_A_BASE, PORT::PMUX0_OFFSET);
	rw_sfr8 PMUX1 = __sfr8(PORT::PORT_A_BASE, PORT::PMUX1_OFFSET);
	rw_sfr8 PMUX2 = __sfr8(PORT::PORT_A_BASE, PORT::PMUX2_OFFSET);
	rw_sfr8 PMUX3 = __sfr8(PORT::PORT_A_BASE, PORT::PMUX3_OFFSET);
	rw_sfr8 PMUX4 = __sfr8(PORT::PORT_A_BASE, PORT::PMUX4_OFFSET);
	rw_sfr8 PMUX5 = __sfr8(PORT::PORT_A_BASE, PORT::PMUX5_OFFSET);
	rw_sfr8 PMUX6 = __sfr8(PORT::PORT_A_BASE, PORT::PMUX6_OFFSET);
	rw_sfr8 PMUX7 = __sfr8(PORT::PORT_A_BASE, PORT::PMUX7_OFFSET);
	rw_sfr8 PMUX8 = __sfr8(PORT::PORT_A_BASE, PORT::PMUX8_OFFSET);
	rw_sfr8 PMUX9 = __sfr8(PORT::PORT_A_BASE, PORT::PMUX9_OFFSET);
	rw_sfr8 PMUX10 = __sfr8(PORT::PORT_A_BASE, PORT::PMUX10_OFFSET);
	rw_sfr8 PMUX11 = __sfr8(PORT::PORT_A_BASE, PORT::PMUX11_OFFSET);
	rw_sfr8 PMUX12 = __sfr8(PORT::PORT_A_BASE, PORT::PMUX12_OFFSET);
	rw_sfr8 PMUX13 = __sfr8(PORT::PORT_A_BASE, PORT::PMUX13_OFFSET);
	rw_sfr8 PMUX14 = __sfr8(PORT::PORT_A_BASE, PORT::PMUX14_OFFSET);
	rw_sfr8 PMUX15 = __sfr8(PORT::PORT_A_BASE, PORT::PMUX15_OFFSET);
}
namespace PORT_B {
	rw_sfr8 PMUX0 = __sfr8(PORT::PORT_B_BASE, PORT::PMUX0_OFFSET);
	rw_sfr8 PMUX1 = __sfr8(PORT::PORT_B_BASE, PORT::PMUX1_OFFSET);
	rw_sfr8 PMUX2 = __sfr8(PORT::PORT_B_BASE, PORT::PMUX2_OFFSET);
	rw_sfr8 PMUX3 = __sfr8(PORT::PORT_B_BASE, PORT::PMUX3_OFFSET);
	rw_sfr8 PMUX4 = __sfr8(PORT::PORT_B_BASE, PORT::PMUX4_OFFSET);
	rw_sfr8 PMUX5 = __sfr8(PORT::PORT_B_BASE, PORT::PMUX5_OFFSET);
	rw_sfr8 PMUX6 = __sfr8(PORT::PORT_B_BASE, PORT::PMUX6_OFFSET);
	rw_sfr8 PMUX7 = __sfr8(PORT::PORT_B_BASE, PORT::PMUX7_OFFSET);
	rw_sfr8 PMUX8 = __sfr8(PORT::PORT_B_BASE, PORT::PMUX8_OFFSET);
	rw_sfr8 PMUX9 = __sfr8(PORT::PORT_B_BASE, PORT::PMUX9_OFFSET);
	rw_sfr8 PMUX10 = __sfr8(PORT::PORT_B_BASE, PORT::PMUX10_OFFSET);
	rw_sfr8 PMUX11 = __sfr8(PORT::PORT_B_BASE, PORT::PMUX11_OFFSET);
	rw_sfr8 PMUX12 = __sfr8(PORT::PORT_B_BASE, PORT::PMUX12_OFFSET);
	rw_sfr8 PMUX13 = __sfr8(PORT::PORT_B_BASE, PORT::PMUX13_OFFSET);
	rw_sfr8 PMUX14 = __sfr8(PORT::PORT_B_BASE, PORT::PMUX14_OFFSET);
	rw_sfr8 PMUX15 = __sfr8(PORT::PORT_B_BASE, PORT::PMUX15_OFFSET);
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
	rw_sfr8 PINCFG0 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG0_OFFSET);
	rw_sfr8 PINCFG1 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG1_OFFSET);
	rw_sfr8 PINCFG2 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG2_OFFSET);
	rw_sfr8 PINCFG3 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG3_OFFSET);
	rw_sfr8 PINCFG4 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG4_OFFSET);
	rw_sfr8 PINCFG5 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG5_OFFSET);
	rw_sfr8 PINCFG6 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG6_OFFSET);
	rw_sfr8 PINCFG7 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG7_OFFSET);
	rw_sfr8 PINCFG8 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG8_OFFSET);
	rw_sfr8 PINCFG9 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG9_OFFSET);
	rw_sfr8 PINCFG10 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG10_OFFSET);
	rw_sfr8 PINCFG11 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG11_OFFSET);
	rw_sfr8 PINCFG12 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG12_OFFSET);
	rw_sfr8 PINCFG13 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG13_OFFSET);
	rw_sfr8 PINCFG14 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG14_OFFSET);
	rw_sfr8 PINCFG15 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG15_OFFSET);
	rw_sfr8 PINCFG16 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG16_OFFSET);
	rw_sfr8 PINCFG17 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG17_OFFSET);
	rw_sfr8 PINCFG18 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG18_OFFSET);
	rw_sfr8 PINCFG19 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG19_OFFSET);
	rw_sfr8 PINCFG20 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG20_OFFSET);
	rw_sfr8 PINCFG21 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG21_OFFSET);
	rw_sfr8 PINCFG22 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG22_OFFSET);
	rw_sfr8 PINCFG23 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG23_OFFSET);
	rw_sfr8 PINCFG24 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG24_OFFSET);
	rw_sfr8 PINCFG25 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG25_OFFSET);
	rw_sfr8 PINCFG26 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG26_OFFSET);
	rw_sfr8 PINCFG27 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG27_OFFSET);
	rw_sfr8 PINCFG28 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG28_OFFSET);
	rw_sfr8 PINCFG29 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG29_OFFSET);
	rw_sfr8 PINCFG30 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG30_OFFSET);
	rw_sfr8 PINCFG31 = __sfr8(PORT::PORT_A_BASE, PORT::PINCFG31_OFFSET);
}
namespace PORT_B {
	rw_sfr8 PINCFG0 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG0_OFFSET);
	rw_sfr8 PINCFG1 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG1_OFFSET);
	rw_sfr8 PINCFG2 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG2_OFFSET);
	rw_sfr8 PINCFG3 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG3_OFFSET);
	rw_sfr8 PINCFG4 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG4_OFFSET);
	rw_sfr8 PINCFG5 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG5_OFFSET);
	rw_sfr8 PINCFG6 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG6_OFFSET);
	rw_sfr8 PINCFG7 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG7_OFFSET);
	rw_sfr8 PINCFG8 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG8_OFFSET);
	rw_sfr8 PINCFG9 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG9_OFFSET);
	rw_sfr8 PINCFG10 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG10_OFFSET);
	rw_sfr8 PINCFG11 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG11_OFFSET);
	rw_sfr8 PINCFG12 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG12_OFFSET);
	rw_sfr8 PINCFG13 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG13_OFFSET);
	rw_sfr8 PINCFG14 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG14_OFFSET);
	rw_sfr8 PINCFG15 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG15_OFFSET);
	rw_sfr8 PINCFG16 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG16_OFFSET);
	rw_sfr8 PINCFG17 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG17_OFFSET);
	rw_sfr8 PINCFG18 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG18_OFFSET);
	rw_sfr8 PINCFG19 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG19_OFFSET);
	rw_sfr8 PINCFG20 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG20_OFFSET);
	rw_sfr8 PINCFG21 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG21_OFFSET);
	rw_sfr8 PINCFG22 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG22_OFFSET);
	rw_sfr8 PINCFG23 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG23_OFFSET);
	rw_sfr8 PINCFG24 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG24_OFFSET);
	rw_sfr8 PINCFG25 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG25_OFFSET);
	rw_sfr8 PINCFG26 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG26_OFFSET);
	rw_sfr8 PINCFG27 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG27_OFFSET);
	rw_sfr8 PINCFG28 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG28_OFFSET);
	rw_sfr8 PINCFG29 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG29_OFFSET);
	rw_sfr8 PINCFG30 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG30_OFFSET);
	rw_sfr8 PINCFG31 = __sfr8(PORT::PORT_B_BASE, PORT::PINCFG31_OFFSET);
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

#endif	// PORT_HPP_
