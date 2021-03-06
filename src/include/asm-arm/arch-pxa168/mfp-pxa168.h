/*
 * linux/include/asm-arm/arch-pxa/mfp-pxa9xx.h
 *
 * PXA910 specific MFP configuration definitions
 *
 * Copyright (C) 2008 Marvell International Ltd.
 * 2008-10-15: bin yang <bin.yang@marvell.com>
 *             initial version
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 */

#ifndef __ASM_ARCH_MFP_PXA910_H
#define __ASM_ARCH_MFP_PXA910_H

#include <asm/arch/mfp.h>

/*Slave reset out*/
#define SLAVE_RESET_OUT_GPIO122       MFP_CFG(SLAVE_RESET_OUT, AF1)

/* UART2 */
#define GPIO47_UART2_RXD              MFP_CFG(GPIO47, AF6)
#define GPIO48_UART2_TXD              MFP_CFG(GPIO48, AF6)

#ifdef CONFIG_CPU_PXA910_168
#define GPIO107_FFTXD               MFP_CFG(GPIO107, AF2)
#define GPIO108_FFRXD               MFP_CFG(GPIO108, AF2)
#endif

/*IRDA*/
#define GPIO51_IRDA_SHDN              MFP_CFG(GPIO51, AF0)
/* UART3 */
#define GPIO31_UART3_RXD              MFP_CFG(GPIO31, AF4)
#define GPIO32_UART3_TXD              MFP_CFG(GPIO32, AF4)

/* SMC */
#define SM_nCS0_nCS0           	 MFP_CFG(SM_nCS0, AF0)
#define SM_nCS1_nCS1           	 MFP_CFG(SM_nCS1, AF0)
#define SM_ADV_SM_ADV        MFP_CFG(SM_ADV, AF0)
#define SM_SCLK_SM_SCLK        MFP_CFG(SM_SCLK, AF0)
#define SM_BE0_SM_BE0        MFP_CFG(SM_BE0, AF1)
#define SM_BE1_SM_BE1        MFP_CFG(SM_BE1, AF1)
#define DF_RDY1_DF_RDY1        MFP_CFG(DF_RDY1, AF0)
#define DF_nCS1_SM_nCS3_nCS3        MFP_CFG(DF_nCS1_SM_nCS3, AF0)
#define SM_ADVMUX_SM_ADVMUX        MFP_CFG(SM_ADVMUX, AF0)

/* I2C */
#define GPIO53_CI2C_SCL             MFP_CFG(GPIO53, AF2)
#define GPIO54_CI2C_SDA             MFP_CFG(GPIO54, AF2)

#ifdef CONFIG_CPU_PXA910_168
#define	GPIO87_PI2C_SDA             MFP_CFG(GPIO87, AF0)
#define	GPIO88_PI2C_SCL             MFP_CFG(GPIO88, AF0)
#define	GPIO105_CI2C_SDA            MFP_CFG(GPIO105, AF1)
#define	GPIO106_CI2C_SCL            MFP_CFG(GPIO106, AF1)
#endif

/* SSP1 (I2S) */ 
#define GPIO24_SSP1_SDATA_IN        MFP_CFG_DRV(GPIO24, AF1, DS06X)
#define GPIO21_SSP1_BITCLK          MFP_CFG_DRV(GPIO21, AF1, DS06X)
#define GPIO20_SSP1_SYSCLK          MFP_CFG_DRV(GPIO20, AF1, DS06X)
#define GPIO22_SSP1_SYNC            MFP_CFG_DRV(GPIO22, AF1, DS06X)
#define GPIO23_SSP1_DATA_OUT        MFP_CFG_DRV(GPIO23, AF1, DS06X)
#define GPIO124_MN_CLK_OUT		MFP_CFG_DRV(GPIO124, AF1, DS06X)
#define GPIO123_CLK_REQ		MFP_CFG_DRV(GPIO123, AF0, DS06X)


