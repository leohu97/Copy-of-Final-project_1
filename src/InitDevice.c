//=========================================================
// src/InitDevice.c: generated by Hardware Configurator
//
// This file will be regenerated when saving a document.
// leave the sections inside the "$[...]" comment tags alone
// or they will be overwritten!
//=========================================================

// USER INCLUDES
#include <SI_EFM8BB3_Register_Enums.h>
#include "InitDevice.h"
#include "function_generator.h"

// USER PROTOTYPES
// USER FUNCTIONS

// $[Library Includes]
// [Library Includes]$

//==============================================================================
// enter_DefaultMode_from_RESET
//==============================================================================
extern void enter_DefaultMode_from_RESET(void) {
	// $[Config Calls]
	// Save the SFRPAGE
	uint8_t SFRPAGE_save = SFRPAGE;
	WDT_0_enter_DefaultMode_from_RESET();
	PORTS_0_enter_DefaultMode_from_RESET();
	PORTS_1_enter_DefaultMode_from_RESET();
	PORTS_2_enter_DefaultMode_from_RESET();
	PORTS_3_enter_DefaultMode_from_RESET();
	PBCFG_0_enter_DefaultMode_from_RESET();
	ADC_0_enter_DefaultMode_from_RESET();
	DAC_0_enter_DefaultMode_from_RESET();
	DAC_1_enter_DefaultMode_from_RESET();
	DACGCF_0_enter_DefaultMode_from_RESET();
	VREF_0_enter_DefaultMode_from_RESET();
	CLOCK_0_enter_DefaultMode_from_RESET();
	TIMER01_0_enter_DefaultMode_from_RESET();
	TIMER16_3_enter_DefaultMode_from_RESET();
	TIMER16_4_enter_DefaultMode_from_RESET();
	TIMER_SETUP_0_enter_DefaultMode_from_RESET();
	SPI_0_enter_DefaultMode_from_RESET();
	UART_0_enter_DefaultMode_from_RESET();
	INTERRUPT_0_enter_DefaultMode_from_RESET();
	// Restore the SFRPAGE
	SFRPAGE = SFRPAGE_save;
	// [Config Calls]$

}

//================================================================================
// WDT_0_enter_DefaultMode_from_RESET
//================================================================================
extern void WDT_0_enter_DefaultMode_from_RESET(void) {
	// $[WDTCN - Watchdog Timer Control]
	SFRPAGE = 0x00;
	//Disable Watchdog with key sequence
	WDTCN = 0xDE; //First key
	WDTCN = 0xAD; //Second key
	// [WDTCN - Watchdog Timer Control]$

}

//================================================================================
// PORTS_0_enter_DefaultMode_from_RESET
//================================================================================
extern void PORTS_0_enter_DefaultMode_from_RESET(void) {
	// $[P0 - Port 0 Pin Latch]
	// [P0 - Port 0 Pin Latch]$

	// $[P0MDOUT - Port 0 Output Mode]
	/***********************************************************************
	 - P0.0 output is open-drain
	 - P0.1 output is open-drain
	 - P0.2 output is open-drain
	 - P0.3 output is open-drain
	 - P0.4 output is push-pull
	 - P0.5 output is open-drain
	 - P0.6 output is push-pull
	 - P0.7 output is open-drain
	 ***********************************************************************/
	P0MDOUT = P0MDOUT_B0__OPEN_DRAIN | P0MDOUT_B1__OPEN_DRAIN
			| P0MDOUT_B2__OPEN_DRAIN | P0MDOUT_B3__OPEN_DRAIN
			| P0MDOUT_B4__PUSH_PULL | P0MDOUT_B5__OPEN_DRAIN
			| P0MDOUT_B6__PUSH_PULL | P0MDOUT_B7__OPEN_DRAIN;
	// [P0MDOUT - Port 0 Output Mode]$

	// $[P0MDIN - Port 0 Input Mode]
	/***********************************************************************
	 - P0.0 pin is configured for analog mode
	 - P0.1 pin is configured for digital mode
	 - P0.2 pin is configured for digital mode
	 - P0.3 pin is configured for digital mode
	 - P0.4 pin is configured for digital mode
	 - P0.5 pin is configured for digital mode
	 - P0.6 pin is configured for digital mode
	 - P0.7 pin is configured for digital mode
	 ***********************************************************************/
	P0MDIN = P0MDIN_B0__ANALOG | P0MDIN_B1__DIGITAL | P0MDIN_B2__DIGITAL
			| P0MDIN_B3__DIGITAL | P0MDIN_B4__DIGITAL | P0MDIN_B5__DIGITAL
			| P0MDIN_B6__DIGITAL | P0MDIN_B7__DIGITAL;
	// [P0MDIN - Port 0 Input Mode]$

	// $[P0SKIP - Port 0 Skip]
	/***********************************************************************
	 - P0.0 pin is skipped by the crossbar
	 - P0.1 pin is skipped by the crossbar
	 - P0.2 pin is skipped by the crossbar
	 - P0.3 pin is skipped by the crossbar
	 - P0.4 pin is not skipped by the crossbar
	 - P0.5 pin is not skipped by the crossbar
	 - P0.6 pin is not skipped by the crossbar
	 - P0.7 pin is not skipped by the crossbar
	 ***********************************************************************/
	P0SKIP = P0SKIP_B0__SKIPPED | P0SKIP_B1__SKIPPED | P0SKIP_B2__SKIPPED
			| P0SKIP_B3__SKIPPED | P0SKIP_B4__NOT_SKIPPED
			| P0SKIP_B5__NOT_SKIPPED | P0SKIP_B6__NOT_SKIPPED
			| P0SKIP_B7__NOT_SKIPPED;
	// [P0SKIP - Port 0 Skip]$

	// $[P0MASK - Port 0 Mask]
	/***********************************************************************
	 - P0.0 pin logic value is ignored and will not cause a port mismatch
	 event
	 - P0.1 pin logic value is ignored and will not cause a port mismatch
	 event
	 - P0.2 pin logic value is compared to P0MAT.2
	 - P0.3 pin logic value is compared to P0MAT.3
	 - P0.4 pin logic value is ignored and will not cause a port mismatch
	 event
	 - P0.5 pin logic value is ignored and will not cause a port mismatch
	 event
	 - P0.6 pin logic value is ignored and will not cause a port mismatch
	 event
	 - P0.7 pin logic value is ignored and will not cause a port mismatch
	 event
	 ***********************************************************************/
	P0MASK = P0MASK_B0__IGNORED | P0MASK_B1__IGNORED | P0MASK_B2__COMPARED
			| P0MASK_B3__COMPARED | P0MASK_B4__IGNORED | P0MASK_B5__IGNORED
			| P0MASK_B6__IGNORED | P0MASK_B7__IGNORED;
	// [P0MASK - Port 0 Mask]$

	// $[P0MAT - Port 0 Match]
	// [P0MAT - Port 0 Match]$

}

