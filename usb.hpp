// ****************************************
// File: usb.hpp
// Written by: Johan Grobler.
// Started: 15/9/2017
// Updated: 17/9/2017
// ****************************************
// USB special function registers of the
// ATSAML21J18 mcu.
// ****************************************

#ifndef USB_HPP_
#define USB_HPP_

#include "sfr.hpp"

// ****************************************
// Base addresses and common register offsets.
// ****************************************
namespace USB_COMMON {
	// Common Device Registers.
	// Base address.
	const uint32_t USB_BASE = 0x41000000;
	// Control A Register offset.
	const uint16_t CTRLA_OFFSET = 0x00;
	// Synchronization Busy Register offset.
	const uint16_t SYNCBUSY_OFFSET = 0x02;
	// QOS Control Register offset.
	const uint16_t QOSCTRL_OFFSET = 0x03;
	// Finite State Machine Status Register offset.
	const uint16_t FSMSTATUS_OFFSET = 0x0d;
	// Descriptor Address Register offset.
	const uint16_t DESCADD_OFFSET = 0x24;
	// Pad Calibration Register offset.
	const uint16_t PADCAL_OFFSET = 0x28;

	// Conrtol B Register offset.
	const uint16_t CTRLB_OFFSET = 0x08;
	// Device Frame Number Register offset.
	const uint16_t FNUM_OFFSET = 0x10;
	// Status Register offset.
	const uint16_t STATUS_OFFSET = 0x0c;
	// Device Interrupt Enable Clear Register offset.
	const uint16_t INTENCLR_OFFSET = 0x14;
	// Device Interrupt Enable Set Register offset.
	const uint16_t INTENSET_OFFSET = 0x18;
	// Device Interrupt Flag Status and Clear Register offset.
	const uint16_t INTFLAG_OFFSET = 0x1c;

}

// ****************************************
// Device register offsets.
// ****************************************
namespace USB_DEVICE {
	// Device Address Register offset.
	const uint16_t DADD_OFFSET = 0x0a;
	// Endpoint Interrupt Summary Register offset.
	const uint16_t EPINTSMRY_OFFSET = 0x20;

	// Device Endpoint Configuration Register offsets.
	const uint16_t EPCFG0_OFFSET = 0x100;
	const uint16_t EPCFG1_OFFSET = 0x120;
	const uint16_t EPCFG2_OFFSET = 0x140;
	const uint16_t EPCFG3_OFFSET = 0x160;
	const uint16_t EPCFG4_OFFSET = 0x180;
	const uint16_t EPCFG5_OFFSET = 0x1a0;
	const uint16_t EPCFG6_OFFSET = 0x1c0;
	const uint16_t EPCFG7_OFFSET = 0x1e0;
	// Device Endpoint Status Clear Register offsets.
	const uint16_t EPSTATUSCLR0_OFFSET = 0x104;
	const uint16_t EPSTATUSCLR1_OFFSET = 0x124;
	const uint16_t EPSTATUSCLR2_OFFSET = 0x144;
	const uint16_t EPSTATUSCLR3_OFFSET = 0x164;
	const uint16_t EPSTATUSCLR4_OFFSET = 0x184;
	const uint16_t EPSTATUSCLR5_OFFSET = 0x1a4;
	const uint16_t EPSTATUSCLR6_OFFSET = 0x1c4;
	const uint16_t EPSTATUSCLR7_OFFSET = 0x1e4;
	// Device Endpoint Status Set Register offsets.
	const uint16_t EPSTATUSSET0_OFFSET = 0x105;
	const uint16_t EPSTATUSSET1_OFFSET = 0x125;
	const uint16_t EPSTATUSSET2_OFFSET = 0x145;
	const uint16_t EPSTATUSSET3_OFFSET = 0x165;
	const uint16_t EPSTATUSSET4_OFFSET = 0x185;
	const uint16_t EPSTATUSSET5_OFFSET = 0x1a5;
	const uint16_t EPSTATUSSET6_OFFSET = 0x1c5;
	const uint16_t EPSTATUSSET7_OFFSET = 0x1e5;
	// Device Endpoint Status Register offsets.
	const uint16_t EPSTATUS0_OFFSET = 0x106;
	const uint16_t EPSTATUS1_OFFSET = 0x126;
	const uint16_t EPSTATUS2_OFFSET = 0x146;
	const uint16_t EPSTATUS3_OFFSET = 0x166;
	const uint16_t EPSTATUS4_OFFSET = 0x186;
	const uint16_t EPSTATUS5_OFFSET = 0x1a6;
	const uint16_t EPSTATUS6_OFFSET = 0x1c6;
	const uint16_t EPSTATUS7_OFFSET = 0x1e6;
	// Device Endpoint Interrupt Flag Register offsets.
	const uint16_t EPINTFLAG0_OFFSET = 0x107;
	const uint16_t EPINTFLAG1_OFFSET = 0x127;
	const uint16_t EPINTFLAG2_OFFSET = 0x147;
	const uint16_t EPINTFLAG3_OFFSET = 0x167;
	const uint16_t EPINTFLAG4_OFFSET = 0x187;
	const uint16_t EPINTFLAG5_OFFSET = 0x1a7;
	const uint16_t EPINTFLAG6_OFFSET = 0x1c7;
	const uint16_t EPINTFLAG7_OFFSET = 0x1e7;
	// Device Endpoint Interrupt Enable Clear Register offsets.
	const uint16_t EPINTENCLR0_OFFSET = 0x108;
	const uint16_t EPINTENCLR1_OFFSET = 0x128;
	const uint16_t EPINTENCLR2_OFFSET = 0x148;
	const uint16_t EPINTENCLR3_OFFSET = 0x168;
	const uint16_t EPINTENCLR4_OFFSET = 0x188;
	const uint16_t EPINTENCLR5_OFFSET = 0x1a8;
	const uint16_t EPINTENCLR6_OFFSET = 0x1c8;
	const uint16_t EPINTENCLR7_OFFSET = 0x1e8;
	// Device Endpoint Interrupt Enable Set Register offsets.
	const uint16_t EPINTENSET0_OFFSET = 0x109;
	const uint16_t EPINTENSET1_OFFSET = 0x129;
	const uint16_t EPINTENSET2_OFFSET = 0x149;
	const uint16_t EPINTENSET3_OFFSET = 0x169;
	const uint16_t EPINTENSET4_OFFSET = 0x189;
	const uint16_t EPINTENSET5_OFFSET = 0x1a9;
	const uint16_t EPINTENSET6_OFFSET = 0x1c9;
	const uint16_t EPINTENSET7_OFFSET = 0x1e9;
}

