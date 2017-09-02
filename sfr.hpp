// ****************************************
// File: sfr.hpp
// Written by: Johan Grobler.
// Started: 28/8/2017
// Updated: 28/8/2017
// ****************************************
// Typedefs and preprocessor macros for
// special function registers.
// ****************************************

#ifndef SFR_HPP_
#define SFR_HPP_
#include <cstdint>

#ifndef USE_REFERENCES_HPP	// Do not use references, use pointers.
typedef volatile uint32_t *const rw_sfr32;		 // 32 bit read-write.
typedef volatile const uint32_t *const ro_sfr32; // 32 bit read-only.

typedef volatile uint16_t *const rw_sfr16;		 // 16 bit read-write.
typedef volatile const uint16_t *const ro_sfr16; // 16 bit read-only.

typedef volatile uint8_t *const rw_sfr8;		 // 8 bit read-write.
typedef volatile const uint8_t *const ro_sfr8;	 // 8 bit read-only.

#define __sfr32(base, offset) (((uint32_t *) (base+offset)))
#define __sfr16(base, offset) (((uint16_t *) (base+offset)))
#define __sfr8(base, offset) (((uint8_t *) (base+offset)))
#endif

#ifdef USE_REFERENCES_HPP	// Use references, not pointers.
typedef volatile uint32_t & rw_sfr32;
typedef volatile const uint32_t & ro_sfr32;

typedef volatile uint16_t & rw_sfr16;
typedef volatile const uint16_t r0_sfr16;

typedef volatile uint8_t & rw_sfr8;
typedef volatile const uint8_t ro_sfr8;

#define __sfr32(base, offset) (*(uint32_t *) (base+offset))
#define __sfr16(base, offset) (*(uint16_t *) (base+offset))
#define __sfr8(base, offset) (*(uint8_t *) (base+offset))
#endif

#endif