/* DFI */
#define PXA910_DF_IO0_ND_IO0               MFP_CFG_LPM(DF_IO0, AF0, PULL_LOW)
#define PXA910_DF_IO1_ND_IO1               MFP_CFG_LPM(DF_IO1, AF0, PULL_LOW)
#define PXA910_DF_IO2_ND_IO2               MFP_CFG_LPM(DF_IO2, AF0, PULL_LOW)
#define PXA910_DF_IO3_ND_IO3               MFP_CFG_LPM(DF_IO3, AF0, PULL_LOW)
#define PXA910_DF_IO4_ND_IO4               MFP_CFG_LPM(DF_IO4, AF0, PULL_LOW)
#define PXA910_DF_IO5_ND_IO5               MFP_CFG_LPM(DF_IO5, AF0, PULL_LOW)
#define PXA910_DF_IO6_ND_IO6               MFP_CFG_LPM(DF_IO6, AF0, PULL_LOW)
#define PXA910_DF_IO7_ND_IO7               MFP_CFG_LPM(DF_IO7, AF0, PULL_LOW)
#define PXA910_DF_IO8_ND_IO8               MFP_CFG_LPM(DF_IO8, AF0, PULL_LOW)
#define PXA910_DF_IO9_ND_IO9               MFP_CFG_LPM(DF_IO9, AF0, PULL_LOW)
#define PXA910_DF_IO10_ND_IO10             MFP_CFG_LPM(DF_IO10, AF0, PULL_LOW)
#define PXA910_DF_IO11_ND_IO11             MFP_CFG_LPM(DF_IO11, AF0, PULL_LOW)
#define PXA910_DF_IO12_ND_IO12             MFP_CFG_LPM(DF_IO12, AF0, PULL_LOW)
#define PXA910_DF_IO13_ND_IO13             MFP_CFG_LPM(DF_IO13, AF0, PULL_LOW)
#define PXA910_DF_IO14_ND_IO14             MFP_CFG_LPM(DF_IO14, AF0, PULL_LOW)
#define PXA910_DF_IO15_ND_IO15             MFP_CFG_LPM(DF_IO15, AF0, PULL_LOW)
#define DF_nCS0_SM_nCS2_nCS0        MFP_CFG(DF_nCS0_SM_nCS2, AF0)
#define DF_ALE_SM_WEn_ND_ALE        MFP_CFG(DF_ALE_SM_WEn, AF1)
#define DF_CLE_SM_OEn_ND_CLE        MFP_CFG(DF_CLE_SM_OEn, AF0)
#define DF_WEn_DF_WEn	        MFP_CFG(DF_WEn, AF1)
#define DF_REn_DF_REn	        MFP_CFG(DF_REn, AF1)
#define DF_RDY0_DF_RDY0	        MFP_CFG(DF_RDY0, AF0)
/*keypad*/
#define GPIO00_KP_MKIN0          MFP_CFG_LPM(GPIO0, AF1,PULL_LOW)
#define GPIO01_KP_MKOUT0          MFP_CFG(GPIO1, AF1)
#define GPIO02_KP_MKIN1          MFP_CFG_LPM(GPIO2, AF1,PULL_LOW)
#define GPIO03_KP_MKOUT1          MFP_CFG(GPIO3, AF1)
#define GPIO04_KP_MKIN2          MFP_CFG_LPM(GPIO4, AF1,PULL_LOW)
#define GPIO05_KP_MKOUT2          MFP_CFG(GPIO5, AF1)
#define GPIO06_KP_MKIN3         MFP_CFG_LPM(GPIO6, AF1,PULL_LOW)
#define GPIO07_KP_MKOUT3          MFP_CFG(GPIO7, AF1)
#define GPIO08_KP_MKIN4         MFP_CFG_LPM(GPIO8, AF1,PULL_LOW)
#define GPIO09_KP_MKOUT4          MFP_CFG(GPIO9, AF1)
#define GPIO10_KP_MKIN5         MFP_CFG_LPM(GPIO10, AF1,PULL_LOW)
#define GPIO11_KP_MKOUT5          MFP_CFG(GPIO11, AF1)
#define GPIO12_KP_MKIN6         MFP_CFG_LPM(GPIO12, AF1,PULL_LOW)
#define GPIO13_KP_MKOUT6          MFP_CFG(GPIO13, AF1)
#define GPIO14_KP_MKIN7         MFP_CFG_LPM(GPIO14, AF1,PULL_LOW)
#define GPIO15_KP_MKOUT7          MFP_CFG(GPIO15, AF1)
#define GPIO16_KP_DKIN0         MFP_CFG_LPM(GPIO16, AF1,PULL_LOW)
#define GPIO17_KP_DKIN1          MFP_CFG_LPM(GPIO17, AF1,PULL_LOW)
#define GPIO18_KP_DKIN2          MFP_CFG_LPM(GPIO18, AF1,PULL_LOW)
#define GPIO19_KP_DKIN3          MFP_CFG_LPM(GPIO19, AF1,PULL_LOW)
/* LCD */
#define GPIO81_LCD_FCLK          MFP_CFG(GPIO81, AF1)
#define GPIO82_LCD_LCLK          MFP_CFG(GPIO82, AF1)
#define GPIO83_LCD_PCLK          MFP_CFG(GPIO83, AF1)
#define GPIO84_LCD_DENA        	    MFP_CFG(GPIO84, AF1)
#define GPIO85_LCD_DD0              MFP_CFG(GPIO85, AF1)
#define GPIO86_LCD_DD1              MFP_CFG(GPIO86, AF1)
#define GPIO87_LCD_DD2              MFP_CFG(GPIO87, AF1)
#define GPIO88_LCD_DD3              MFP_CFG(GPIO88, AF1)
#define GPIO89_LCD_DD4              MFP_CFG(GPIO89, AF1)
#define GPIO90_LCD_DD5              MFP_CFG(GPIO90, AF1)
#define GPIO91_LCD_DD6              MFP_CFG(GPIO91, AF1)
#define GPIO92_LCD_DD7              MFP_CFG(GPIO92, AF1)
#define GPIO93_LCD_DD8              MFP_CFG(GPIO93, AF1)
#define GPIO94_LCD_DD9              MFP_CFG(GPIO94, AF1)
#define GPIO95_LCD_DD10             MFP_CFG(GPIO95, AF1)
#define GPIO96_LCD_DD11             MFP_CFG(GPIO96, AF1)
#define GPIO97_LCD_DD12             MFP_CFG(GPIO97, AF1)
#define GPIO98_LCD_DD13             MFP_CFG(GPIO98, AF1)
#define GPIO100_LCD_DD14             MFP_CFG(GPIO100, AF1)
#define GPIO101_LCD_DD15             MFP_CFG(GPIO101, AF1)
#define GPIO102_LCD_DD16             MFP_CFG(GPIO102, AF1)
#define GPIO103_LCD_DD17             MFP_CFG(GPIO103, AF1)
#define GPIO104_LCD_DD18             MFP_CFG(GPIO104, AF1)
#define GPIO105_LCD_DD19             MFP_CFG(GPIO105, AF1)
#define GPIO106_LCD_DD20             MFP_CFG(GPIO106, AF1)
#define GPIO107_LCD_DD21             MFP_CFG(GPIO107, AF1)
#define GPIO108_LCD_DD22             MFP_CFG(GPIO108, AF1)
#define GPIO109_LCD_DD23             MFP_CFG(GPIO109, AF1)