// ****************************************
// Device Endpoint n Descriptor Bank 0 offsets.
// ****************************************
namespace USB_EPBANK0 {
	// Address of Data Buffer offsets.
	const uint8_t ADDR0_OFFSET = 0x00;
	const uint8_t ADDR1_OFFSET = 0x20;
	const uint8_t ADDR2_OFFSET = 0x40;
	const uint8_t ADDR3_OFFSET = 0x60;
	const uint8_t ADDR4_OFFSET = 0x80;
	const uint8_t ADDR5_OFFSET = 0xa0;
	const uint8_t ADDR6_OFFSET = 0xc0;
	const uint8_t ADDR7_OFFSET = 0xe0;
	// Packet Size offsets.
	const uint8_t PCKSIZE0_OFFSET = 0x04;
	const uint8_t PCKSIZE1_OFFSET = 0x24;
	const uint8_t PCKSIZE2_OFFSET = 0x44;
	const uint8_t PCKSIZE3_OFFSET = 0x64;
	const uint8_t PCKSIZE4_OFFSET = 0x84;
	const uint8_t PCKSIZE5_OFFSET = 0xa4;
	const uint8_t PCKSIZE6_OFFSET = 0xc4;
	const uint8_t PCKSIZE7_OFFSET = 0xe4;
	// Extended Register offsets.
	const uint8_t EXTREG0_OFFSET = 0x08;
	const uint8_t EXTREG1_OFFSET = 0x28;
	const uint8_t EXTREG2_OFFSET = 0x48;
	const uint8_t EXTREG3_OFFSET = 0x68;
	const uint8_t EXTREG4_OFFSET = 0x88;
	const uint8_t EXTREG5_OFFSET = 0xa8;
	const uint8_t EXTREG6_OFFSET = 0xc8;
	const uint8_t EXTREG7_OFFSET = 0xe8;
	// Device Status Bank offsets.
	const uint8_t STATUS_BK0_OFFSET = 0x0a;
	const uint8_t STATUS_BK1_OFFSET = 0x2a;
	const uint8_t STATUS_BK2_OFFSET = 0x4a;
	const uint8_t STATUS_BK3_OFFSET = 0x6a;
	const uint8_t STATUS_BK4_OFFSET = 0x8a;
	const uint8_t STATUS_BK5_OFFSET = 0xaa;
	const uint8_t STATUS_BK6_OFFSET = 0xca;
	const uint8_t STATUS_BK7_OFFSET = 0xea;
}

