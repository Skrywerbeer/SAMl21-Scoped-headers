// ****************************************
// File: oscctrl.hpp
// Written by: Johan Grobler.
// Started: 1/9/2017
// Updated: 2/9/2017
// ****************************************
// Special function registers of the
// Oscillator Controller of the ATSAML21
// ****************************************

#ifndef OSCCTRL_HPP_
#define OSCCTRL_HPP_

#include "sfr.hpp"

static const uint32_t OSCCTRL_BASE_ADDR = 0x40000c00;

// ****************************************
// Interrupt Enable Clear Register.
// ****************************************
namespace OSCCTRL {
	rw_sfr32 INTENCLR = __sfr32(OSCCTRL_BASE_ADDR, 0x00);
}

// ****************************************
// Interrupt Enable Clear Bits.
// ****************************************
namespace OSCCTRL_INTENCLR {
	// DPLL Loop Divider Ratio Update Complete Interrupt Disable.
	const uint32_t DPLLLDRTO = (1 << 19);
	// DPLL Lock Timeout Interrupt Disable.
	const uint32_t DPLLLTO = (1 << 18);
	// DPLL Lock Fall Interrupt Disable.
	const uint32_t DPLLLCKF = (1 << 17);
	// DPLL Lock Rise Interrupt Disable.
	const uint32_t DPLLLCKR = (1 << 16);
	// DFLL Reference Clock Stopped Interrupt Disable.
	const uint32_t DPLLRCS = (1 << 12);
	// DFLL Lock Coarse Interrupt Disable.
	const uint32_t DFLLLCKC = (1 << 11);
	// DFLL Lock Fine Interrupt Disable.
	const uint32_t DFLLLCKF = (1 << 10);
	// DFLL Out Of Bounds Interrupt Disable.
	const uint32_t DFLLOOB = (1 << 9);
	// DFLL Ready Interrupt Disable.
	const uint32_t DFLLRDY = (1 << 8);
	// OSC16M Ready Interrupt Disable.
	const uint32_t OSC16MRDY = (1 << 4);
	// XOSC Ready Interrupt Disable.
	const uint32_t XOCRDY = (1 << 0);
}

// ****************************************
// Interrupt Enable Set Register.
// ****************************************
namespace OSCCTRL {
	rw_sfr32 INTENSET = __sfr32(OSCCTRL_BASE_ADDR, 0x04);
}

// ****************************************
// Interrupt Enable Set Bits.
// ****************************************
namespace OSCCTRL_INTENSET {
	// DPLL Loop Divider Ratio Update Complete Interrupt Enable.
	const uint32_t DPLLDRTO = (1 << 19);
	// DPLL Lock Timeout Interrupt Enable.
	const uint32_t DPLLLTO = (1 << 18);
	// DPLL Lock Fall Interrupt Enable.
	const uint32_t DPLLCKF = (1 << 17);
	// DPLL Lock Rise Interrupt Enable.
	const uint32_t DPLLCKR = (1 << 16);
	// DFLL Reference Clock Stopped Interrupt Enable.
	const uint32_t DFLLRCS = (1 << 12);
	// DFLL Lock Coarse Interrupt Enable.
	const uint32_t DFLLCKC = (1 << 11);
	// DFLL Lock Fine Interrupt Enable.
	const uint32_t DFLLLCKF = (1 << 10);
	// DFLL Out Of Bounds Interrupt Enable.
	const uint32_t DFLLOOB = (1 << 9);
	// DFLL Ready Interrupt Enable.
	const uint32_t DFLLRDY = (1 << 8);
	// OSC16M Ready Interrupt Enable.
	const uint32_t OSC16MRDY = (1 << 4);
	// XOSC Ready Interrupt Enable.
	const uint32_t XOSCRDY = (1 << 0);
}

// ****************************************
// Interrupt Flag Status and Clear Register.
// ****************************************
namespace OSCCTRL {
	rw_sfr32 INTFLAG = __sfr32(OSCCTRL_BASE_ADDR, 0x08);
}

