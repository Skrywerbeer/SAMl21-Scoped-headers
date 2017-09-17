// ****************************************
// File: sercom.hpp
// Written by: Johan Grobler.
// Started: 8/9/2017
// Updated: 17/9/2017
// ****************************************
// SERCOM special function registers
// of the ATSAML21J18 mcu in USART mode.
// ****************************************

#ifndef SERCOM_UART_HPP_
#define SERCOM_UART_HPP_

#include "sfr.hpp"
#include "sercom.hpp"

// ****************************************
// Base special function register base
// address and offsets.
// ****************************************
namespace USART {
	// Control A Register offset.
	const uint8_t CTRLA_OFFSET = 0x00;
	// Control B Register offset.
	const uint8_t CTRLB_OFFSET = 0x04;
	// Baud rate Register offset.
	const uint8_t BAUD_OFFSET = 0x0c;
	// Receive Pulse Length Register offset.
	const uint8_t RXPL_OFFSET = 0x0e;
	// Interrupt Enable Clear Register offset.
	const uint8_t INTENCLR_OFFSET = 0x14;
	// Interrupt Enable Set Register offset.
	const uint8_t INTENSET_OFFSET = 0x16;
	// Interrupt Flag Status and Clear Register offset.
	const uint8_t INTFLAG_OFFSET = 0x18;
	// Status Register offset.
	const uint8_t STATUS_OFFSET = 0x1a;
	// Synchronization Busy Register offset.
	const uint8_t SYNCBUSY_OFFSET = 0x1c;
	// Data Register offset.
	const uint8_t DATA_OFFSET = 0x28;
	// Debug Control Register offset.
	const uint8_t DBGCTRL_OFFSET = 0x30;
}

// ****************************************
// Control A Register.
// ****************************************
namespace USART0 {
	rw_sfr32 CTRLA = __sfr32(SERCOM::SERCOM0_BASE, USART::CTRLA_OFFSET);
}
namespace USART1 {
	rw_sfr32 CTRLA = __sfr32(SERCOM::SERCOM1_BASE, USART::CTRLA_OFFSET);
}
namespace USART2 {
	rw_sfr32 CTRLA = __sfr32(SERCOM::SERCOM2_BASE, USART::CTRLA_OFFSET);
}
namespace USART3 {
	rw_sfr32 CTRLA = __sfr32(SERCOM::SERCOM3_BASE, USART::CTRLA_OFFSET);
}
namespace USART4 {
	rw_sfr32 CTRLA = __sfr32(SERCOM::SERCOM4_BASE, USART::CTRLA_OFFSET);
}

// ****************************************
// Control A Bits.
// ****************************************
namespace USART_CTRLA {
	// Data Order.
	const uint32_t DORD = (1 << 30);
	// Clock Polarity.
	const uint32_t CPOL = (1 << 29);
	// Communication Mode.
	const uint32_t CMODE = (1 << 28);
	// Frame Format.
	const uint32_t FORM_MASK = 0xf000000;
	const uint8_t FORM_SHIFT = 24;
	const uint32_t FORM3 = (1 << 27);
	const uint32_t FORM2 = (1 << 26);
	const uint32_t FORM1 = (1 << 25);
	const uint32_t FORM0 = (1 << 24);
	// Sample Adjustment.
	const uint32_t SAMPA_MASK = 0xc00000;
	const uint8_t SAMPA_SHIFT = 22;
	const uint32_t SAMPA1 = (1 << 23);
	const uint32_t SAMPA0 = (1 << 22);
	// Receive Data Pinout.
	const uint32_t RXPO_MASK = 0x300000;
	const uint8_t RXPO_SHIFT = 20;
	const uint32_t RXPO1 = (1 << 21);
	const uint32_t RXPO0 = (1 << 20);
	// Transmit Data Pinout.
	const uint32_t TXPO_MASK = 0x30000;
	const uint8_t TXPO_SHIFT = 16;
	const uint32_t TXPO1 = (1 << 17);
	const uint32_t TXPO0 = (1 << 16);
	// Sample Rate.
	const uint32_t SAMPR_MASK = 0xe000;
	const uint8_t SAMPR_SHIFT = 13;
	const uint32_t SAMPR2 = (1 << 15);
	const uint32_t SAMPR1 = (1 << 14);
	const uint32_t SAMPR0 = (1 << 13);
	// Immediate Buffer Overflow Notification.
	const uint32_t IBON = (1 << 8);
	// Run in Standby.
	const uint32_t RUNSTDBY = (1 << 7);
	// Operating Mode.
	const uint32_t MODE_MASK = 0x1c;
	const uint8_t MODE_SHIFT = 2;
	const uint32_t MODE2 = (1 << 4);
	const uint32_t MODE1 = (1 << 3);
	const uint32_t MODE0 = (1 << 2);
	// Enable.
	const uint32_t ENABLE = (1 << 1);
	// Software Reset.
	const uint32_t SWRST = (1 << 0);
}