#ifdef CONFIG_CPU_PXA910_168

#define GPIO84_LCD_CS                   MFP_CFG_DRV(GPIO84, AF1,DS04X)            
#define GPIO60_LCD_DD0                  MFP_CFG_DRV(GPIO60, AF1,DS04X)            
#define GPIO61_LCD_DD1                  MFP_CFG_DRV(GPIO61, AF1,DS04X)            
#define GPIO70_LCD_DD10                 MFP_CFG_DRV(GPIO70, AF1,DS04X)            
#define GPIO71_LCD_DD11                 MFP_CFG_DRV(GPIO71, AF1,DS04X)            
#define GPIO72_LCD_DD12                 MFP_CFG_DRV(GPIO72, AF1,DS04X)            
#define GPIO73_LCD_DD13                 MFP_CFG_DRV(GPIO73, AF1,DS04X)            
#define GPIO74_LCD_DD14                 MFP_CFG_DRV(GPIO74, AF1,DS04X)            
#define GPIO75_LCD_DD15                 MFP_CFG_DRV(GPIO75, AF1,DS04X)            
#define GPIO76_LCD_DD16                 MFP_CFG_DRV(GPIO76, AF1,DS04X)            
#define GPIO77_LCD_DD17                 MFP_CFG_DRV(GPIO77, AF1,DS04X)            
#define GPIO78_LCD_DD18                 MFP_CFG_DRV(GPIO78, AF1,DS04X)            
#define GPIO79_LCD_DD19                 MFP_CFG_DRV(GPIO79, AF1,DS04X)            
#define GPIO62_LCD_DD2                  MFP_CFG_DRV(GPIO62, AF1,DS04X)            
#define GPIO80_LCD_DD20                 MFP_CFG_DRV(GPIO80, AF1,DS04X)            
#define GPIO81_LCD_DD21                 MFP_CFG_DRV(GPIO81, AF1,DS04X)            
#define GPIO82_LCD_DD22                 MFP_CFG_DRV(GPIO82, AF1,DS04X)            
#define GPIO83_LCD_DD23                 MFP_CFG_DRV(GPIO83, AF1,DS04X)            
#define GPIO63_LCD_DD3                  MFP_CFG_DRV(GPIO63, AF1,DS04X)            
#define GPIO64_LCD_DD4                  MFP_CFG_DRV(GPIO64, AF1,DS04X)            
#define GPIO65_LCD_DD5                  MFP_CFG_DRV(GPIO65, AF1,DS04X)            
#define GPIO66_LCD_DD6                  MFP_CFG_DRV(GPIO66, AF1,DS04X)            
#define GPIO67_LCD_DD7                  MFP_CFG_DRV(GPIO67, AF1,DS04X)            
#define GPIO68_LCD_DD8                  MFP_CFG_DRV(GPIO68, AF1,DS04X)            
#define GPIO69_LCD_DD9                  MFP_CFG_DRV(GPIO69, AF1,DS04X)            
#define GPIO59_LCD_DENA_BIAS            MFP_CFG_DRV(GPIO59, AF1,DS04X)            
#define GPIO56_LCD_FCLK_RD              MFP_CFG_DRV(GPIO56, AF1,DS04X)            
#define GPIO57_LCD_LCLK_A0              MFP_CFG_DRV(GPIO57, AF1,DS04X)            
#define GPIO58_LCD_PCLK_WR              MFP_CFG_DRV(GPIO58, AF1,DS04X)            
#define GPIO85_LCD_VSYNC                MFP_CFG_DRV(GPIO85, AF1,DS04X) 