//================================================================================
// PORTS_1_enter_DefaultMode_from_RESET
//================================================================================
extern void PORTS_1_enter_DefaultMode_from_RESET(void) {
	// $[P1 - Port 1 Pin Latch]
	// [P1 - Port 1 Pin Latch]$

	// $[P1MDOUT - Port 1 Output Mode]
	/***********************************************************************
	 - P1.0 output is push-pull
	 - P1.1 output is open-drain
	 - P1.2 output is open-drain
	 - P1.3 output is open-drain
	 - P1.4 output is open-drain
	 - P1.5 output is open-drain
	 - P1.6 output is open-drain
	 - P1.7 output is open-drain
	 ***********************************************************************/
	P1MDOUT = P1MDOUT_B0__PUSH_PULL | P1MDOUT_B1__OPEN_DRAIN
			| P1MDOUT_B2__OPEN_DRAIN | P1MDOUT_B3__OPEN_DRAIN
			| P1MDOUT_B4__OPEN_DRAIN | P1MDOUT_B5__OPEN_DRAIN
			| P1MDOUT_B6__OPEN_DRAIN | P1MDOUT_B7__OPEN_DRAIN;
	// [P1MDOUT - Port 1 Output Mode]$

	// $[P1MDIN - Port 1 Input Mode]
	/***********************************************************************
	 - P1.0 pin is configured for digital mode
	 - P1.1 pin is configured for analog mode
	 - P1.2 pin is configured for digital mode
	 - P1.3 pin is configured for digital mode
	 - P1.4 pin is configured for digital mode
	 - P1.5 pin is configured for digital mode
	 - P1.6 pin is configured for digital mode
	 - P1.7 pin is configured for analog mode
	 ***********************************************************************/
	P1MDIN = P1MDIN_B0__DIGITAL | P1MDIN_B1__ANALOG | P1MDIN_B2__DIGITAL
			| P1MDIN_B3__DIGITAL | P1MDIN_B4__DIGITAL | P1MDIN_B5__DIGITAL
			| P1MDIN_B6__DIGITAL | P1MDIN_B7__ANALOG;
	// [P1MDIN - Port 1 Input Mode]$

	// $[P1SKIP - Port 1 Skip]
	/***********************************************************************
	 - P1.0 pin is not skipped by the crossbar
	 - P1.1 pin is skipped by the crossbar
	 - P1.2 pin is skipped by the crossbar
	 - P1.3 pin is skipped by the crossbar
	 - P1.4 pin is not skipped by the crossbar
	 - P1.5 pin is not skipped by the crossbar
	 - P1.6 pin is not skipped by the crossbar
	 - P1.7 pin is skipped by the crossbar
	 ***********************************************************************/
	P1SKIP = P1SKIP_B0__NOT_SKIPPED | P1SKIP_B1__SKIPPED | P1SKIP_B2__SKIPPED
			| P1SKIP_B3__SKIPPED | P1SKIP_B4__NOT_SKIPPED
			| P1SKIP_B5__NOT_SKIPPED | P1SKIP_B6__NOT_SKIPPED
			| P1SKIP_B7__SKIPPED;
	// [P1SKIP - Port 1 Skip]$

	// $[P1MASK - Port 1 Mask]
	// [P1MASK - Port 1 Mask]$

	// $[P1MAT - Port 1 Match]
	/***********************************************************************
	 - P1.0 pin logic value is compared with logic HIGH
	 - P1.1 pin logic value is compared with logic HIGH
	 - P1.2 pin logic value is compared with logic HIGH
	 - P1.3 pin logic value is compared with logic HIGH
	 - P1.4 pin logic value is compared with logic HIGH
	 - P1.5 pin logic value is compared with logic HIGH
	 - P1.6 pin logic value is compared with logic HIGH
	 - P1.7 pin logic value is compared with logic LOW
	 ***********************************************************************/
	P1MAT = P1MAT_B0__HIGH | P1MAT_B1__HIGH | P1MAT_B2__HIGH | P1MAT_B3__HIGH
			| P1MAT_B4__HIGH | P1MAT_B5__HIGH | P1MAT_B6__HIGH | P1MAT_B7__LOW;
	// [P1MAT - Port 1 Match]$

}