// ****************************************
// Device Endpoint n Descriptor Bank 1 offsets.
// ****************************************
namespace USB_EPBANK1 {
	// Address of Data Buffer offsets.
	const uint8_t ADDR0_OFFSET = 0x10;
	const uint8_t ADDR1_OFFSET = 0x30;
	const uint8_t ADDR2_OFFSET = 0x50;
	const uint8_t ADDR3_OFFSET = 0x70;
	const uint8_t ADDR4_OFFSET = 0x90;
	const uint8_t ADDR5_OFFSET = 0xb0;
	const uint8_t ADDR6_OFFSET = 0xd0;
	const uint8_t ADDR7_OFFSET = 0xf0;
	// Packet Size offsets.
	const uint8_t PCKSIZE0_OFFSET = 0x14;
	const uint8_t PCKSIZE1_OFFSET = 0x34;
	const uint8_t PCKSIZE2_OFFSET = 0x54;
	const uint8_t PCKSIZE3_OFFSET = 0x74;
	const uint8_t PCKSIZE4_OFFSET = 0x94;
	const uint8_t PCKSIZE5_OFFSET = 0xb4;
	const uint8_t PCKSIZE6_OFFSET = 0xd4;
	const uint8_t PCKSIZE7_OFFSET = 0xf4;
	// Device Status Bank offsets.
	const uint8_t STATUS_BK0_OFFSET = 0x1a;
	const uint8_t STATUS_BK1_OFFSET = 0x3a;
	const uint8_t STATUS_BK2_OFFSET = 0x5a;
	const uint8_t STATUS_BK3_OFFSET = 0x7a;
	const uint8_t STATUS_BK4_OFFSET = 0x9a;
	const uint8_t STATUS_BK5_OFFSET = 0xba;
	const uint8_t STATUS_BK6_OFFSET = 0xda;
	const uint8_t STATUS_BK7_OFFSET = 0xfa;
}

// ****************************************
// Host register offsets.
// ****************************************
namespace USB_HOST {
	// TODO: Add register offsets.
}

// ****************************************
// Conrtol A Register.
// ****************************************
namespace USB {
	rw_sfr8 CTRLA = __sfr8(USB_COMMON::USB_BASE, USB_COMMON::CTRLA_OFFSET);
}

// ****************************************
// Control A bits.
// ****************************************
namespace USB_CTRLA {
	// Operating Mode.
	const uint8_t MODE = (1 << 7);
	// Run in Standby Mode.
	const uint8_t RUNSTDBY = (1 << 2);
	// Enable.
	const uint8_t ENABLE = (1 << 1);
	// Software Reset.
	const uint8_t SWRST = (1 << 0);
}

// ****************************************
// Synchronization Busy Register.
// ****************************************
namespace USB {
	ro_sfr8 SYNCBUSY = __sfr8(USB_COMMON::USB_BASE, USB_COMMON::SYNCBUSY_OFFSET);
}

// ****************************************
// Synchronization Busy bits.
// ****************************************
namespace USB_SYNCBUSY {
	// Synchronization Enable status bit.
	const uint8_t ENABLE = (1 << 1);
	// Synchronization Software Reset bit.
	const uint8_t SWRST = (1 << 0);
}

// ****************************************
// QOS Control Register.
// ****************************************
namespace USB {
	rw_sfr8 QOSCTRL = __sfr8(USB_COMMON::USB_BASE, USB_COMMON::QOSCTRL_OFFSET);
}

// ****************************************
// QOS Conrtol bits.
// ****************************************
namespace USB_QOSCTRL {
	// Data Quality of Service.
	const uint8_t DQOS1 = (1 << 3);
	const uint8_t DQOS0 = (1 << 2);
	// Configuration Quality of Service.
	const uint8_t CQOS1 = (1 << 1);
	const uint8_t CQOS0 = (1 << 0);
}

// ****************************************
// Finite State Machine Status Register.
// ****************************************
namespace USB {
	ro_sfr8 FSMSTATUS = __sfr8(USB_COMMON::USB_BASE, USB_COMMON::FSMSTATUS_OFFSET);
}

// ****************************************
// Finie State Machine Status bits.
// ****************************************
namespace USB_FSMSTATUS {
	// Powered-off, disconnected and disabled state.
	const uint8_t OFF = (1 << 0);
	// Idle or Active state.
	const uint8_t ON = (1 << 1);
	// Suspended state.
	const uint8_t SUSPEND = (1 << 2);
	// Sleep state.
	const uint8_t SLEEP = (1 << 3);
	// Down Stream Resume.
	const uint8_t DNRESUME = (1 << 4);
	// Up Stream Resume.
	const uint8_t UPRESUME = (1 << 5);
	// USB lines Reset.
	const uint8_t RESET = (1 << 6);
}

// ****************************************
// Descriptor Address Register.
// ****************************************
namespace USB {
	rw_sfr32 DESCADD = __sfr32(USB_COMMON::USB_BASE, USB_COMMON::DESCADD_OFFSET);
}

// ****************************************
// Pad Calibration Register.
// ****************************************
namespace USB {
	rw_sfr16 PADCAL = __sfr16(USB_COMMON::USB_BASE, USB_COMMON::PADCAL_OFFSET);
}