// ****************************************
// Control B Regsiter.
// ****************************************
namespace USART0 {
	rw_sfr32 CTRLB = __sfr32(SERCOM::SERCOM0_BASE, USART::CTRLB_OFFSET);
}
namespace USART1 {
	rw_sfr32 CTRLB = __sfr32(SERCOM::SERCOM1_BASE, USART::CTRLB_OFFSET);
}
namespace USART2 {
	rw_sfr32 CTRLB = __sfr32(SERCOM::SERCOM2_BASE, USART::CTRLB_OFFSET);
}
namespace USART3 {
	rw_sfr32 CTRLB = __sfr32(SERCOM::SERCOM3_BASE, USART::CTRLB_OFFSET);
}
namespace USART4 {
	rw_sfr32 CTRLB = __sfr32(SERCOM::SERCOM4_BASE, USART::CTRLB_OFFSET);
}

// ****************************************
// Control B Bits.
// ****************************************
namespace USART_CTRLB {
	// Reciever Enable.
	const uint32_t RXEN = (1 << 17);
	// Transmitter Enable.
	const uint32_t TXEN = (1 << 16);
	// Parity Mode.
	const uint32_t PMODE = (1 << 13);
	// Encoding Format.
	const uint32_t ENC = (1 << 10);
	// Start of Frame Detection Enable.
	const uint32_t SFDE = (1 << 9);
	// Collision Detection Enable.
	const uint32_t COLDEN = (1 << 8);
	// Stop Bit Mode.
	const uint32_t SBMODE = (1 << 6);
	// Character Size.
	const uint32_t CHSIZE_MASK = 0x7;
	const uint8_t CHSIZE_SHIFT = 0;
	const uint32_t CHSIZE2 = (1 << 2);
	const uint32_t CHSIZE1 = (1 << 1);
	const uint32_t CHSIZE0 = (1 << 0);
}

// ****************************************
// Baud Register.
// ****************************************
namespace USART0 {
	rw_sfr16 BAUD = __sfr16(SERCOM::SERCOM0_BASE, USART::BAUD_OFFSET);
}
namespace USART1 {
	rw_sfr16 BAUD = __sfr16(SERCOM::SERCOM1_BASE, USART::BAUD_OFFSET);
}
namespace USART2 {
	rw_sfr16 BAUD = __sfr16(SERCOM::SERCOM2_BASE, USART::BAUD_OFFSET);
}
namespace USART3 {
	rw_sfr16 BAUD = __sfr16(SERCOM::SERCOM3_BASE, USART::BAUD_OFFSET);
}
namespace USART4 {
	rw_sfr16 BAUD = __sfr16(SERCOM::SERCOM4_BASE, USART::BAUD_OFFSET);
}

// ****************************************
// Baud Bits.
// ****************************************
namespace USART_BAUD {
	// Baud Value.
	const uint16_t BAUD_MASK = 0xffff;
	const uint8_t BAUD_SHIFT = 0;
	const uint16_t BAUD15 = (1 << 15);
	const uint16_t BAUD14 = (1 << 14);
	const uint16_t BAUD13 = (1 << 13);
	const uint16_t BAUD12 = (1 << 12);
	const uint16_t BAUD11 = (1 << 11);
	const uint16_t BAUD10 = (1 << 10);
	const uint16_t BAUD9 = (1 << 9);
	const uint16_t BAUD8 = (1 << 8);
	const uint16_t BAUD7 = (1 << 7);
	const uint16_t BAUD6 = (1 << 6);
	const uint16_t BAUD5 = (1 << 5);
	const uint16_t BAUD4 = (1 << 4);
	const uint16_t BAUD3 = (1 << 3);
	const uint16_t BAUD2 = (1 << 2);
	const uint16_t BAUD1 = (1 << 1);
	const uint16_t BAUD0 = (1 << 0);
	// Fractional Part.
	const uint16_t FP_MASK = 0xe000;
	const uint8_t FP_SHIFT = 13;
	const uint16_t FP2 = (1 << 15);
	const uint16_t FP1 = (1 << 14);
	const uint16_t FP0 = (1 << 13);
}