//================================================================================
// PORTS_2_enter_DefaultMode_from_RESET
//================================================================================
extern void PORTS_2_enter_DefaultMode_from_RESET(void) {
	// $[P2 - Port 2 Pin Latch]
	// [P2 - Port 2 Pin Latch]$

	// $[P2MDOUT - Port 2 Output Mode]
	/***********************************************************************
	 - P2.0 output is push-pull
	 - P2.1 output is open-drain
	 - P2.2 output is open-drain
	 - P2.3 output is push-pull
	 - P2.4 output is open-drain
	 - P2.5 output is open-drain
	 - P2.6 output is push-pull
	 ***********************************************************************/
	P2MDOUT = P2MDOUT_B0__PUSH_PULL | P2MDOUT_B1__OPEN_DRAIN
			| P2MDOUT_B2__OPEN_DRAIN | P2MDOUT_B3__PUSH_PULL
			| P2MDOUT_B4__OPEN_DRAIN | P2MDOUT_B5__OPEN_DRAIN
			| P2MDOUT_B6__PUSH_PULL;
	// [P2MDOUT - Port 2 Output Mode]$

	// $[P2MDIN - Port 2 Input Mode]
	// [P2MDIN - Port 2 Input Mode]$

	// $[P2SKIP - Port 2 Skip]
	/***********************************************************************
	 - P2.0 pin is skipped by the crossbar
	 - P2.1 pin is not skipped by the crossbar
	 - P2.2 pin is not skipped by the crossbar
	 - P2.3 pin is skipped by the crossbar
	 ***********************************************************************/
	SFRPAGE = 0x20;
	P2SKIP = P2SKIP_B0__SKIPPED | P2SKIP_B1__NOT_SKIPPED
			| P2SKIP_B2__NOT_SKIPPED | P2SKIP_B3__SKIPPED;
	// [P2SKIP - Port 2 Skip]$

	// $[P2MASK - Port 2 Mask]
	// [P2MASK - Port 2 Mask]$

	// $[P2MAT - Port 2 Match]
	// [P2MAT - Port 2 Match]$

}

//================================================================================
// PORTS_3_enter_DefaultMode_from_RESET
//================================================================================
extern void PORTS_3_enter_DefaultMode_from_RESET(void) {
	// $[P3 - Port 3 Pin Latch]
	// [P3 - Port 3 Pin Latch]$

	// $[P3MDOUT - Port 3 Output Mode]
	// [P3MDOUT - Port 3 Output Mode]$

	// $[P3MDIN - Port 3 Input Mode]
	/***********************************************************************
	 - P3.0 pin is configured for analog mode
	 - P3.1 pin is configured for analog mode
	 - P3.2 pin is configured for digital mode
	 - P3.3 pin is configured for digital mode
	 - P3.4 pin is configured for digital mode
	 - P3.7 pin is configured for digital mode
	 ***********************************************************************/
	P3MDIN = P3MDIN_B0__ANALOG | P3MDIN_B1__ANALOG | P3MDIN_B2__DIGITAL
			| P3MDIN_B3__DIGITAL | P3MDIN_B4__DIGITAL | P3MDIN_B7__DIGITAL;
	// [P3MDIN - Port 3 Input Mode]$

}

