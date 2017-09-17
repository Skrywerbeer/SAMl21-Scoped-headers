// ****************************************
// File: osc32kctrl.hpp
// Written by: Johan Grobler.
// Started: 4/9/2017
// Updated: 17/9/2017
// ****************************************
// 32KHz Oscillator Controller special
// function registers of the ATSAML21J18.
// ****************************************

#ifndef OSC32KCTRL_HPP_
#define OSC32KCTRL_HPP_

#include "sfr.hpp"


// ****************************************
// Base addresses and offsets.
// ****************************************
namespace OSC32KCTRL {
	// Base address.
	const uint32_t OSC32KCTRL_BASE = 0x40001000;
	// Interrupt Enable Clear Register offset.
	const uint8_t INTENCLR_OFFSET = 0x00;
	// Interrupt Enable Set Register offset.
	const uint8_t INTENSET_OFFSET = 0x04;
	// Interrupt Flag Status and Clear Register offset.
	const uint8_t INTFLAG_OFFSET = 0x08;
	// Status Register offset.
	const uint8_t STATUS_OFFSET = 0x0c;
	// RTC Clock Selection Register offset.
	const uint8_t RTCCTRL_OFFSET = 0x10;
	// 32KHz External Crystal Oscillator Control Register offset.
	const uint8_t XOSC32K_OFFSET = 0x14;
	// 32KHz Internal Oscillator Control Register offset.
	const uint8_t OSC32K_OFFSET = 0x18;
	// 32KHz Ultra Low Power Internal Oscillator Control Register offset.
	const uint8_t OSCULP32K_OFFSET = 0x1c;
}
// ****************************************
// Interrupt Enable Clear Register.
// ****************************************
namespace OSC32KCTRL {
	rw_sfr32 INTENCLR = __sfr32(OSC32KCTRL::OSC32KCTRL_BASE, OSC32KCTRL::INTENCLR_OFFSET);
}

// ****************************************
// Interrupt Enable Clear Bits.
// ****************************************
namespace OSC32KCTRL_INTENCLR {
	// OSC32K Ready Interrupt Disable.
	const uint32_t OSC32KRDY = (1 << 1);
	// XOSC32K Ready Interrupt Disable.
	const uint32_t XOSC32KRDY = (1 << 0);
}

// ****************************************
// Interrupt Enable Set Register.
// ****************************************
namespace OSC32KCTRL {
	rw_sfr32 INTENSET = __sfr32(OSC32KCTRL::OSC32KCTRL_BASE, OSC32KCTRL::INTENSET_OFFSET);
}

// ****************************************
// Interrupt Enable Set Bits.
// ****************************************
namespace OSC32KCTRL_INTENSET {
	// OSC32K Ready Interrupt Enable.
	const uint32_t OSC32KRDY = (1 << 1);
	// XOSC32 Ready Interrupt Enable.
	const uint32_t XOSC32KRDY = (1 << 0);
}

// ****************************************
// Interrupt Flag Status and Clear Register.
// ****************************************
namespace OSC32KCTRL {
	rw_sfr32 INTFLAG = __sfr32(OSC32KCTRL::OSC32KCTRL_BASE, OSC32KCTRL::INTFLAG_OFFSET);
}

// ****************************************
// Interrupt Flag Status and Clear Bits.
// ****************************************
namespace OSC32KCTRL_INTFLAG {
	// OSC32K Ready Clear.
	const uint32_t OSC32KRDY = (1 << 1);
	// XOSC32K Ready Clear.
	const uint32_t XOSC32KRDY = (1 << 0);
}

// ****************************************
// Status Register.
// ****************************************
namespace OSC32KCTRL {
	ro_sfr32 STATUS = __sfr32(OSC32KCTRL::OSC32KCTRL_BASE, OSC32KCTRL::STATUS_OFFSET);
}

// ****************************************
// Status Bits.
// ****************************************
namespace OSC32KCTRL_STATUS {
	// OSC32K Ready.
	const uint32_t OSC32KRDY = (1 << 1);
	// XOSC32K Ready.
	const uint32_t XOSC32KRDY = (1 << 0);
}

// ****************************************
// RTC Clock Selection Control Register.
// ****************************************
namespace OSC32KCTRL {
	rw_sfr32 RTCCTRL = __sfr32(OSC32KCTRL::OSC32KCTRL_BASE, OSC32KCTRL::RTCCTRL_OFFSET);
}