// ****************************************
// Receive Pulse Length Register.
// ****************************************
namespace USART0 {
	rw_sfr8 RXPL = __sfr8(SERCOM::SERCOM0_BASE, USART::RXPL_OFFSET);
}
namespace USART1 {
	rw_sfr8 RXPL = __sfr8(SERCOM::SERCOM1_BASE, USART::RXPL_OFFSET);
}
namespace USART2 {
	rw_sfr8 RXPL = __sfr8(SERCOM::SERCOM2_BASE, USART::RXPL_OFFSET);
}
namespace USART3 {
	rw_sfr8 RXPL = __sfr8(SERCOM::SERCOM3_BASE, USART::RXPL_OFFSET);
}
namespace USART4 {
	rw_sfr8 RXPL = __sfr8(SERCOM::SERCOM4_BASE, USART::RXPL_OFFSET);
}

// ****************************************
// Receive Pulse Length Bits.
// ****************************************
namespace USART_RXPL {
	// Recieve Pulse Length.
	const uint8_t RXPL_MASK = 0xff;
	const uint8_t RXPL_SHIFT = 0
	const uint8_t RXPL7 = (1 << 7);
	const uint8_t RXPL6 = (1 << 6);
	const uint8_t RXPL5 = (1 << 5);
	const uint8_t RXPL4 = (1 << 4);
	const uint8_t RXPL3 = (1 << 3);
	const uint8_t RXPL2 = (1 << 2);
	const uint8_t RXPL1 = (1 << 1);
	const uint8_t RXPL0 = (1 << 0);
}

// ****************************************
// Interrupt Enable Clear Register.
// ****************************************
namespace USART0 {
	rw_sfr8 INTENCLR = __sfr8(SERCOM::SERCOM0_BASE, USART::INTENCLR_OFFSET);
}
namespace USART1 {
	rw_sfr8 INTENCLR = __sfr8(SERCOM::SERCOM1_BASE, USART::INTENCLR_OFFSET);
}
namespace USART2 {
	rw_sfr8 INTENCLR = __sfr8(SERCOM::SERCOM2_BASE, USART::INTENCLR_OFFSET);
}
namespace USART3 {
	rw_sfr8 INTENCLR = __sfr8(SERCOM::SERCOM3_BASE, USART::INTENCLR_OFFSET);
}
namespace USART4 {
	rw_sfr8 INTENCLR = __sfr8(SERCOM::SERCOM4_BASE, USART::INTENCLR_OFFSET);
}

// ****************************************
// Interrupt Enable Clear Bits.
// ****************************************
namespace USART_INTENCLR {
	// Error Interrupt Disable.
	const uint8_t ERROR = (1 << 7);
	// Recieve Break Interrupt Disable.
	const uint8_t RXBRK = (1 << 5);
	// Clear to Send Input Change Interrupt Disable.
	const uint8_t CTSIC = (1 << 4);
	// Recieve Start Interrupt Disable.
	const uint8_t RXS = (1 << 3);
	// Recieve Complete Interrupt Disable.
	const uint8_t RXC = (1 << 2);
	// Transmit Complete Interrupt Disable.
	const uint8_t TXC = (1 << 1);
	// Data Register Empty Interrupt Disable.
	const uint8_t DRE = (1 << 0);
}