// ****************************************
// Pad Calibration bits.
// ****************************************
namespace USB_PADCAL {
	// Trim bits for DP/DM.
	const uint16_t TRIM_MASK = 0x7000;
	const uint8_t TRIM_SHIFT = 12;
	const uint16_t TRIM2 = (1 << 14);
	const uint16_t TRIM1 = (1 << 13);
	const uint16_t TRIM0 = (1 << 12);
	// Trimmable Output Driber Impedance N.
	const uint16_t TRANSN_MASK = 0x7c0;
	const uint8_t TRANSN_SHIFT = 6
	const uint16_t TRANSN4 = (1 << 10);
	const uint16_t TRANSN3 = (1 << 9);
	const uint16_t TRANSN2 = (1 << 8);
	const uint16_t TRANSN1 = (1 << 7);
	const uint16_t TRANSN0 = (1 << 6);
	// Trimmable Output Driver Impedance P.
	const uint16_t TRANSP_MASK = 0x1f;
	const uint8_t TRANSP_SHIFT = 0;
	const uint16_t TRANSP4 = (1 << 4);
	const uint16_t TRANSP3 = (1 << 3);
	const uint16_T TRANSP2 = (1 << 2);
	const uint16_T TRANSP1 = (1 << 1);
	const uint16_t TRANSP0 = (1 << 0);
}

// ****************************************
// Control B Register.
// ****************************************
namespace USB {
	rw_sfr16 CTRLB = __sfr16(USB_COMMON::USB_BASE, USB_COMMON::CTRLB_OFFSET);
}

// ****************************************
// Control B bits.
// ****************************************
namespace USB_CTRLB {
	// Link Power Management Handshake.
	const uint16_t LPMHDSK1 = (1 << 11);
	const uint16_t LPMHDSK0 = (1 << 10);
	// Global NAK.
	const uint16_t GNAK = (1 << 9);
	// No reply excepted SETUP Token.
	const uint16_t NREPLY = (1 << 4);
	// Speed Configuration.
	const uint16_t SPDCONF1 = (1 << 3);
	const uint16_t SPDCONF0 = (1 << 2);
	// Upstream Resume.
	const uint16_t UPRSM = (1 << 1);
	// Detach.
	const uint16_t DETACH = (1 << 0);
}

// ****************************************
// Device Address Register.
// ****************************************
namespace USB {
	rw_sfr8 DADD = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::DADD_OFFSET);
}

// ****************************************
// Device Address bits.
// ****************************************
namespace USB_DADD {
	// Device Address Enable.
	const uint8_t ADDEN = (1 << 7);
	// Device Address.
	const uint8_t DADD_MASK = 0x7f;
	const uint8_t DADD_SHIFT = 0;
	const uint8_t DADD6 = (1 << 6);
	const uint8_t DADD5 = (1 << 5);
	const uint8_t DADD4 = (1 << 4);
	const uint8_t DADD3 = (1 << 3);
	const uint8_t DADD2 = (1 << 2);
	const uint8_t DADD1 = (1 << 1);
	const uint8_t DADD0 = (1 << 0);
}

// ****************************************
// Status Register.
// ****************************************
namespace USB {
	rw_sfr8 STATUS = __sfr8(USB_COMMON::USB_BASE, USB_COMMON::STATUS_OFFSET);
}

// ****************************************
// Status bits.
// ****************************************
namespace USB_STATUS {
	// USB Line State Status.
	const uint8_t LINESTATE_MASK = 0xc0;
	const uint8_t LINESTATE_SHIFT = 6;
	const uint8_t LINESTATE1 = (1 << 7); // FS-K or LS-J state.
	const uint8_t LINESTATE0 = (1 << 6); // FS-J or LS-K state.
	// Speed Status.
	const uint8_t SPEED_MASK = 0xc;
	const uint8_t SPEED_SHIFT = 2;
	const uint8_t SPEED1 = (1 << 3);
	const uint8_t SPEED0 = (1 << 2);
}

// ****************************************
// Frame Number Register.
// ****************************************
namespace USB {
	rw_sfr16 FNUM = __sfr16(USB_COMMON::USB_BASE, USB_COMMON::FNUM_OFFSET);
}

// ****************************************
// Frame Number bits.
// ****************************************
namespace USB_FNUM {
	// Frame Number CRC Error.
	const uint16_t FNCERR = (1 << 15);
	// Frame Number.
	const uint16_t FNUM_MASK = 0x3ff8;
	const uint8_t FNUM_SHIFT = 3;
	const uint16_t FNUM10 = (1 << 13);
	const uint16_t FNUM9 = (1 << 12);
	const uint16_t FNUM8 = (1 << 11);
	const uint16_t FNUM7 = (1 << 10);
	const uint16_t FNUM6 = (1 << 9);
	const uint16_t FNUM5 = (1 << 8);
	const uint16_t FNUM4 = (1 << 7);
	const uint16_t FNUM3 = (1 << 6);
	const uint16_t FNUM2 = (1 << 5);
	const uint16_t FNUM1 = (1 << 4);
	const uint16_t FNUM0 = (1 << 3);
	// Micro Frame Number.
	const uint16_t MFNUM_MASK = 0x7;
	const uint8_t MFNUM_SHIFT = 0;
	const uint16_t MFNUM2 = (1 << 2);
	const uint16_t MFNUM1 = (1 << 1);
	const uint16_t MFNUM0 = (1 << 0);
}