#define GPIO113_I2S_MCLK		MFP_CFG_DRV(GPIO113,AF6,DS04X)
#define GPIO114_I2S_FRM			MFP_CFG_DRV(GPIO114,AF1,DS04X)
#define GPIO115_I2S_BCLK		MFP_CFG_DRV(GPIO115,AF1,DS04X)
#define GPIO116_I2S_RXD			MFP_CFG_DRV(GPIO116,AF2,DS04X)
#define GPIO117_I2S_TXD			MFP_CFG_DRV(GPIO117,AF2,DS04X)
#endif

/*1wire*/
#define GPIO106_1WIRE            	MFP_CFG(GPIO106, AF3)
/*CCIC*/
#define GPIO67_CCIC_IN7			MFP_CFG_DRV(GPIO67, AF1, DS06X)
#define GPIO68_CCIC_IN6			MFP_CFG_DRV(GPIO68, AF1, DS06X)
#define GPIO69_CCIC_IN5                 MFP_CFG_DRV(GPIO69, AF1, DS06X)
#define GPIO70_CCIC_IN4                 MFP_CFG_DRV(GPIO70, AF1, DS06X)
#define GPIO71_CCIC_IN3                 MFP_CFG_DRV(GPIO71, AF1, DS06X)
#define GPIO72_CCIC_IN2                 MFP_CFG_DRV(GPIO72, AF1, DS06X)
#define GPIO73_CCIC_IN1                 MFP_CFG_DRV(GPIO73, AF1, DS06X)
#define GPIO74_CCIC_IN0                 MFP_CFG_DRV(GPIO74, AF1, DS06X)
#define GPIO75_CAM_HSYNC                MFP_CFG_DRV(GPIO75, AF1, DS06X)
#define GPIO76_CAM_VSYNC                MFP_CFG_DRV(GPIO76, AF1, DS06X)
#define GPIO77_CAM_MCLK	                MFP_CFG_DRV(GPIO77, AF1, DS06X)
#define GPIO78_CAM_PCLK                 MFP_CFG_DRV(GPIO78, AF1, DS06X)