//================================================================================
// PBCFG_0_enter_DefaultMode_from_RESET
//================================================================================
extern void PBCFG_0_enter_DefaultMode_from_RESET(void) {
	// $[XBR2 - Port I/O Crossbar 2]
	/***********************************************************************
	 - Weak Pullups enabled 
	 - Crossbar enabled
	 - UART1 I/O unavailable at Port pin
	 - UART1 RTS1 unavailable at Port pin
	 - UART1 CTS1 unavailable at Port pin
	 ***********************************************************************/
	SFRPAGE = 0x00;
	XBR2 = XBR2_WEAKPUD__PULL_UPS_ENABLED | XBR2_XBARE__ENABLED
			| XBR2_URT1E__DISABLED | XBR2_URT1RTSE__DISABLED
			| XBR2_URT1CTSE__DISABLED;
	// [XBR2 - Port I/O Crossbar 2]$

	// $[PRTDRV - Port Drive Strength]
	// [PRTDRV - Port Drive Strength]$

	// $[XBR0 - Port I/O Crossbar 0]
	/***********************************************************************
	 - UART0 TX0, RX0 routed to Port pins P0.4 and P0.5
	 - SPI I/O routed to Port pins
	 - SMBus 0 I/O unavailable at Port pins
	 - CP0 unavailable at Port pin
	 - Asynchronous CP0 unavailable at Port pin
	 - CP1 unavailable at Port pin
	 - Asynchronous CP1 unavailable at Port pin
	 - SYSCLK unavailable at Port pin
	 ***********************************************************************/
	XBR0 = XBR0_URT0E__ENABLED | XBR0_SPI0E__ENABLED | XBR0_SMB0E__DISABLED
			| XBR0_CP0E__DISABLED | XBR0_CP0AE__DISABLED | XBR0_CP1E__DISABLED
			| XBR0_CP1AE__DISABLED | XBR0_SYSCKE__DISABLED;
	// [XBR0 - Port I/O Crossbar 0]$

	// $[XBR1 - Port I/O Crossbar 1]
	// [XBR1 - Port I/O Crossbar 1]$

}

//================================================================================
// ADC_0_enter_DefaultMode_from_RESET
//================================================================================
extern void ADC_0_enter_DefaultMode_from_RESET(void) {
	// $[ADC0CN2 - ADC0 Control 2]
	/***********************************************************************
	 - ADC0 conversion initiated on overflow of Timer 0
	 - The ADC accumulator is over-written with the results of any conversion
	 ***********************************************************************/
	ADC0CN2 = ADC0CN2_ADCM__TIMER0 | ADC0CN2_PACEN__PAC_DISABLED;
	// [ADC0CN2 - ADC0 Control 2]$

	// $[ADC0CN1 - ADC0 Control 1]
	/***********************************************************************
	 - ADC0 operates in 10-bit mode
	 - Right justified. No shifting applied
	 - Perform and Accumulate 1 conversion
	 ***********************************************************************/
	ADC0CN1 = ADC0CN1_ADBITS__10_BIT | ADC0CN1_ADSJST__RIGHT_NO_SHIFT
			| ADC0CN1_ADRPT__ACC_1;
	// [ADC0CN1 - ADC0 Control 1]$

	// $[ADC0MX - ADC0 Multiplexer Selection]
	/***********************************************************************
	 - Select ADC0.13
	 ***********************************************************************/
	ADC0MX = ADC0MX_ADC0MX__ADC0P13;
	// [ADC0MX - ADC0 Multiplexer Selection]$

	// $[ADC0CF2 - ADC0 Power Control]
	/***********************************************************************
	 - The ADC0 ground reference is the GND pin
	 - The ADC0 voltage reference is the VDD pin
	 - Power Up Delay Time = 0x1F
	 ***********************************************************************/
	ADC0CF2 = ADC0CF2_GNDSL__GND_PIN | ADC0CF2_REFSL__VDD_PIN
			| (0x1F << ADC0CF2_ADPWR__SHIFT);
	// [ADC0CF2 - ADC0 Power Control]$

	// $[ADC0CF0 - ADC0 Configuration]
	/***********************************************************************
	 - ADCCLK = SYSCLK
	 - SAR Clock Divider = 0x01
	 ***********************************************************************/
	ADC0CF0 = ADC0CF0_ADCLKSEL__SYSCLK | (0x01 << ADC0CF0_ADSC__SHIFT);
	// [ADC0CF0 - ADC0 Configuration]$

	// $[ADC0CF1 - ADC0 Configuration]
	/***********************************************************************
	 - Disable low power mode
	 - Conversion Tracking Time = 0x01
	 ***********************************************************************/
	ADC0CF1 = ADC0CF1_ADLPM__LP_DISABLED | (0x01 << ADC0CF1_ADTK__SHIFT);
	// [ADC0CF1 - ADC0 Configuration]$

	// $[ADC0ASAL - ADC0 Autoscan Start Address Low Byte]
	// [ADC0ASAL - ADC0 Autoscan Start Address Low Byte]$

	// $[ADC0GTH - ADC0 Greater-Than High Byte]
	// [ADC0GTH - ADC0 Greater-Than High Byte]$

	// $[ADC0GTL - ADC0 Greater-Than Low Byte]
	// [ADC0GTL - ADC0 Greater-Than Low Byte]$

	// $[ADC0LTH - ADC0 Less-Than High Byte]
	// [ADC0LTH - ADC0 Less-Than High Byte]$

	// $[ADC0LTL - ADC0 Less-Than Low Byte]
	// [ADC0LTL - ADC0 Less-Than Low Byte]$

	// $[ADC0ASCF - ADC0 Autoscan Configuration]
	// [ADC0ASCF - ADC0 Autoscan Configuration]$

	// $[ADC0CN0 - ADC0 Control 0]
	/***********************************************************************
	 - Enable ADC0 
	 ***********************************************************************/
	ADC0CN0 |= ADC0CN0_ADEN__ENABLED;
	// [ADC0CN0 - ADC0 Control 0]$

}