// ****************************************
// Interrupt Enable Clear Register.
// ****************************************
namespace USB {
	rw_sfr16 INTENCLR = __sfr16(USB_COMMON::USB_BASE, USB_COMMON::INTENCLR_OFFSET);
}

// ****************************************
// Interrupt Enable Clear bits.
// ****************************************
namespace USB_INTENCLR {
	// Link Power Management Suspend Interrupt disable.
	const uint16_t LPMSUSP = (1 << 9);
	// Link Power Management Not Yet Interrupt disable.
	const uint16_t LPMNYET = (1 << 8);
	// RAM Access Interrupt disable.
	const uint16_t RAMACER = (1 << 7);
	// Upstream Resume Interrupt disable.
	const uint16_t UPRSM = (1 << 6);
	// End of Resume Interrupt disable.
	const uint16_t EORSM = (1 << 5);
	// Wake-Up Interrupt disable.
	const uint16_t WAKEUP = (1 << 4);
	// End of Reset Interrupt disable.
	const uint16_t EORST = (1 << 3);
	// Start-of-Frame Interrupt disable.
	const uint16_t SOF = (1 << 2);
	// Suspend Interrupt disable.
	const uint16_T SUSPEND = (1 << 0);
}

// ****************************************
// Interrupt Enable Set Register.
// ****************************************
namespace USB {
	rw_sfr16 INTENSET = __sfr16(USB_COMMON::USB_BASE, USB_COMMON::INTENSET_OFFSET);
}

// ****************************************
// Interrupt Enable Set bits.
// ****************************************
namespace USB_INTENSET {
	// Link Power Management Suspend Interrupt enable.
	const uint16_t LPMSUSP = (1 << 9);
	// Link Power Management Not Yet Interrupt enable.
	const uint16_t LPMNYET = (1 << 8);
	// RAM Access Interrupt enable.
	const uint16_t RAMACER = (1 << 7);
	// Upstream Resume Interrupt enable.
	const uint16_t UPRSM = (1 << 6);
	// End of Resume Interrupt enable.
	const uint16_t EORSM = (1 << 5);
	// Wake-Up Interrupt enable.
	const uint16_t WAKEUP = (1 << 4);
	// End of Reset Interrupt enable.
	const uint16_t EORST = (1 << 3);
	// Start-of-Frame Interrupt enable.
	const uint16_t SOF = (1 << 2);
	// Suspend Interrupt enable.
	const uint16_T SUSPEND = (1 << 0);
}

// ****************************************
// Interrupt Flag Status and Clear Register.
// ****************************************
namespace USB {
	rw_sfr16 INTFLAG = __sfr16(USB_COMMON::USB_BASE, USB_COMMON::INTFLAG_OFFSET);
}

// ****************************************
// Interrupt Flag Status and Clear bits.
// ****************************************
namespace USB_INTFLAG {
	// Link Power Management Suspend Interrupt flag.
	const uint16_t LPMSUSP = (1 << 9);
	// Link Power Management Not Yet Interrupt flag.
	const uint16_t LPMNYET = (1 << 8);
	// RAM Access Interrupt flag.
	const uint16_t RAMACER = (1 << 7);
	// Upstream Resume Interrupt flag.
	const uint16_t UPRSM = (1 << 6);
	// End of Resume Interrupt flag.
	const uint16_t EORSM = (1 << 5);
	// Wake-Up Interrupt flag.
	const uint16_t WAKEUP = (1 << 4);
	// End of Reset Interrupt flag.
	const uint16_t EORST = (1 << 3);
	// Start-of-Frame Interrupt flag.
	const uint16_t SOF = (1 << 2);
	// Suspend Interrupt flag.
	const uint16_T SUSPEND = (1 << 0);
}



// ****************************************
// USB Device Registers.
// ****************************************

// ****************************************
// Endpoint Interrupt Summary Register.
// ****************************************
namespace USB_DEVICE {
	ro_sfr16 EPINTSMRY = __sfr16(USB_COMMON::USB_BASE, USB_DEVICE::EPINTSMRY_OFFSET);
}

// ****************************************
// Endpoint Intterupt Summary bits.
// ****************************************
namespace USB_EPINTSMRY {
	// TODO: Add Endpoint Interrupt Summary bits.
}