// ****************************************
// RTC Clock Selection Control Bits.
// ****************************************
namespace OSC32KCTRL_RTCCTRL {
	// RTC Clock Source Selection.
	const uint32_t RTCSEL_MASK = 0x7;
	const uint8_t RTCSEL_SHIFT = 0;
	const uint32_t RTCSEL2 = (1 << 2);
	const uint32_t RTCSEL1 = (1 << 1);
	const uint32_t RTCSEL0 = (1 << 0);
}

// ****************************************
// 32KHz External Crystal Oscillator
// Control Register. (XOSC32K)
// ****************************************
namespace OSC32KCTRL {
	rw_sfr32 XOSC32K = __sfr32(OSC32KCTRL::OSC32KCTRL_BASE, OSC32KCTRL::XOSC32K_OFFSET);
}

// ****************************************
// 32KHz External Crystal Oscillator
// Control Bits. (XOSC32K)
// ****************************************
namespace OSC32KCTRL_XOSC32K {
	// Write Lock.
	const uint32_t WRTLOCK = (1 << 12);
	// Oscillator Start-Up Time.
	const uint32_t STARTUP_MASK = 0x700;
	const uint8_t STARTUP_SHIFT = 8;
	const uint32_t STARTUP2 = (1 << 10);
	const uint32_t STARTUP1 = (1 << 9);
	const uint32_t STARTUP0 = (1 << 8);
	// On Demand Control.
	const uint32_t ONDEMAND = (1 << 7);
	// Run in Standby.
	const uint32_t RUNSTDBY = (1 << 6);
	// 1KHz Output Enable.
	const uint32_t EN1K = (1 << 4);
	// 32KHz Output Enable.
	const uint32_t EN32K = (1 << 3);
	// Crystal Oscillator Enable.
	const uint32_t XTALEN = (1 << 2);
	// Oscillator Enable.
	const uint32_t ENABLE = (1 << 1);
}

// ****************************************
// 32KHz Internal Oscillator Control
// Register. (OSC32K)
// ****************************************
namespace OSC32KCTRL {
	rw_sfr32 OSC32K = __sfr32(OSC32KCTRL::OSC32KCTRL_BASE, OSC32KCTRL::OSC32K_OFFSET);
}

// ****************************************
// 32KHz Internal Oscillator Control
// Bits. (OSC32K)
// ****************************************
namespace OSC32KCTRL_OSC32K {
	// Oscillator Calibration.
	const uint32_t CALIB_MASK = 0x7f0000;
	const uint8_t CALIB_SHIFT = 16;
	const uint32_t CALIB6 = (1 << 22);
	const uint32_t CALIB5 = (1 << 21);
	const uint32_t CALIB4 = (1 << 20);
	const uint32_t CALIB3 = (1 << 19);
	const uint32_t CALIB2 = (1 << 18);
	const uint32_t CALIB1 = (1 << 17);
	const uint32_t CALIB0 = (1 << 16);
	// Write Lock.
	const uint32_t WRTLOCK = (1 << 12);
	// Oscillator Start-Up Time.
	const uint32_t STARTUP_MASK = 0x700;
	const uint8_t STARTUP_SHIFT = 8;
	const uint32_t STARTUP2 = (1 << 10);
	const uint32_t STARTUP1 = (1 << 9);
	const uint32_t STARTUP0 = (1 << 8);
	// On Demand Control.
	const uint32_t ONDEMAND = (1 << 7);
	// Run in Standby.
	const uint32_t RUNSTDBY = (1 << 6);
	// 1KHz Output Enable.
	const uint32_t EN1K = (1 << 3);
	// 32KHz Output Enable.
	const uint32_t EN32K = (1 << 2);
	// Oscillator Enable.
	const uint32_t ENABLE = (1 << 1);
}

// ****************************************
// 32KHz Ultra Low Power Internal
// Oscillator Control Register. (OSCULP32K)
// ****************************************
namespace OSC32KCTRL {
	rw_sfr32 OSCULP32K = __sfr32(OSC32KCTRL::OSC32KCTRL_BASE, OSC32KCTRL::OSCULP32K_OFFSET);
}

// ****************************************
// 32KHz Ultra Low Power Internal
// Oscillator Control Bits. (OSCULP32K)
// ****************************************
namespace OSC32KCTRL_OSCULP32K {
	// Write Lock.
	const uint32_t WRTLOCK = (1 << 15);
	// Oscillator Calibration.
	const uint32_t CALIB_MASK = 0x1f00;
	const uint8_t CALIB_SHIFT = 8;
	const uint32_t CALIB4 = (1 << 12);
	const uint32_t CALIB3 = (1 << 11);
	const uint32_t CALIB2 = (1 << 10);
	const uint32_t CALIB1 = (1 << 9);
	const uint32_t CALIB0 = (1 << 8);
}

#endif	// OSC32KCTRL_HPP_