//================================================================================
// DAC_0_enter_DefaultMode_from_RESET
//================================================================================
extern void DAC_0_enter_DefaultMode_from_RESET(void) {
	// $[DAC0CF0 - DAC0 Configuration 0]
	/***********************************************************************
	 - DAC0 is enabled and will drive the output pin
	 - DAC0 output updates occur on Timer 4 high byte overflow
	 - DAC0 input is treated as right-justified
	 - All resets will reset DAC0 and its associated registers
	 ***********************************************************************/
	SFRPAGE = 0x30;
	DAC0CF0 = DAC0CF0_EN__ENABLE | DAC0CF0_UPDATE__TIMER4
			| DAC0CF0_LJST__RIGHT_JUSTIFY | DAC0CF0_RSTMD__NORMAL;
	// [DAC0CF0 - DAC0 Configuration 0]$

	// $[DAC0CF1 - DAC0 Configuration 1]
	// [DAC0CF1 - DAC0 Configuration 1]$

}

//================================================================================
// DAC_1_enter_DefaultMode_from_RESET
//================================================================================
extern void DAC_1_enter_DefaultMode_from_RESET(void) {
	// $[DAC1CF0 - DAC1 Configuration 0]
	/***********************************************************************
	 - DAC1 is enabled and will drive the output pin
	 - DAC1 output updates occur on Timer 4 high byte overflow
	 - DAC1 input is treated as right-justified
	 - All resets will reset DAC1 and its associated registers
	 ***********************************************************************/
	DAC1CF0 = DAC1CF0_EN__ENABLE | DAC1CF0_UPDATE__TIMER4
			| DAC1CF0_LJST__RIGHT_JUSTIFY | DAC1CF0_RSTMD__NORMAL;
	// [DAC1CF0 - DAC1 Configuration 0]$

	// $[DAC1CF1 - DAC1 Configuration 1]
	// [DAC1CF1 - DAC1 Configuration 1]$

}

//================================================================================
// DACGCF_0_enter_DefaultMode_from_RESET
//================================================================================
extern void DACGCF_0_enter_DefaultMode_from_RESET(void) {
	// $[DACGCF0 - DAC Global Configuration 0]
	/***********************************************************************
	 - Select the VREF pin
	 - Select the VDD supply
	 - Input = DAC1H:DAC1L
	 - Input = DAC3H:DAC3L
	 - DAC1 always updates from the data source selected in D1SRC
	 - DAC3 always updates from the data source selected in D3SRC
	 ***********************************************************************/
	DACGCF0 = DACGCF0_D01REFSL__VREF | DACGCF0_D23REFSL__VDD
			| DACGCF0_D1SRC__DAC1 | DACGCF0_D3SRC__DAC3 | DACGCF0_D1AMEN__NORMAL
			| DACGCF0_D3AMEN__NORMAL;
	// [DACGCF0 - DAC Global Configuration 0]$

	// $[DACGCF2 - DAC Global Configuration 2]
	// [DACGCF2 - DAC Global Configuration 2]$

}

//================================================================================
// VREF_0_enter_DefaultMode_from_RESET
//================================================================================
extern void VREF_0_enter_DefaultMode_from_RESET(void) {
	// $[REF0CN - Voltage Reference Control]
	/***********************************************************************
	 - 2.4 V reference output to VREF pin
	 ***********************************************************************/
	SFRPAGE = 0x00;
	REF0CN = REF0CN_VREFSL__VREF_2P4;
	// [REF0CN - Voltage Reference Control]$

}

//================================================================================
// CLOCK_0_enter_DefaultMode_from_RESET
//================================================================================
extern void CLOCK_0_enter_DefaultMode_from_RESET(void) {
	// $[HFOSC1 Setup]
	// [HFOSC1 Setup]$

	// $[CLKSEL - Clock Select]
	/***********************************************************************
	 - Clock derived from the Internal High Frequency Oscillator 0
	 - SYSCLK is equal to selected clock source divided by 1
	 ***********************************************************************/
	CLKSEL = CLKSEL_CLKSL__HFOSC0 | CLKSEL_CLKDIV__SYSCLK_DIV_1;
	while ((CLKSEL & CLKSEL_DIVRDY__BMASK) == CLKSEL_DIVRDY__NOT_READY)
		;
	// [CLKSEL - Clock Select]$

}