// ****************************************
// Interrupt Flag Status and Clear Bits.
// ****************************************
namespace OSCCTRL_INTFLAG {
	// DPLL Loop Divider Ratio Update Complete Interrupt Flag Clear.
	const uint32_t DPLLLDRTO = (1 << 19);
	// DPLL Lock Timeout Interrupt Flag Clear.
	const uint32_t DPLLLTO = (1 << 18);
	// DPLL Lock Fall Interrupt Flag Clear.
	const uint32_t DPLLCKF = (1 << 17);
	// DPLL Lock Rise Interrupt Flag Clear.
	const uint32_t DPLLCKR = (1 << 16);
	// DFLL Reference Clock Stopped Interrupt Flag Clear.
	const uint32_t DFLLRCS = (1 << 12);
	// DFLL Lock Coarse Interrupt Flag Clear.
	const uint32_t DFLLCKC = (1 << 11);
	// DFLL Lock Fine Interrupt Flag Clear.
	const uint32_t DFLLLCKF = (1 << 10);
	// DFLL Out Of Bounds Interrupt Flag Clear.
	const uint32_t DFLLOOB = (1 << 9);
	// DFLL Ready Interrupt Flag Clear.
	const uint32_t DFLLRDY = (1 << 8);
	// OSC16M Ready Interrupt Flag Clear.
	const uint32_t OSC16MRDY = (1 << 4);
	// XOSC Ready Interrupt Flag Clear.
	const uint32_t XOSCRDY = (1 << 0);
}

// ****************************************
// Status Register.
// ****************************************
namespace OSCCTRL {
	ro_sfr32 STATUS = __sfr32(OSCCTRL_BASE_ADDR, 0x0c);
}

// ****************************************
// Status Bits.
// ****************************************
namespace OSCCTRL_STATUS {
	// DPLL Loop Divider Ratio Update Complete.
	const uint32_t DPLLDRTO = (1 << 19);
	// DPLL Lock Timeout.
	const uint32_t DPLLLTO = (1 << 18);
	// DPLL Lock Fall.
	const uint32_t DPLLCKF = (1 << 17);
	// DPLL Lock Rise.
	const uint32_t DPLLCKR = (1 << 16);
	// DFLL Reference Clock Stopped.
	const uint32_t DFLLRCS = (1 << 12);
	// DFLL Lock Coarse.
	const uint32_t DFLLCKC = (1 << 11);
	// DFLL Lock Fine.
	const uint32_t DFLLLCKF = (1 << 10);
	// DFLL Out Of Bounds.
	const uint32_t DFLLOOB = (1 << 9);
	// DFLL Ready.
	const uint32_t DFLLRDY = (1 << 8);
	// OSC16M Ready.
	const uint32_t OSC16MRDY = (1 << 4);
	// XOSC Ready.
	const uint32_t XOSCRDY = (1 << 0);
}

// ****************************************
// External Multipurpose Crystal
// Oscillator Control Register.
// ****************************************
namespace OSCCTRL {
	rw_sfr16 XOSCCTRL = __sfr16(OSCCTRL_BASE_ADDR, 0x10);
}

// ****************************************
// External Multipurpose Crystal
// Oscillator Control Bits.
// ****************************************
namespace OSCCTRL_XOSCCTRL {
	// Start-Up Time.
	const uint16_t STARTUP3 = (1 << 15);
	const uint16_t STARTUP2 = (1 << 14);
	const uint16_t STARTUP1 = (1 << 13);
	const uint16_t STARTUP0 = (1 << 12);
	// Automatic Amplitude Gain Control.
	const uint16_t AMPGC = (1 << 11);
	// Oscillator Gain.
	const uint16_t GAIN2 = (1 << 10);
	const uint16_t GAIN1 = (1 << 9);
	const uint16_t GAIN0 = (1 << 8);
	// On Demand Control.
	const uint16_t ONDEMAND = (1 << 7);
	// Run in Standby.
	const uint16_t RUNSTDBY = (1 << 6);
	// Crystal Oscillator Enable.
	const uint16_t XTALEN = (1 << 2);
	// Oscillator Enable.
	const uint16_t ENABLE = (1 << 1);
}