// ****************************************
// Interrupt Enable Set Register.
// ****************************************
namespace USART0 {
	rw_sfr8 INTENSET = __sfr8(SERCOM::SERCOM0_BASE, USART::INTENSET_OFFSET);
}
namespace USART1 {
	rw_sfr8 INTENSET = __sfr8(SERCOM::SERCOM1_BASE, USART::INTENSET_OFFSET);
}
namespace USART2 {
	rw_sfr8 INTENSET = __sfr8(SERCOM::SERCOM2_BASE, USART::INTENSET_OFFSET);
}
namespace USART3 {
	rw_sfr8 INTENSET = __sfr8(SERCOM::SERCOM3_BASE, USART::INTENSET_OFFSET);
}
namespace USART4 {
	rw_sfr8 INTENSET = __sfr8(SERCOM::SERCOM4_BASE, USART::INTENSET_OFFSET);
}

// ****************************************
// Interrupt Enable Set Bits.
// ****************************************
namespace USART_INTENSET {
	// Error Interrupt Enable.
	const uint8_t ERROR = (1 << 7);
	// Recieve Break Interrupt Enable.
	const uint8_t RXBRK = (1 << 5);
	// Clear to Send Input Change Interrupt Enable.
	const uint8_t CTSIC = (1 << 4);
	// Recieve Start Interrupt Enable.
	const uint8_t RXS = (1 << 3);
	// Recieve Complete Interrupt Enable.
	const uint8_t RXC = (1 << 2);
	// Transmit Complete Interrupt Enable.
	const uint8_t TXC = (1 << 1);
	// Data Register Empty Interrupt Enable.
	const uint8_t DRE = (1 << 0);
}

// ****************************************
// Interrupt Flag Status and Clear Register.
// ****************************************
namespace USART0 {
	rw_sfr8 INTFLAG = __sfr8(SERCOM::SERCOM0_BASE, USART::INTFLAG_OFFSET);
}
namespace USART1 {
	rw_sfr8 INTFLAG = __sfr8(SERCOM::SERCOM1_BASE, USART::INTFLAG_OFFSET);
}
namespace USART2 {
	rw_sfr8 INTFLAG = __sfr8(SERCOM::SERCOM2_BASE, USART::INTFLAG_OFFSET);
}
namespace USART3 {
	rw_sfr8 INTFLAG = __sfr8(SERCOM::SERCOM3_BASE, USART::INTFLAG_OFFSET);
}
namespace USART4 {
	rw_sfr8 INTFLAG = __sfr8(SERCOM::SERCOM4_BASE, USART::INTFLAG_OFFSET);
}

// ****************************************
// Interrupt Flag Status and Clear Bits.
// ****************************************
namespace USART_INTFLAG {
		// Error Interrupt Flag Clear.
	const uint8_t ERROR = (1 << 7);
	// Recieve Break Interrupt Flag Clear.
	const uint8_t RXBRK = (1 << 5);
	// Clear to Send Input Change Interrupt Flag Clear.
	const uint8_t CTSIC = (1 << 4);
	// Recieve Start Interrupt Flag Clear.
	const uint8_t RXS = (1 << 3);
	// Recieve Complete Interrupt Flag Clear.
	const uint8_t RXC = (1 << 2);
	// Transmit Complete Interrupt Flag Clear.
	const uint8_t TXC = (1 << 1);
	// Data Register Empty Interrupt Flag Clear.
	const uint8_t DRE = (1 << 0);
}

// ****************************************
// Status Register.
// ****************************************
namespace USART0 {
	rw_sfr16 STATUS = __sfr16(SERCOM::SERCOM0_BASE, USART::STATUS_OFFSET);
}
namespace USART1 {
	rw_sfr16 STATUS = __sfr16(SERCOM::SERCOM1_BASE, USART::STATUS_OFFSET);
}
namespace USART2 {
	rw_sfr16 STATUS = __sfr16(SERCOM::SERCOM2_BASE, USART::STATUS_OFFSET);
}
namespace USART3 {
	rw_sfr16 STATUS = __sfr16(SERCOM::SERCOM3_BASE, USART::STATUS_OFFSET);
}
namespace USART4 {
	rw_sfr16 STATUS = __sfr16(SERCOM::SERCOM4_BASE, USART::STATUS_OFFSET);
}

// ****************************************
// Status Bits.
// ****************************************
namespace USART_STATUS {
	// Collision Detected.
	const uint16_t COLL = (1 << 5);
	// Inconsistent Sycn Field.
	const uint16_t ISF = (1 << 4);
	// Clear to Send.
	const uint16_t CTS = (1 << 3);
	// Buffer Overflow.
	const uint16_t BUFOVF = (1 << 2);
	// Frame Error.
	const uint16_t FERR = (1 << 1);
	// Parity Error.
	const uint16_t PERR = (1 << 0);
}