//================================================================================
// TIMER01_0_enter_DefaultMode_from_RESET
//================================================================================
extern void TIMER01_0_enter_DefaultMode_from_RESET(void) {
	// $[Timer Initialization]
	//Save Timer Configuration
	uint8_t TCON_save;
	TCON_save = TCON;
	//Stop Timers
	TCON &= ~TCON_TR0__BMASK & ~TCON_TR1__BMASK;

	// [Timer Initialization]$

	// $[TH0 - Timer 0 High Byte]
	/***********************************************************************
	 - Timer 0 High Byte = 0x01
	 ***********************************************************************/
	TH0 = (0x01 << TH0_TH0__SHIFT);
	// [TH0 - Timer 0 High Byte]$

	// $[TL0 - Timer 0 Low Byte]
	// [TL0 - Timer 0 Low Byte]$

	// $[TH1 - Timer 1 High Byte]
	/***********************************************************************
	 - Timer 1 High Byte = 0x96
	 ***********************************************************************/
	TH1 = (0x96 << TH1_TH1__SHIFT);
	// [TH1 - Timer 1 High Byte]$

	// $[TL1 - Timer 1 Low Byte]
	// [TL1 - Timer 1 Low Byte]$

	// $[Timer Restoration]
	//Restore Timer Configuration
	TCON |= (TCON_save & TCON_TR0__BMASK) | (TCON_save & TCON_TR1__BMASK);

	// [Timer Restoration]$

}

//================================================================================
// TIMER16_3_enter_DefaultMode_from_RESET
//================================================================================
extern void TIMER16_3_enter_DefaultMode_from_RESET(void) {
	// $[Timer Initialization]
	// Save Timer Configuration
	uint8_t TMR3CN0_TR3_save;
	TMR3CN0_TR3_save = TMR3CN0 & TMR3CN0_TR3__BMASK;
	// Stop Timer
	TMR3CN0 &= ~(TMR3CN0_TR3__BMASK);
	// [Timer Initialization]$

	// $[TMR3CN1 - Timer 3 Control 1]
	// [TMR3CN1 - Timer 3 Control 1]$

	// $[TMR3CN0 - Timer 3 Control]
	// [TMR3CN0 - Timer 3 Control]$

	// $[TMR3H - Timer 3 High Byte]
	/***********************************************************************
	 - Timer 3 High Byte = 0xF8
	 ***********************************************************************/
	TMR3H = (0xF8 << TMR3H_TMR3H__SHIFT);
	// [TMR3H - Timer 3 High Byte]$

	// $[TMR3L - Timer 3 Low Byte]
	/***********************************************************************
	 - Timer 3 Low Byte = 0x06
	 ***********************************************************************/
	TMR3L = (0x06 << TMR3L_TMR3L__SHIFT);
	// [TMR3L - Timer 3 Low Byte]$

	// $[TMR3RLH - Timer 3 Reload High Byte]
	/***********************************************************************
	 - Timer 3 Reload High Byte = 0xF8
	 ***********************************************************************/
	TMR3RLH = (0xF8 << TMR3RLH_TMR3RLH__SHIFT);
	// [TMR3RLH - Timer 3 Reload High Byte]$

	// $[TMR3RLL - Timer 3 Reload Low Byte]
	/***********************************************************************
	 - Timer 3 Reload Low Byte = 0x06
	 ***********************************************************************/
	TMR3RLL = (0x06 << TMR3RLL_TMR3RLL__SHIFT);
	// [TMR3RLL - Timer 3 Reload Low Byte]$

	// $[TMR3CN0]
	/***********************************************************************
	 - Start Timer 3 running
	 ***********************************************************************/
	TMR3CN0 |= TMR3CN0_TR3__RUN;
	// [TMR3CN0]$

	// $[Timer Restoration]
	// Restore Timer Configuration
	TMR3CN0 |= TMR3CN0_TR3_save;
	// [Timer Restoration]$

}