// ****************************************
// 16MHz Internal Oscillator Control Register.
// ****************************************
namespace OSCCTRL {
	rw_sfr8 OSC16MCTRL = __sfr8(OSCCTRL_BASE_ADDR, 0x14);
}

// ****************************************
// 16MHz Internal Oscillator Control Bits.
// ****************************************
namespace OSCCTRL_OSC16MCTRL {
	// On Demand Control.
	const uint8_t ONDEMAND = (1 << 7);
	// Run in Standby.
	const uint8_t RUNSTDBY = (1 << 6);
	// Oscillator Frequency Selection.
	const uint8_t FSEL1 = (1 << 3);	// 0x00 -> 4MHz, 0x01 -> 8MHz
	const uint8_t FSEL0 = (1 << 2);	// 0x10 -> 12MHz, 0x11 -> 16MHz
	// Oscillator Enable.
	const uint8_t ENABLE = (1 << 1);
}

// ****************************************
// DFLL48M Control Register.
// ****************************************
namespace OSCCTRL {
	rw_sfr16 DFLLCTRL = __sfr16(OSCCTRL_BASE_ADDR, 0x18);
}

// ****************************************
// DFLL48M Control Bits.
// ****************************************
namespace OSCCTRL_DFLLCTRL {
	// Wait Lock.
	const uint16_t WAITLOCK = (1 << 11);
	// Bypass Coarse Lock.
	const uint16_t BPLCKC = (1 << 10);
	// Quick Lock Disable.
	const uint16_t QLDIS = (1 << 9);
	// Chill Cycle Disable.
	const uint16_t CCDIS = (1 << 8);
	// On Demand Control.
	const uint16_t ONDEMAND = (1 << 7);
	// Run in Standby.
	const uint16_t RUNSTDBY = (1 << 6);
	// USB Clock Recovery Mode.
	const uint16_t USBCRM = (1 << 5);
	// Lose Lock After Wake.
	const uint16_t LLAW = (1 << 4);
	// Stable DFLL Frequency.
	const uint16_t STABLE = (1 << 3);
	// Operating Mode Selection.
	const uint16_t MODE = (1 << 2);
	// DFLL Enable.
	const uint16_t ENABLE = (1 << 1);
	
}

// ****************************************
// DFLL48M Value Register.
// ****************************************
namespace OSCCTRL {
	rw_sfr16 DFLLVAL = __sfr16(OSCCTRL_BASE_ADDR, 0x1c);
}

// ****************************************
// DFLL48M Value Bits.
// ****************************************
namespace OSCCTRL_DFLLVAL {
	// Multiplication Ratio Difference.
	const uint32_t DIFF = 0xffff0000;
	const uint32_t DIFF15 = (1 << 31);
	const uint32_t DIFF14 = (1 << 30);
	const uint32_t DIFF13 = (1 << 29);
	const uint32_t DIFF12 = (1 << 28);
	const uint32_t DIFF11 = (1 << 27);
	const uint32_t DIFF10 = (1 << 26);
	const uint32_t DIFF9 = (1 << 25);
	const uint32_t DIFF8 = (1 << 24);
	const uint32_t DIFF7 = (1 << 23);
	const uint32_t DIFF6 = (1 << 22);
	const uint32_t DIFF5 = (1 << 21);
	const uint32_t DIFF4 = (1 << 20);
	const uint32_t DIFF3 = (1 << 19);
	const uint32_t DIFF2 = (1 << 18);
	const uint32_t DIFF1 = (1 << 17);
	const uint32_t DIFF0 = (1 << 16);
	// Coarse Value.
	const uint32_t COARSE = 0xfc00;
	const uint32_t COARSE5 = (1 << 15);
	const uint32_t COARSE4 = (1 << 14);
	const uint32_t COARSE3 = (1 << 13);
	const uint32_t COARSE2 = (1 << 12);
	const uint32_t COARSE1 = (1 << 11);
	const uint32_t COARSE0 = (1 << 10);
	// Fine Value
	const uint32_t FINE = 0x3ff;
	const uint32_t FINE9 = (1 << 9);
	const uint32_t FINE8 = (1 << 8);
	const uint32_t FINE7 = (1 << 7);
	const uint32_t FINE6 = (1 << 6);
	const uint32_t FINE5 = (1 << 5);
	const uint32_t FINE4 = (1 << 4);
	const uint32_t FINE3 = (1 << 3);
	const uint32_t FINE2 = (1 << 2);
	const uint32_t FINE1 = (1 << 1);
	const uint32_t FINE0 = (1 << 0);
}

