// ****************************************
// File: sercom.hpp
// Written by: Johan Grobler.
// Started: 12/9/2017
// Updated: 12/9/2017
// ****************************************
// Base addresses of the SERCOM special
// funcion registers of the ATSAML21J18
// MCU.
// ****************************************
#ifndef SERCOM_HPP_
#define SERCOM_HPP_

#include "sfr.hpp"

namespace SERCOM {
	// Peripheral Base Addresses.
	const uint32_t SERCOM0_BASE = 0x42000000;
	const uint32_t SERCOM1_BASE = 0x42000400;
	const uint32_t SERCOM2_BASE = 0x42000800;
	const uint32_t SERCOM3_BASE = 0x42000c00;
	const uint32_t SERCOM4_BASE = 0x42001000;
}

#endif	// SERCOM_HPP_