//================================================================================
// TIMER16_4_enter_DefaultMode_from_RESET
//================================================================================
extern void TIMER16_4_enter_DefaultMode_from_RESET(void) {
	// $[Timer Initialization]
	// Save Timer Configuration
	uint8_t TMR4CN0_TR4_save;
	SFRPAGE = 0x10;
	TMR4CN0_TR4_save = TMR4CN0 & TMR4CN0_TR4__BMASK;
	// Stop Timer
	TMR4CN0 &= ~(TMR4CN0_TR4__BMASK);
	// [Timer Initialization]$

	// $[TMR4CN1 - Timer 4 Control 1]
	// [TMR4CN1 - Timer 4 Control 1]$

	// $[TMR4CN0 - Timer 4 Control]
	// [TMR4CN0 - Timer 4 Control]$

	// $[TMR4H - Timer 4 High Byte]
	/***********************************************************************
	 - Timer 4 High Byte = 0xFE
	 ***********************************************************************/
	TMR4H = (0xFE << TMR4H_TMR4H__SHIFT);
	// [TMR4H - Timer 4 High Byte]$

	// $[TMR4L - Timer 4 Low Byte]
	/***********************************************************************
	 - Timer 4 Low Byte = 0x68
	 ***********************************************************************/
	TMR4L = (0x68 << TMR4L_TMR4L__SHIFT);
	// [TMR4L - Timer 4 Low Byte]$

	// $[TMR4RLH - Timer 4 Reload High Byte]
	/***********************************************************************
	 - Timer 4 Reload High Byte = 0xFE
	 ***********************************************************************/
	TMR4RLH = (0xFE << TMR4RLH_TMR4RLH__SHIFT);
	// [TMR4RLH - Timer 4 Reload High Byte]$

	// $[TMR4RLL - Timer 4 Reload Low Byte]
	/***********************************************************************
	 - Timer 4 Reload Low Byte = 0x68
	 ***********************************************************************/
	TMR4RLL = (0x68 << TMR4RLL_TMR4RLL__SHIFT);
	// [TMR4RLL - Timer 4 Reload Low Byte]$

	TMR4RL = (uint16_t)(-SYSCLK / SAMPLE_RATE_DAC);
	// $[TMR4CN0]
	/***********************************************************************
	 - Start Timer 4 running
	 ***********************************************************************/
	TMR4CN0 |= TMR4CN0_TR4__RUN;
	// [TMR4CN0]$

	// $[Timer Restoration]
	// Restore Timer Configuration
	TMR4CN0 |= TMR4CN0_TR4_save;
	// [Timer Restoration]$

}

//================================================================================
// TIMER_SETUP_0_enter_DefaultMode_from_RESET
//================================================================================
extern void TIMER_SETUP_0_enter_DefaultMode_from_RESET(void) {
	// $[CKCON0 - Clock Control 0]
	/***********************************************************************
	 - System clock divided by 48
	 - Counter/Timer 0 uses the clock defined by the prescale field, SCA
	 - Timer 2 high byte uses the clock defined by T2XCLK in TMR2CN0
	 - Timer 2 low byte uses the clock defined by T2XCLK in TMR2CN0
	 - Timer 3 high byte uses the clock defined by T3XCLK in TMR3CN0
	 - Timer 3 low byte uses the clock defined by T3XCLK in TMR3CN0
	 - Timer 1 uses the system clock
	 ***********************************************************************/
	SFRPAGE = 0x00;
	CKCON0 = CKCON0_SCA__SYSCLK_DIV_48 | CKCON0_T0M__PRESCALE
			| CKCON0_T2MH__EXTERNAL_CLOCK | CKCON0_T2ML__EXTERNAL_CLOCK
			| CKCON0_T3MH__EXTERNAL_CLOCK | CKCON0_T3ML__EXTERNAL_CLOCK
			| CKCON0_T1M__SYSCLK;
	// [CKCON0 - Clock Control 0]$

	// $[CKCON1 - Clock Control 1]
	/***********************************************************************
	 - Timer 4 high byte uses the clock defined by T4XCLK in TMR4CN0
	 - Timer 4 low byte uses the system clock
	 - Timer 5 high byte uses the clock defined by T5XCLK in TMR5CN0
	 - Timer 5 low byte uses the clock defined by T5XCLK in TMR5CN0
	 ***********************************************************************/
	SFRPAGE = 0x10;
	CKCON1 = CKCON1_T4MH__EXTERNAL_CLOCK | CKCON1_T4ML__SYSCLK
			| CKCON1_T5MH__EXTERNAL_CLOCK | CKCON1_T5ML__EXTERNAL_CLOCK;
	// [CKCON1 - Clock Control 1]$

	// $[TMOD - Timer 0/1 Mode]
	/***********************************************************************
	 - Mode 2, 8-bit Counter/Timer with Auto-Reload
	 - Mode 2, 8-bit Counter/Timer with Auto-Reload
	 - Timer Mode
	 - Timer 0 enabled when TR0 = 1 irrespective of INT0 logic level
	 - Timer Mode
	 - Timer 1 enabled when TR1 = 1 irrespective of INT1 logic level
	 ***********************************************************************/
	SFRPAGE = 0x00;
	TMOD = TMOD_T0M__MODE2 | TMOD_T1M__MODE2 | TMOD_CT0__TIMER
			| TMOD_GATE0__DISABLED | TMOD_CT1__TIMER | TMOD_GATE1__DISABLED;
	// [TMOD - Timer 0/1 Mode]$

	// $[TCON - Timer 0/1 Control]
	/***********************************************************************
	 - Start Timer 0 running
	 - Start Timer 1 running
	 ***********************************************************************/
	TCON |= TCON_TR0__RUN | TCON_TR1__RUN;
	// [TCON - Timer 0/1 Control]$

}