// ****************************************
// DFLL48M Multiplier Register.
// ****************************************
namespace OSCCTRL {
	rw_sfr32 DFLLMUL = __sfr32(OSCCTRL_BASE_ADDR, 0x20);
}

// ****************************************
// DFLL48M Multiplier Bits.
// ****************************************
namespace OSCCTRL_DFLLMUL {
	// Coarse Maximum Step.
	const uint32_t CSTEP = 0xfc000000;
	const uint32_t CSTEP5 = (1 << 31);
	const uint32_t CSTEP4 = (1 << 30);
	const uint32_t CSTEP3 = (1 << 29);
	const uint32_t CSTEP2 = (1 << 28);
	const uint32_t CSTEP1 = (1 << 27);
	const uint32_t CSTEP0 = (1 << 26);
	// Fine Maximum Step.
	const uint32_t FSTEP = 0x3ff0000;
	const uint32_t FSTEP9 = (1 << 25);
	const uint32_t FSTEP8 = (1 << 24);
	const uint32_t FSTEP7 = (1 << 23);
	const uint32_t FSTEP6 = (1 << 22);
	const uint32_t FSTEP5 = (1 << 21);
	const uint32_t FSTEP4 = (1 << 20);
	const uint32_t FSTEP3 = (1 << 19);
	const uint32_t FSTEP2 = (1 << 18);
	const uint32_t FSTEP1 = (1 << 17);
	const uint32_t FSTEP0 = (1 << 16);
	// DFLL Multiply Factor.
	const uint32_t MUL = 0xffff;
	const uint32_t MUL15 = (1 << 15);
	const uint32_t MUL14 = (1 << 14);
	const uint32_t MUL13 = (1 << 13);
	const uint32_t MUL12 = (1 << 12);
	const uint32_t MUL11 = (1 << 11);
	const uint32_t MUL10 = (1 << 10);
	const uint32_t MUL9 = (1 << 9);
	const uint32_t MUL8 = (1 << 8);
	const uint32_t MUL7 = (1 << 7);
	const uint32_t MUL6 = (1 << 6);
	const uint32_t MUL5 = (1 << 5);
	const uint32_t MUL4 = (1 << 4);
	const uint32_t MUL3 = (1 << 3);
	const uint32_t MUL2 = (1 << 2);
	const uint32_t MUL1 = (1 << 1);
	const uint32_t MUL0 = (1 << 0);
}

// ****************************************
// DFLL48M Synchronization Register.
// ****************************************
namespace OSCCTRL {
	rw_sfr8 DFLLSYNC = __sfr8(OSCCTRL_BASE_ADDR, 0x24);
}

// ****************************************
// DFLL48M Synchronization Bits.
// ****************************************
namespace OSCCTRL_DFLLSYNC {
	// Read Request.
	const uint8_t READREQ = (1 << 7);
}

// ****************************************
// DPLL Control A Register.
// ****************************************
namespace OSCCTRL {
	rw_sfr8 DPLLCTRLA = __sfr8(OSCCTRL_BASE_ADDR, 0x28);
}

// ****************************************
// DPLL Control A Bits.
// ****************************************
namespace OSCCTRL_DPLLCTRLA {
	// On Demand Clock Activation.
	const uint8_t ONDEMAND = (1 << 7);
	// Run in Standby.
	const uint8_t RUNSTDBY = (1 << 6);
	// DPLL Enable.
	const uint8_t ENABLE = (1 << 1);
}

// ****************************************
// DPLL Ratio Control Register.
// ****************************************
namespace OSCCTRL {
	rw_sfr32 DPLLRATIO = __sfr32(OSCCTRL_BASE_ADDR, 0x2c);
}

