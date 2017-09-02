// ****************************************
// File: mclk.hpp
// Written by: Johan Grobler.
// Started: 30/8/2017
// Updated: 1/9/2017
// ****************************************
// Pointers to the Main Clock special
// function registers.
// ****************************************

#ifndef MCLK_HPP_
#define MCLK_HPP_

#include "sfr.hpp"
static const uint32_t MCLK_BASE_ADDR = 0x40000400;

// ****************************************
// Interrupt Enable Clear Register.
// ****************************************
namespace MCLK {
	rw_sfr8 INTENCLR = __sfr8(MCLK_BASE_ADDR, 0x01);
}

// ****************************************
// Interrupt Enable Clear Bits.
// ****************************************
namespace MCLK_INTENCLR {
	// Clock Ready Interrupt Disable.
	const uint8_t CKRDY = (1 << 0);
}

// ****************************************
// Interrupt Enable Set Register.
// ****************************************
namespace MCLK {
	rw_sfr8 INTENSET = __sfr8(MCLK_BASE_ADDR, 0x02);
}

// ****************************************
// Interrupt Enable Set Bits.
// ****************************************
namespace MCLK_INTENSET {
	// Clock Ready Interrupt Enable.
	const uint8_t CKRDY = (1 << 0);
}

// ****************************************
// Interrupt Flag Status and Clear Register.
// ****************************************
namespace MCLK {
	rw_sfr8 INTFLAG = __sfr8(MCLK_BASE_ADDR, 0x03);
}

// ****************************************
// Interrupt Flag Status and Clear Bits.
// ****************************************
namespace MCLK_INTFLAG {
	// Clock Ready Interrupt Flag Clear.
	const uint8_t CKRDY = (1 << 0);
}

// ****************************************
// CPU Clock Division Register.
// ****************************************
namespace MCLK {
	rw_sfr8 CPUDIV = __sfr8(MCLK_BASE_ADDR, 0x04); // Mistake in datasheet? Wrong offset?
}

// ****************************************
// CPU Clock Division Bits.
// ****************************************
namespace MCLK_CPUDIV {
	// CPU Clock Division Factor.
	const uint8_t CPUDIV128 = (1 << 7);
	const uint8_t CPUDIV64 = (1 << 6);
	const uint8_t CPUDIV32 = (1 << 5);
	const uint8_t CPUDIV16 = (1 << 4);
	const uint8_t CPUDIV8 = (1 << 3);
	const uint8_t CPUDIV4 = (1 << 2);
	const uint8_t CPUDIV2 = (1 << 1);
	const uint8_t CPUDIV1 = (1 << 0);
}

// ****************************************
// Low Power Clock Division Register.
// ****************************************
namespace MCLK {
	rw_sfr8 LPDIV = __sfr8(MCLK_BASE_ADDR, 0x05);
}

// ****************************************
// Low Power Clock Division Bits.
// ****************************************
namespace MCLK_LPDIV {
	// Low Power Division Factor.
	const uint8_t LPDIV128 = (1 << 7);
	const uint8_t LPDIV64 = (1 << 6);
	const uint8_t LPDIV32 = (1 << 5);
	const uint8_t LPDIV16 = (1 << 4);
	const uint8_t LPDIV8 = (1 << 3);
	const uint8_t LPDIV4 = (1 << 2);
	const uint8_t LPDIV2 = (1 << 1);
	const uint8_t LPDIV1 = (1 << 0);
}

// ****************************************
// AHB Mask Register.
// ****************************************
namespace MCLK {
	rw_sfr32 AHBMASK = __sfr32(MCLK_BASE_ADDR, 0x10);
}

// ****************************************
// AHB Mask Bits.
// ****************************************
namespace MCLK_AHBMASK {
	// PAC AHB Clock Enable.
	const uint32_t PAC = (1 << 14);
	// USB AHB Clock Enable.
	const uint32_t USB = (1 << 12);
	// DMAC AHB Clock Enable.
	const uint32_t DMAC = (1 << 11);
	// NVMCTRL AHB Clock Enable.
	const uint32_t NVMCTRL = (1 << 8);
	// DSU AHB Clock Enable.
	const uint32_t DSU = (1 << 5);
	// APBE AHB Clock Enable.
	const uint32_t APBE = (1 << 4);
	// APBD AHB Clock Enable.
	const uint32_t APBD = (1 << 3);
	// APBC AHB Clock Enable.
	const uint32_t APBC = (1 << 2);
	// APBB AHB Clock Enable.
	const uint32_t APBB = (1 << 1);
	// APBA AHB Clock Enable.
	const uint32_t APBA = (1 << 0);
}