//================================================================================
// SPI_0_enter_DefaultMode_from_RESET
//================================================================================
extern void SPI_0_enter_DefaultMode_from_RESET(void) {
	// $[SPI0CKR - SPI0 Clock Rate]
	/***********************************************************************
	 - SPI0 Clock Rate = 0x0B
	 ***********************************************************************/
	SPI0CKR = (0x0B << SPI0CKR_SPI0CKR__SHIFT);
	// [SPI0CKR - SPI0 Clock Rate]$

	// $[SPI0CFG - SPI0 Configuration]
	/***********************************************************************
	 - Enable master mode. Operate as a master
	 ***********************************************************************/
	SPI0CFG |= SPI0CFG_MSTEN__MASTER_ENABLED;
	// [SPI0CFG - SPI0 Configuration]$

	// $[SPI0PCF - SPI0 Pin Configuration]
	// [SPI0PCF - SPI0 Pin Configuration]$

	// $[SPI0CN0 - SPI0 Control]
	/***********************************************************************
	 - Enable the SPI module
	 - 3-Wire Slave or 3-Wire Master Mode
	 ***********************************************************************/
	SPI0CN0 &= ~SPI0CN0_NSSMD__FMASK;
	SPI0CN0 |= SPI0CN0_SPIEN__ENABLED;
	// [SPI0CN0 - SPI0 Control]$

	// $[SPI0FCN0 - SPI0 FIFO Control 0]
	// [SPI0FCN0 - SPI0 FIFO Control 0]$

	// $[SPI0FCN1 - SPI0 FIFO Control 1]
	// [SPI0FCN1 - SPI0 FIFO Control 1]$

}

//================================================================================
// INTERRUPT_0_enter_DefaultMode_from_RESET
//================================================================================
extern void INTERRUPT_0_enter_DefaultMode_from_RESET(void) {
	// $[EIE1 - Extended Interrupt Enable 1]
	/***********************************************************************
	 - Enable interrupt requests generated by the ADINT flag
	 - Disable ADC0 Window Comparison interrupt
	 - Disable CP0 interrupts
	 - Disable CP1 interrupts
	 - Enable interrupt requests generated by a Port Match
	 - Disable all PCA0 interrupts
	 - Disable all SMB0 interrupts
	 - Enable interrupt requests generated by the TF3L or TF3H flags
	 ***********************************************************************/
	EIE1 = EIE1_EADC0__ENABLED | EIE1_EWADC0__DISABLED | EIE1_ECP0__DISABLED
			| EIE1_ECP1__DISABLED | EIE1_EMAT__ENABLED | EIE1_EPCA0__DISABLED
			| EIE1_ESMB0__DISABLED | EIE1_ET3__ENABLED;
	// [EIE1 - Extended Interrupt Enable 1]$

	// $[EIE2 - Extended Interrupt Enable 2]
	// [EIE2 - Extended Interrupt Enable 2]$

	// $[EIP1H - Extended Interrupt Priority 1 High]
	// [EIP1H - Extended Interrupt Priority 1 High]$

	// $[EIP1 - Extended Interrupt Priority 1 Low]
	// [EIP1 - Extended Interrupt Priority 1 Low]$

	// $[EIP2 - Extended Interrupt Priority 2]
	// [EIP2 - Extended Interrupt Priority 2]$

	// $[EIP2H - Extended Interrupt Priority 2 High]
	// [EIP2H - Extended Interrupt Priority 2 High]$

	// $[IE - Interrupt Enable]
	/***********************************************************************
	 - Disable all interrupt sources
	 - Disable external interrupt 0
	 - Disable external interrupt 1
	 - Enable interrupt requests generated by SPI0
	 - Disable all Timer 0 interrupt
	 - Disable all Timer 1 interrupt
	 - Enable interrupt requests generated by the TF2L or TF2H flags
	 - Disable UART0 interrupt
	 ***********************************************************************/
	IE = IE_EA__DISABLED | IE_EX0__DISABLED | IE_EX1__DISABLED
			| IE_ESPI0__ENABLED | IE_ET0__DISABLED | IE_ET1__DISABLED
			| IE_ET2__ENABLED | IE_ES0__DISABLED;
	// [IE - Interrupt Enable]$

	// $[IP - Interrupt Priority]
	// [IP - Interrupt Priority]$

	// $[IPH - Interrupt Priority High]
	// [IPH - Interrupt Priority High]$

}

extern void UART_0_enter_DefaultMode_from_RESET(void) {
	// $[SCON0 - UART0 Serial Port Control]
	/***********************************************************************
	 - UART0 reception enabled
	 ***********************************************************************/
	SCON0 |= SCON0_REN__RECEIVE_ENABLED;
	// [SCON0 - UART0 Serial Port Control]$

}