// ****************************************
// DPLL Ratio Control Bits.
// ****************************************
namespace OSCCTRL_DPLLRATIO {
	// Loop Divider Ratio Fractional Part.
	const uint32_t LDRFRAC = 0xf0000;
	const uint32_t LDRFRAC3 = (1 << 19);
	const uint32_t LDRFRAC2 = (1 << 18);
	const uint32_t LDRFRAC1 = (1 << 17);
	const uint32_t LDRFRAC0 = (1 << 16);
	// Loop Divider Ratio.
	const uint32_t LDR = 0xfff;
	const uint32_t LDR11 = (1 << 11);
	const uint32_t LDR10 = (1 << 10);
	const uint32_t LDR9 = (1 << 9);
	const uint32_t LDR8 = (1 << 8);
	const uint32_t LDR7 = (1 << 7);
	const uint32_t LDR6 = (1 << 6);
	const uint32_t LDR5 = (1 << 5);
	const uint32_t LDR4 = (1 << 4);
	const uint32_t LDR3 = (1 << 3);
	const uint32_t LDR2 = (1 << 2);
	const uint32_t LDR1 = (1 << 1);
	const uint32_t LDR0 = (1 << 0);
}

// ****************************************
// DPLL Control B Register.
// ****************************************
namespace OSCCTRL {
	rw_sfr32 DPLLCTRLB = __sfr32(OSCCTRL_BASE_ADDR, 0x30);
}

// ****************************************
// DPLL Control B Bits.
// ****************************************
namespace OSCCTRL_DPLLCTRLB {
	// Clock Divider.
	const uint32_t DIV = 0x7ff0000;
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
	// Lock Bypass.
	const uint32_t LBYPASS = (1 << 12);
	// Lock Time.
	const uint32_t LTIME = 0x700;
	const uint32_t LTIME2 = (1 << 10);
	const uint32_t LTIME1 = (1 << 9);
	const uint32_t LTIME0 = (1 << 8);
	// Reference Clock Selection.
	const uint32_t REFCLK1 = (1 << 5);
	const uint32_t REFCLK0 = (1 << 4);
	// Wake Up Fast.
	const uint32_t WUF = (1 << 3);
	// Low-Power Enable.
	const uint32_t LPEN = (1 << 2);
	// Proportional Integral Filter Selection.
	const uint32_t FILTER1 = (1 << 1);
	const uint32_t FILTER0 = (1 << 0);
}

// ****************************************
// DPLL Prescaler Register.
// ****************************************
namespace OSCCTRL {
	rw_sfr8 DPLLPRESC = __sfr8(OSCCTRL_BASE_ADDR, 0x34);
}

// ****************************************
// DPLL Prescaler Bits.
// ****************************************
namespace OSCCTRL_DPLLPRESC {
	const uint8_t PRESC1 = (1 << 1);
	const uint8_t PRESC0 = (1 << 0);
}

// ****************************************
// DPLL Synchronization Busy Register.
// ****************************************
namespace OSCCTRL {
	ro_sfr8 DPLLSYNCBUSY = __sfr8(OSCCTRL_BASE_ADDR, 0x38);
}

// ****************************************
// DPLL Synchronization Busy Bits.
// ****************************************
namespace OSCCTRL_DPLLSYNCBUSY {
	// DPLL Prescaler Synchronization Status.
	const uint8_t DPLLPRESC = (1 << 3);
	// DPLL Loop Divider Ratio Synchronization Status.
	const uint8_t DPLLRATIO = (1 << 2);
	// DPLL Enable Synchronization Status.
	const uint8_t ENABLE = (1 << 1);
}

// ****************************************
// DPLL Status Register.
// ****************************************
namespace OSCCTRL {
	ro_sfr8 DPLLSTATUS = __sfr8(OSCCTRL_BASE_ADDR, 0x3c);
}

// ****************************************
// DPLL Status Bits.
// ****************************************
namespace OSCCTRL_DPLLSTATUS {
	// DPLL Clock Ready.
	const uint8_t CLKRDY = (1 << 1);
	// DPLL Lock.
	const uint8_t LOCK = (1 << 0);
}

#endif