// ****************************************
// APBA Mask Register.
// ****************************************
namespace MCLK {
	rw_sfr32 APBAMASK = __sfr32(MCLK_BASE_ADDR, 0x14);
}

// ****************************************
// APBA Mask Bits.
// ****************************************
namespace MCLK_APBAMASK {
	// PORT APBA Clock Enable.
	const uint32_t PORT = (1 << 10);
	// EIC APBA Clock Enable.
	const uint32_t EIC = (1 << 9);
	// RTC APBA Clock Enable.
	const uint32_t RTC = (1 << 8);
	// WDT APBA Clock Enable.
	const uint32_t WDT = (1 << 7);
	// GCLK APBA Clock Enable.
	const uint32_t GCLK = (1 << 6);
	// SUPC APBA Clock Enable.
	const uint32_t SUPC = (1 << 5);
	// OSC32KCTRL APBA Clock Enable.
	const uint32_t OSC32KCTRL = (1 << 4);
	// OSCCTRL APBA Clock Enable.
	const uint32_t OSCCTRL = (1 << 3);
	// RSTC APBA Clock Enable.
	const uint32_t RSTC = (1 << 2);
	// MCLK APBA Clock Enable.
	const uint32_t MCLK = (1 << 1);
	// PM APBA Clock Enable.
	const uint32_t PM = (1 << 0);
}

// ****************************************
// APBB Mask Register.
// ****************************************
namespace MCLK {
	rw_sfr32 APBBMASK = __sfr32(MCLK_BASE_ADDR, 0x18);
}

// ****************************************
// APBB Mask Bits.
// ****************************************
namespace MCLK_APBBMASK {
	// NVMCTRL APBB Clock Enable.
	const uint32_t NVMCTRL = (1 << 2);
	// DSU APBB Clock Enable.
	const uint32_t DSU = (1 << 1);
	// USB APBB Clock Enable.
	const uint32_t USB = (1 << 0);
}

// ****************************************
// APBC Mask Register.
// ****************************************
namespace MCLK {
	rw_sfr32 APBCMASK = __sfr32(MCLK_BASE_ADDR, 0x1c);
}

// ****************************************
// APBC Mask Bits.
// ****************************************
namespace MCLK_APBCMASK {
	// TRNG APBC Clock Enable.
	const uint32_t TRNG = (1 << 14);
	// AES APBC Clock Enable.
	const uint32_t AES = (1 << 13);
	// DAC APBC Clock Enable.
	const uint32_t DAC = (1 << 12);
	// TCn APBC Clock Enable.
	const uint32_t TC3 = (1 << 11);
	const uint32_t TC2 = (1 << 10);
	const uint32_t TC1 = (1 << 9);
	const uint32_t TC0 = (1 << 8);
	// TCCn APBC Clock Enable.
	const uint32_t TCC2 = (1 << 7);
	const uint32_t TCC1 = (1 << 6);
	const uint32_t TCC0 = (1 << 5);
	// SERCOMn APBC Clock Enable.
	const uint32_t SERCOM4 = (1 << 4);
	const uint32_t SERCOM3 = (1 << 3);
	const uint32_t SERCOM2 = (1 << 2);
	const uint32_t SERCOM1 = (1 << 1);
	const uint32_t SERCOM0 = (1 << 0);
}

// ****************************************
// APBD Mask Register.
// ****************************************
namespace MCLK {
	rw_sfr32 APBDMASK = __sfr32(MCLK_BASE_ADDR, 0x20);
}

// ****************************************
// APBD Mask Bits.
// ****************************************
namespace MCLK_APBDMASK {
	// CCL APBD Clock Enable.
	const uint32_t CCL = (1 << 7);
	// OPAMP APBD Clock Enable.
	const uint32_t OPAMP = (1 << 6);
	// PTC APBD Clock Enable.
	const uint32_t PTC = (1 << 5);
	// AC APBD Clock Enable.
	const uint32_t AC = (1 << 4);
	// ADC APBD Clock Enable.
	const uint32_t ADC = (1 << 3);
	// TC4 APBD Clock Enable.
	const uint32_t TC4 = (1 << 2);
	// SERCOM5 APBD Clock Enable.
	const uint32_t SERCOM5 = (1 << 1);
	// EVSYS APBD Clock Enable.
	const uint32_t EVSYS = (1 << 0);
}

// ****************************************
// APBE Mask Register.
// ****************************************
namespace MCLK {
	rw_sfr32 APBEMASK = __sfr32(MCLK_BASE_ADDR, 0x24);
}

// ****************************************
// APBE Mask Bits.
// ****************************************
namespace MCLK_APBEMASK {
	// PAC APBE Clock Enable.
	const uint32_t PAC = (1 << 0);
}

#endif