/* MMC1 */
#define MMC1_DAT7_MMC1_DAT7        MFP_CFG_DRV(MMC1_DAT7, AF0, DS06X)
#define MMC1_DAT6_MMC1_DAT6        MFP_CFG_DRV(MMC1_DAT6, AF0, DS06X)
#define MMC1_DAT5_MMC1_DAT5        MFP_CFG_DRV(MMC1_DAT5, AF0, DS06X)
#define MMC1_DAT4_MMC1_DAT4        MFP_CFG_DRV(MMC1_DAT4, AF0, DS06X)
#define MMC1_DAT3_MMC1_DAT3        MFP_CFG_DRV(MMC1_DAT3, AF0, DS06X)
#define MMC1_DAT2_MMC1_DAT2        MFP_CFG_DRV(MMC1_DAT2, AF0, DS06X)
#define MMC1_DAT1_MMC1_DAT1        MFP_CFG_DRV(MMC1_DAT1, AF0, DS06X)
#define MMC1_DAT0_MMC1_DAT0        MFP_CFG_DRV(MMC1_DAT0, AF0, DS06X)
#define MMC1_CMD_MMC1_CMD          MFP_CFG_DRV(MMC1_CMD, AF0, DS06X)
#define MMC1_CLK_MMC1_CLK          MFP_CFG_DRV(MMC1_CLK, AF0, DS06X)
#define MMC1_CD_MMC1_CD            MFP_CFG_DRV(MMC1_CD, AF0, DS06X)
#define MMC1_WP_MMC1_WP            MFP_CFG_DRV(MMC1_WP, AF0, DS06X)

#ifdef CONFIG_CPU_PXA910_168
#define GPIO0_DFI_D15		    MFP_CFG(GPIO0, AF0)
#define GPIO1_DFI_D14		    MFP_CFG(GPIO1, AF0)
#define GPIO2_DFI_D13		    MFP_CFG(GPIO2, AF0)
#define GPIO3_DFI_D12		    MFP_CFG(GPIO3, AF0)
#define GPIO4_DFI_D11		    MFP_CFG(GPIO4, AF0)
#define GPIO5_DFI_D10		    MFP_CFG(GPIO5, AF0)
#define GPIO6_DFI_D9		    MFP_CFG(GPIO6, AF0)
#define GPIO7_DFI_D8		    MFP_CFG(GPIO7, AF0)
#define GPIO8_DFI_D7		    MFP_CFG(GPIO8, AF0)
#define GPIO9_DFI_D6		    MFP_CFG(GPIO9, AF0)
#define GPIO10_DFI_D5		    MFP_CFG(GPIO10, AF0)
#define GPIO11_DFI_D4		    MFP_CFG(GPIO11, AF0)
#define GPIO12_DFI_D3		    MFP_CFG(GPIO12, AF0)
#define GPIO13_DFI_D2		    MFP_CFG(GPIO13, AF0)
#define GPIO14_DFI_D1		    MFP_CFG(GPIO14, AF0)
#define GPIO15_DFI_D0		    MFP_CFG(GPIO15, AF0)

#define GPIO16_ND_CS0		    MFP_CFG_DRV(GPIO16, AF1, DS12X)
#define GPIO17_ND_nWE		    MFP_CFG(GPIO17, AF0)
#define GPIO19_CF_nCE1		    MFP_CFG_DRV(GPIO19, AF3, DS12X)
#define GPIO20_CF_nCE2		    MFP_CFG_DRV(GPIO20, AF3, DS12X)
#define GPIO26_ND_RnB1		    MFP_CFG_DRV(GPIO26, AF1, DS12X)