// ****************************************
// Device Endpoint Configuration Registers.
// ****************************************
namespace USB_DEVICE {
	rw_sfr8 EPCFG0 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPCFG0_OFFSET);
	rw_sfr8 EPCFG1 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPCFG1_OFFSET);
	rw_sfr8 EPCFG2 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPCFG2_OFFSET);
	rw_sfr8 EPCFG3 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPCFG3_OFFSET);
	rw_sfr8 EPCFG4 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPCFG4_OFFSET);
	rw_sfr8 EPCFG5 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPCFG5_OFFSET);
	rw_sfr8 EPCFG6 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPCFG6_OFFSET);
	rw_sfr8 EPCFG7 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPCFG7_OFFSET);
}

// ****************************************
// Device Endpoint Configureation bits.
// ****************************************
namespace USB_EPCFG {
	// Endpoint Type for IN direction.
	const uint8_t EPTYPE1_MASK = 0x70;
	const uint8_t EPTYPE1_SHIFT = 4;
	const uint8_t EPTYPE12 = (1 << 6);
	const uint8_t EPTYPE11 = (1 << 5);
	const uint8_t EPTYPE10 = (1 << 4);
	// Endpoint Type for OUT direction.
	const uint8_t EPTYPE0_MASK = 0x7;
	const uint8_t EPTYPE0_SHIFT = 0;
	const uint8_t EPTYPE02 = (1 << 2);
	const uint8_T EPTYPE01 = (1 << 1);
	const uint8_t EPTYPE00 = (1 << 0);
}

// ****************************************
// Device Endpoint Status Clear Register.
// ****************************************
namespace USB_DEVICE {
	rw_sfr8 EPSTATUSCLR0 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUS0_OFFSET);
	rw_sfr8 EPSTATUSCLR1 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUS1_OFFSET);
	rw_sfr8 EPSTATUSCLR2 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUS2_OFFSET);
	rw_sfr8 EPSTATUSCLR3 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUS3_OFFSET);
	rw_sfr8 EPSTATUSCLR4 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUS4_OFFSET);
	rw_sfr8 EPSTATUSCLR5 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUS5_OFFSET);
	rw_sfr8 EPSTATUSCLR6 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUS6_OFFSET);
	rw_sfr8 EPSTATUSCLR7 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUS7_OFFSET);
}

// ****************************************
// Device Endpoint Status Clear bits.
// ****************************************
namespace USB_EPSTATUSCLR {
	// Bank 1 Ready Clear.
	const uint8_t BK1RDY = (1 << 7);
	// Bank 0 Ready Clear.
	const uint8_t BK0RDY = (1 << 6);
	// STALL bank 1 Request Clear.
	const uint8_t STALLRQ1 = (1 << 5);
	// STALL bank 0 Request Clear.
	const uint8_t STALLRQ0 = (1 << 4);
	// Current Bank Clear.
	const uint8_t CURBK = (1 << 2);
	// Data Toggle IN Clear.
	const uint8_t DTGLIN = (1 << 1);
	// Data Toggle OUT Clear.
	const uint8_t DTGLOUT = (1 << 0)
}

// ****************************************
// Device Endpoint Status Set Registers.
// ****************************************
namespace USB_DEVICE {
	rw_sfr8 EPSTATUSSET0 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUSSET0_OFFSET);
	rw_sfr8 EPSTATUSSET1 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUSSET1_OFFSET);
	rw_sfr8 EPSTATUSSET2 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUSSET2_OFFSET);
	rw_sfr8 EPSTATUSSET3 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUSSET3_OFFSET);
	rw_sfr8 EPSTATUSSET4 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUSSET4_OFFSET);
	rw_sfr8 EPSTATUSSET5 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUSSET5_OFFSET);
	rw_sfr8 EPSTATUSSET6 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUSSET6_OFFSET);
	rw_sfr8 EPSTATUSSET7 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUSSET7_OFFSET);
}

// ****************************************
// Device Endpoint Status Set bits.
// ****************************************
namespace USB_EPSTATUSSET {
	// Bank 1 Ready Set.
	const uint8_t BK1RDY = (1 << 7);
	// Bank 0 Ready Set.
	const uint8_t BK0RDY = (1 << 6);
	// STALL bank 1 Request Set.
	const uint8_t STALLRQ1 = (1 << 5);
	// STALL bank 0 Request Set.
	const uint8_t STALLRQ0 = (1 << 4);
	// Current Bank Set.
	const uint8_t CURBK = (1 << 2);
	// Data Toggle IN Set.
	const uint8_t DTGLIN = (1 << 1);
	// Data Toggle OUT Set.
	const uint8_t DTGLOUT = (1 << 0)
}

// ****************************************
// Device Endpoint Status Registers.
// ****************************************
namespace USB_DEVICE {
	rw_sfr8 EPSTATUS0 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUS0_OFFSET);
	rw_sfr8 EPSTATUS1 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUS1_OFFSET);
	rw_sfr8 EPSTATUS2 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUS2_OFFSET);
	rw_sfr8 EPSTATUS3 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUS3_OFFSET);
	rw_sfr8 EPSTATUS4 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUS4_OFFSET);
	rw_sfr8 EPSTATUS5 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUS5_OFFSET);
	rw_sfr8 EPSTATUS6 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUS6_OFFSET);
	rw_sfr8 EPSTATUS7 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPSTATUS7_OFFSET);
}