// ****************************************
// Synchronization Busy Register.
// ****************************************
namespace USART0 {
	ro_sfr32 SYNCBUSY = __sfr32(SERCOM::SERCOM0_BASE, USART::SYNCBUSY_OFFSET);
}
namespace USART1 {
	ro_sfr32 SYNCBUSY = __sfr32(SERCOM::SERCOM1_BASE, USART::SYNCBUSY_OFFSET);
}
namespace USART2 {
	ro_sfr32 SYNCBUSY = __sfr32(SERCOM::SERCOM2_BASE, USART::SYNCBUSY_OFFSET);
}
namespace USART3 {
	ro_sfr32 SYNCBUSY = __sfr32(SERCOM::SERCOM3_BASE, USART::SYNCBUSY_OFFSET);
}
namespace USART4 {
	ro_sfr32 SYNCBUSY = __sfr32(SERCOM::SERCOM4_BASE, USART::SYNCBUSY_OFFSET);
}

// ****************************************
// Synchronization Busy Bits.
// ****************************************
namespace USART_SYNCBUSY {
	// CTRLB Synchronization Busy.
	const uint32_t CTRLB = (1 << 2);
	// SERCOM Enable Synchronization Busy.
	const uint32_t ENABLE = (1 << 1);
	// Software Reset Synchronization Busy.
	const uint32_t SWRST = (1 << 0);
}

// ****************************************
// Data Register.
// ****************************************
namespace USART0 {
	rw_sfr16 DATA = __sfr16(SERCOM::SERCOM0_BASE, USART::DATA_OFFSET);
}
namespace USART1 {
	rw_sfr16 DATA = __sfr16(SERCOM::SERCOM1_BASE, USART::DATA_OFFSET);
}
namespace USART2 {
	rw_sfr16 DATA = __sfr16(SERCOM::SERCOM2_BASE, USART::DATA_OFFSET);
}
namespace USART3 {
	rw_sfr16 DATA = __sfr16(SERCOM::SERCOM3_BASE, USART::DATA_OFFSET);
}
namespace USART4 {
	rw_sfr16 DATA = __sfr16(SERCOM::SERCOM4_BASE, USART::DATA_OFFSET);
}

// ****************************************
// Data Bits.
// ****************************************
namespace USART_DATA {
	// Data.
	const uint16_t DATA_MASK = 0x1ff;
	const uint8_t DATA_SHIFT = 0;
	const uint16_t DATA8 = (1 << 8);
	const uint16_t DATA7 = (1 << 7);
	const uint16_t DATA6 = (1 << 6);
	const uint16_t DATA5 = (1 << 5);
	const uint16_t DATA4 = (1 << 4);
	const uint16_t DATA3 = (1 << 3);
	const uint16_t DATA2 = (1 << 2);
	const uint16_t DATA1 = (1 << 1);
	const uint16_t DATA0 = (1 << 0);
}

// ****************************************
// Debug Control Register.
// ****************************************
namespace USART0 {
	rw_sfr8 DBGCTRL = __sfr8(SERCOM::SERCOM0_BASE, USART::DBGCTRL_OFFSET);
}
namespace USART1 {
	rw_sfr8 DBGCTRL = __sfr8(SERCOM::SERCOM1_BASE, USART::DBGCTRL_OFFSET);
}
namespace USART2 {
	rw_sfr8 DBGCTRL = __sfr8(SERCOM::SERCOM2_BASE, USART::DBGCTRL_OFFSET);
}
namespace USART3 {
	rw_sfr8 DBGCTRL = __sfr8(SERCOM::SERCOM3_BASE, USART::DBGCTRL_OFFSET);
}
namespace USART4 {
	rw_sfr8 DBGCTRL = __sfr8(SERCOM::SERCOM4_BASE, USART::DBGCTRL_OFFSET);
}

// ****************************************
// Debug Control Bits.
// ****************************************
namespace USART_DBGCTRL {
	// Debug Stop Mode.
	const uint8_t DBGSTOP = (1 << 0);
}

#endif	// SERCOM_HPP_