#define GPIO28_CF_RDY		    MFP_CFG_DRV(GPIO28, AF3, DS12X)
#define GPIO29_CF_STSCH		    MFP_CFG_DRV(GPIO29, AF3, DS12X)
#define GPIO30_CF_nREG		    MFP_CFG_DRV(GPIO30, AF3, DS12X)
#define GPIO31_CF_nIOIS16	    MFP_CFG_DRV(GPIO31, AF3, DS12X)
#define GPIO32_CF_nCD1		    MFP_CFG_DRV(GPIO32, AF3, DS12X)
#define GPIO33_CF_nCD2		    MFP_CFG_DRV(GPIO33, AF3, DS12X)

#define GPIO30_DFI_ADDR0	    MFP_CFG(GPIO30, AF0)
#define GPIO31_DFI_ADDR1	    MFP_CFG(GPIO31, AF0)
#define GPIO32_DFI_ADDR2	    MFP_CFG(GPIO32, AF0)
#define GPIO33_DFI_ADDR3	    MFP_CFG(GPIO33, AF0)

/* MSPRO */
#define GPIO40_MSP_DAT1_DEF                 MFP_CFG(GPIO40, AF2)            
#define GPIO41_MSP_DAT0_DEF                 MFP_CFG(GPIO41, AF2)            
#define GPIO43_MSP_DAT2_DEF                 MFP_CFG(GPIO43, AF2)            
#define GPIO44_MSP_DAT3_DEF                 MFP_CFG(GPIO44, AF2)            
#define GPIO42_MSP_BS_DEF                   MFP_CFG(GPIO42, AF3)            
#define GPIO50_MSP_SCLK_DEF                 MFP_CFG(GPIO50, AF3)            

#define GPIO84_MSP_DETECT	            MFP_CFG(GPIO84, AF0)            

/* MMC1 */
#define GPIO37_MMC1_DAT7            MFP_CFG(GPIO37, AF1)
#define GPIO38_MMC1_DAT6            MFP_CFG(GPIO38, AF1)
#define GPIO54_MMC1_DAT5            MFP_CFG(GPIO54, AF1)
#define GPIO48_MMC1_DAT4            MFP_CFG(GPIO48, AF1)
#define GPIO51_MMC1_DAT3            MFP_CFG(GPIO51, AF1)
#define GPIO52_MMC1_DAT2            MFP_CFG(GPIO52, AF1)
#define GPIO40_MMC1_DAT1            MFP_CFG(GPIO40, AF1)
#define GPIO41_MMC1_DAT0            MFP_CFG(GPIO41, AF1)
#define GPIO49_MMC1_CMD             MFP_CFG(GPIO49, AF1)
#define GPIO43_MMC1_CLK             MFP_CFG(GPIO43, AF1)
#define GPIO53_MMC1_CD              MFP_CFG(GPIO53, AF1)
#define GPIO46_MMC1_WP              MFP_CFG(GPIO46, AF1)

/* SMC */
#define GPIO25_SMC_nLLA	  MFP_CFG(GPIO25, AF0)
#define GPIO23_SMC_nLUA	  MFP_CFG(GPIO23, AF0)
#define GPIO28_SMC_RDY    MFP_CFG(GPIO28, AF0)
#define GPIO27_SMC_IRQ    MFP_CFG(GPIO27, AF5)
#define GPIO21_SMC_ALE	  MFP_CFG(GPIO21, AF0)
#define GPIO22_SMC_CLE	  MFP_CFG(GPIO22, AF0)
#define GPIO24_SMC_nRE	  MFP_CFG(GPIO24, AF0)

#define GPIO29_SMC_SCLK   MFP_CFG(GPIO29, AF0)
#define GPIO34_SMC_nCS1   MFP_CFG(GPIO34, AF2)
#define GPIO18_SMC_nCS0   MFP_CFG(GPIO18, AF3)
#define GPIO35_SMC_BE1    MFP_CFG(GPIO35, AF2)
#define GPIO36_SMC_BE2    MFP_CFG(GPIO36, AF2)

#endif

#endif /* __ASM_ARCH_MFP_PXA9xx_H */