// ****************************************
// Device Endpoint Status bits.
// ****************************************
namespace USB_EPSTATUS {
	// Bank 1 is Ready.
	const uint8_t BK1RDY = (1 << 7);
	// Bank 0 is Ready.
	const uint8_t BK0RDY = (1 << 6);
	// STALL bank x Request.
	const uint8_t STALLRQ0 = (1 << 4);
	// Current Bank.
	const uint8_t CURBK = (1 << 2);
	// Data Toggle IN Sequence.
	const uint8_t DTGLIN = (1 << 1);
	// Data Toggle OUT Sequence.
	const uint8_t DTGLOUT = (1 << 0)
}

// ****************************************
// Device Endpoint Interrupt Flag Registers.
// ****************************************
namespace USB_DEVICE {
	rw_sfr8 EPINTFLAG0 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTFLAG0_OFFSET);
	rw_sfr8 EPINTFLAG1 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTFLAG1_OFFSET);
	rw_sfr8 EPINTFLAG2 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTFLAG2_OFFSET);
	rw_sfr8 EPINTFLAG3 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTFLAG3_OFFSET);
	rw_sfr8 EPINTFLAG4 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTFLAG4_OFFSET);
	rw_sfr8 EPINTFLAG5 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTFLAG5_OFFSET);
	rw_sfr8 EPINTFLAG6 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTFLAG6_OFFSET);
	rw_sfr8 EPINTFLAG7 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTFLAG7_OFFSET);
}

// ****************************************
// Device Endpoint Interrupt Flag bits.J
// ****************************************
namespace USB_EPINTFLAG {
	// Transmit Stall x Interrupt Flag.
	const uint8_t STALL = (1 << 5);
	// Received Setup Interrupt Flag.
	const uint8_T RXSTP = (1 << 4);
	// Transfer Fail x Interrupt Flag.
	const uint8_t TRFAIL = (1 << 2);
	// Transfer Complete x Interrupt Flag.
	const uint8_t TRCPT = (1 << 0);
}

// ****************************************
// Device Endpoint Interrupt Enable Clear Registers.
// ****************************************
namespace USB_DEVICE {
	rw_sfr8 EPINTENCLR0 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTENCLR0_OFFSET);
	rw_sfr8 EPINTENCLR1 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTENCLR1_OFFSET);
	rw_sfr8 EPINTENCLR2 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTENCLR2_OFFSET);
	rw_sfr8 EPINTENCLR3 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTENCLR3_OFFSET);
	rw_sfr8 EPINTENCLR4 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTENCLR4_OFFSET);
	rw_sfr8 EPINTENCLR5 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTENCLR5_OFFSET);
	rw_sfr8 EPINTENCLR6 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTENCLR6_OFFSET);
	rw_sfr8 EPINTENCLR7 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTENCLR7_OFFSET);
}

// ****************************************
// Device Endpoint Interrupt Enable Clear bits.
// ****************************************
namespace USB_EPINTENCLR {
	// Transmit Stall x Interrupt disable.
	const uint8_t STALL = (1 << 5);
	// Received Setup Interrupt disable.
	const uint8_T RXSTP = (1 << 4);
	// Transfer Fail x Interrupt disable.
	const uint8_t TRFAIL = (1 << 2);
	// Transfer Complete x Interrupt disable.
	const uint8_t TRCPT = (1 << 0);
}

// ****************************************
// Device Endpoint Interrupt Enable Set Registers.
// ****************************************
namespace USB_DEVICE {
	rw_sfr8 EPINTENSET0 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTENSET0_OFFSET);
	rw_sfr8 EPINTENSET1 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTENSET1_OFFSET);
	rw_sfr8 EPINTENSET2 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTENSET2_OFFSET);
	rw_sfr8 EPINTENSET3 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTENSET3_OFFSET);
	rw_sfr8 EPINTENSET4 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTENSET4_OFFSET);
	rw_sfr8 EPINTENSET5 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTENSET5_OFFSET);
	rw_sfr8 EPINTENSET6 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTENSET6_OFFSET);
	rw_sfr8 EPINTENSET7 = __sfr8(USB_COMMON::USB_BASE, USB_DEVICE::EPINTENSET7_OFFSET);
}

// ****************************************
// Device Endpoint Interrupt Enable Set bits.
// ****************************************
namespace USB_EPINTENSET {
	// Transmit Stall x Interrupt enable.
	const uint8_t STALL = (1 << 5);
	// Received Setup Interrupt enable.
	const uint8_T RXSTP = (1 << 4);
	// Transfer Fail x Interrupt enable.
	const uint8_t TRFAIL = (1 << 2);
	// Transfer Complete x Interrupt enable.
	const uint8_t TRCPT = (1 << 0);
}

// ****************************************
// Device Endpoint Descriptor bit fields.
// ****************************************

// ****************************************
// Address of Data Buffer bits.
// ****************************************
namespace USB_EPBANK_ADDR {
	// TODO: Maybe add individual bits, maybe.
}

// ****************************************
// Packet Size bits.
// ****************************************
namespace USB_EPBANK_PCKSIZE {
	// Automatic Zero Length Packet.
	const uint32_t AUTO_ZLP = (1 << 31);
	// Endpoint size.
	const uint32_t SIZE_MASK = 0x70000000;
	const uint8_t SIZE_SHIFT = 28;
	const uint32_t SIZE2 = (1 << 30);
	const uint32_t SIZE1 = (1 << 29);
	const uint32_t SIZE0 = (1 << 28);
	// Multiple Packet Size.
	const uint32_t MULTI_PACKET_SIZE_MASK = 0xfffc000;
	const uint8_t MULTI_PACKET_SIZE_SHIFT = 14;
	const uint32_t MULTI_PACKET_SIZE13 = (1 << 27);
	const uint32_t MULTI_PACKET_SIZE12 = (1 << 26);
	const uint32_t MULTI_PACKET_SIZE11 = (1 << 25);
	const uint32_t MULTI_PACKET_SIZE10 = (1 << 24);
	const uint32_t MULTI_PACKET_SIZE9 = (1 << 23);
	const uint32_t MULTI_PACKET_SIZE8 = (1 << 22);
	const uint32_t MULTI_PACKET_SIZE7 = (1 << 21);
	const uint32_t MULTI_PACKET_SIZE6 = (1 << 20);
	const uint32_t MULTI_PACKET_SIZE5 = (1 << 19);
	const uint32_t MULTI_PACKET_SIZE4 = (1 << 18);
	const uint32_t MULTI_PACKET_SIZE3 = (1 << 17);
	const uint32_t MULTI_PACKET_SIZE2 = (1 << 16);
	const uint32_t MULTI_PACKET_SIZE1 = (1 << 15);
	const uint32_t MULTI_PACKET_SIZE0 = (1 << 14);
	// Byte Count.
	const uint32_t BYTE_COUNT_MASK = 0x3fff;
	const uint8_t BYTE_COUNT_SHIFT = 0;
	const uint32_t BYTE_COUNT13 = (1 << 13);
	const uint32_t BYTE_COUNT12 = (1 << 12);
	const uint32_t BYTE_COUNT11 = (1 << 11);
	const uint32_t BYTE_COUNT10 = (1 << 10);
	const uint32_t BYTE_COUNT9 = (1 << 9);
	const uint32_t BYTE_COUNT8 = (1 << 8);
	const uint32_t BYTE_COUNT7 = (1 << 7);
	const uint32_t BYTE_COUNT6 = (1 << 6);
	const uint32_t BYTE_COUNT5 = (1 << 5);
	const uint32_t BYTE_COUNT4 = (1 << 4);
	const uint32_t BYTE_COUNT3 = (1 << 3);
	const uint32_t BYTE_COUNT2 = (1 << 2);
	const uint32_t BYTE_COUNT1 = (1 << 1);
	const uint32_t BYTE_COUNT0 = (1 << 0);
}

// ****************************************
// Extended Register bits.
// ****************************************
namespace USB_EPBANK_EXTREG {
	// Variable field send with extended token.
	const uint16_t VARIABLE_MASK = 0x7ff0;
	const uint8_t VARIABLE_SHIFT = 4;
	const uint16_t VARIABLE10 = (1 << 14);
	const uint16_t VARIABLE9 = (1 << 13);
	const uint16_t VARIABLE8 = (1 << 12);
	const uint16_t VARIABLE7 = (1 << 11);
	const uint16_t VARIABLE6 = (1 << 10);
	const uint16_t VARIABLE5 = (1 << 9);
	const uint16_t VARIABLE4 = (1 << 8);
	const uint16_t VARIABLE3 = (1 << 7);
	const uint16_t VARIABLE2 = (1 << 6);
	const uint16_t VARIABLE1 = (1 << 5);
	const uint16_t VARIABLE0 = (1 << 4);
	// SUBPID field send with extended token.
	const uint16_t SUBPID_MASK = 0xf;
	const uint8_t SUBPID_SHIFT = 0;
	const uint16_t SUBPID3 = (1 << 3);
	const uint16_t SUBPID2 = (1 << 2);
	const uint16_t SUBPID1 = (1 << 1);
	const uint16_t SUBPID0 = (1 << 0);
}

// ****************************************
// Device Status Bank bits.
// ****************************************
namespace USB_EPBANK_STATUS_BK {
	// Error Flow Status.
	const uint8_t ERRORFLOW = (1 << 1);
	// CRC Error.
	const uint8_t CRCERR = (1 << 0);
}

// TODO: Add registers and bits unique to host .

#endif	// USB_HPP_
