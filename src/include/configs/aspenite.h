/*
 * (C) Copyright 2008
 * Marvell Semiconductors Ltd. Shanghai, China.
 *
 * Configuration for Tavor EVB board.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.    See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef __CONFIG_H
#define __CONFIG_H

/************/
/* VERSIONS */
/************/
#define CONFIG_IDENT_STRING         "\nMarvell version: 1.1.1.1 PXAxxx"

#define CONFIG_SYS_HUSH_PARSER
#define CONFIG_SYS_PROMPT_HUSH_PS2 "chumby> "

// Enable various nice commands.
#define CONFIG_CMD_MISC
#define CONFIG_CMD_ECHO
#define CONFIG_CMD_RUN
#define CONFIG_CMD_IMI
//#define CONFIG_CMD_ELF
#define CONFIG_CMD_STRINGS
#define CONFIG_CMD_SETEXPR
#define CONFIG_CMD_TOUCHSCREEN
//#define CONFIG_CMD_TERMINAL

#define CONFIG_BOOTM_LINUX

// Add support for LCD.
#define CONFIG_LCD
#define CONFIG_SILVERMOON_LCD
#define CONFIG_CMD_UNZIP
#define CONFIG_CMD_BMP
//#define CONFIG_LZMA
#define CONFIG_VIDEO_BMP_GZIP
#define CONFIG_SYS_VIDEO_LOGO_MAX_SIZE (2<<20)
//#define CONFIG_CONSOLE_MUX // Output data to serial console and LCD.
#define CONFIG_USE_IRQ


// Enable support for useful filesystems.
//#define CONFIG_CMD_FAT
#define CONFIG_CMD_CCONFIG

/* version number passing when loading Kernel */
#define VER_NUM             0x01010101  /* 1.1.1.18 */
/*
 * High Level Configuration Options
 * (easy to change)
 */
#define CONFIG_CPU_PXA910       1 /* This is an pxa910 core*/
#define CONFIG_CPU_PXA910_168       1 /* pxa168 SOC */
#define CONFIG_PXAXXX           1 /*  pxa family */
#define CONFIG_ASPENITE         1

#if defined(CHUMBY_CONFIG_platform)
#define CONFIG_SYS_BOARD_NAME       "88SV331xV5 based Silvermoon"
#define CONFIG_SYS_VENDOR_NAME      "Chumby"
#else
#define CONFIG_SYS_BOARD_NAME       "88SV331xV5 based PXAxxx"
#define CONFIG_SYS_VENDOR_NAME      "MARVELL"
#endif

#define CONFIG_SYS_MEMTEST_START        0x00100000
#define CONFIG_SYS_MEMTEST_END          0x00F00000

#define CONFIG_SYS_HZ           (3250000)      /* KV - Timer 0 is clocked at 3.25 MHz */
#define CONFIG_SYS_TIMERBASE        0xD4014000
#define CONFIG_DISPLAY_BOARDINFO

#define CONFIG_MISC_INIT_R          1   /* call misc_init_r during start up */

/*
 * Size of malloc() pool
 */
#define CONFIG_SYS_MALLOC_LEN       (CONFIG_SYS_ENV_SIZE + 4096*1024)
#define CONFIG_SYS_GBL_DATA_SIZE    128   /* size in bytes reserved for initial data */

/*
 *  Configuration
 */
#define CONFIG_AUTO_COMPLETE
#define CONFIG_CONS_INDEX           1
#undef  CONFIG_SERIAL_SOFTWARE_FIFO
#define CONFIG_SYS_NS16550
#define CONFIG_SYS_NS16550_SERIAL
#define CONFIG_SYS_NS16550_REG_SIZE     -4
#define CONFIG_SYS_NS16550_CLK          14745600
#define CONFIG_BAUDRATE             115200
#define CONFIG_SYS_BAUDRATE_TABLE       { 9600, 19200, 38400, 57600, 115200 }
#define CONFIG_SYS_NS16550_COM1         0xD4017000
#define CONFIG_SYS_NS16550_COM2         0xD4026000

#define CONFIG_SHOW_BOOT_PROGRESS

/*
#if !defined(CHUMBY_CONFIG_platform)
#define CONFIG_CMD_PING
#define CONFIG_CMD_NET
#define CONFIG_NET_MULTI
#define MV_ETH_DEVS             1

#define CONFIG_IPADDR           192.168.1.101

#define CONFIG_SERVERIP         192.168.1.100

#define CONFIG_ETHADDR          "00:00:5A:9F:6D:82"
#endif // !CHUMBY_CONFIG_platform
*/

/* enable passing of ATAGs  */
#define CONFIG_CMDLINE_TAG          1
#define CONFIG_SETUP_MEMORY_TAGS    1
#define CONFIG_SYS_TCLK             0 /* not in use */
#define CONFIG_SYS_BUS_CLK          0 /* not in use */
#define CONFIG_CMD_ENV
#define CONFIG_ENV_SIZE         0x20000
#define CONFIG_ENV_OFFSET       0x80000

/***************************************/
/* LINUX BOOT and other ENV PARAMETERS */
/***************************************/
#define CONFIG_SYS_BOOTARGS_END         ":::ASPENITE:eth0:none"
#define CONFIG_SYS_BOOTARGS_ROOT        "root=/dev/nfs rw init=/linuxrc"
#define CONFIG_SYS_LOAD_ADDR            0x00500000   /* default load address   */
#define CONFIG_SYS_DEF_LOAD_ADDR        "0x00500000"
#define CONFIG_SYS_IMG_NAME     "zImage"
#define CONFIG_SYS_INITRD_NAME          "ramdisk.image.gz"
#define CONFIG_SYS_INITRD_LOAD_ADDR     "800000"
#define CONFIG_SYS_INITRD_SIZE          "400000"
#undef  CONFIG_BOOTARGS


/*-----------------------------------------------------------------------
 * MMC configuration
 */
#if !defined(CHUMBY_CONFIG_platform)
#define CFG_CMD_FAT     1
#define CONFIG_CMD_FAT      1
#endif
#define CONFIG_CMD_MMC      1
#define CONFIG_MMC      1
#define CONFIG_MMC3     1
#define CONFIG_GENERIC_MMC  1
#define CONFIG_PXASDH       1
#define CONFIG_DOS_PARTITION    1

#ifndef CONFIG_MMC3
#define CONFIG_SYS_MMC_BASE 0xd4280000
#else
#define CONFIG_SYS_MMC_BASE 0xd427E000
#endif

#ifndef CONFIG_MMC3
#define CONFIG_BOOTDELAY            10
#else
#if defined(CHUMBY_CNPLATFORM_silvermoon)
#define CONFIG_BOOTDELAY            0
#else
#define CONFIG_BOOTDELAY            -1
#endif
#endif


#if (CONFIG_BOOTDELAY >= 0)

/* boot arguments" */
//#define CONFIG_NANDBOOT           "nand read 0x500000 0x920000 0x300000"
#if defined(CHUMBY_CNPLATFORM_silvermoon)
#define CONFIG_CMD_BDI              // Enable bdinfo command
#define CONFIG_CMD_MEMORY       /* md mm nm mw cp cmp crc base loop mtest */
#define CONFIG_CMD_EXT2         /* EXT2 Support                 */
#if defined(CHUMBY_CONFIGNAME_silvermoon_aspen)
#define CONFIG_BOOTCOMMAND          "nand read 0x500000 0x920000 0x300000; bootz 0x500000"
#else
// mmc read is set by chumbystart on exit, e.g.
// setenv chumbyboot3 mmc read 0 0x500000 0xc04 0x1e00
// setenv chumbyboot4 bootz 0x500000
// Device offsets for config area and chumbystart are be passed in from
/****
src/map-util --blocks --hex --id config config/map-silvermoon_sd doffset
CHUMBY_DOFFSET_config 0x00000064
src/map-util --blocks --hex --id config config/map-silvermoon_sd length
CHUMBY_LENGTH_config 0x00000020
src/map-util --blocks --hex --id Chst config/map-silvermoon_sd doffset
CHUMBY_DOFFSET_Chst 0x00000804
src/map-util --blocks --hex --id Chst config/map-silvermoon_sd length
CHUMBY_LENGTH_Chst 0x00000200
src/map-util --blocks --hex --id ubfb config/map-silvermoon_sd doffset
CHUMBY_DOFFSET_ubfb 0x00000a04
src/map-util --blocks --hex --id ubfb config/map-silvermoon_sd length
// We won't actually use this - we'll read a 128000 byte slice which is 0xfa sectors 7.5x
CHUMBY_LENGTH_ubfb 0x00000200
// For testing with SPINOR boot, we are loading u-boot from offset 0 which means
// 80k bytes = 160 blocks = 0xa0 blocks are destroyed
// The start of the u-boot data at 0x10800 (block 0x00000084) gets clobbered also
// Temporarily, we'll write the config block to 0xc4 (196 decimal blocks) which is 0x18800 bytes
// dd if=output/image-links-silvermoon_sd/u-bt of=/dev/sdc bs=512
// dd if=output/config-silvermoon_sd.img of=/dev/sdc bs=512 seek=196
****/
//#define TEMPORARY_HACK_FOR_SPINOR_20090917
#ifdef TEMPORARY_HACK_FOR_SPINOR_20090917
#undef CHUMBY_DOFFSET_config
#define CHUMBY_DOFFSET_config "0xc4"
#endif

#define CONFIG_BOOTCOMMAND                                      \
    /* Init SD card */                                          \
    "mmc rescan 0 ;"                                            \
    " ;"                                                        \
    /* Figure out which partition is Active */                  \
    "echo \"Determining boot partition...\" ;"                  \
    "BP=0 ; cconfiginfo mmc 0 active || BP=1 ;"                 \
    " ;"                                                        \
    /* Test to see which Boot Partition is active */            \
    "if test ${BP} = 0 ;"                                       \
    "    then PART=mmcblk0p2; PARTNAME=rfsA; KF=2; KB=krnA; "   \
    "    else PART=mmcblk0p3; PARTNAME=rfsB; KF=3; KB=krnB; "   \
    "fi ;"                                                      \
    " ;"                                                        \
    /* Check for debranding */                                  \
    "cbrand ; "                                                 \
    " ;"                                                        \
    /* Have a pretty, flashy startup screen */                  \
    /* Draw an image to the screen */                           \
    "echo \"Drawing something to the screen...\" ;"             \
    "snow init ${BP} ;"                                         \
    " ;"                                                        \
    /* Determine if someone is touching the screen */           \
    "echo \"Testing the touchscreen...\" ;"                     \
    "TS=0 ; touchscreen || TS=1 ;"                              \
    "if test ${TS} = 0 ;"                                       \
    "    then snow load ${KF} /boot/logo_${brand}.gz ;"         \
    "    else snow load ${KF} /boot/recovery_1_${brand}.gz ;"   \
    "fi ;"                                                      \
    "snow draw ;"                                               \
    /*"snow start ;"*/                                          \
    " ;"                                                        \
    " ;"                                                        \
    /* Wait for the user to press Control-C */                  \
    "echo \"Press Control-C to enter a shell.\" ;"              \
    "if sleep 2 ;"                                              \
    "    then echo \"Continuing boot...\" ;"                    \
    "    else echo \"Chumby shell\"; echo \"Type 'run bootcmd' to exit\"; exit ;" \
    "fi ;"                                                      \
    " ;"                                                        \
    /* See if the user is still touching the screen */          \
    "echo \"Testing the touchscreen again...\" ;"               \
    "test ${TS} = 1 && TS=0 && touchscreen || TS=1 ;"           \
    " ;"                                                        \
    /* If the user is pressing the screen, swap partitions */   \
    "if test ${TS} = 1 ;"                                       \
    "    then echo \"Booting to recovery shell...\" ;"          \
    "    RECOVERY=\"recovery=1 logo.recovery=1\";"              \
    "    if test ${BP} = 0 ;"                                   \
    "        then PART=mmcblk0p3; PARTNAME=rfsB; KF=3; KB=krnB; "   \
    "        else PART=mmcblk0p2; PARTNAME=rfsA; KF=2; KB=krnA; "   \
    "    fi ;"                                                  \
    "    snow load ${KF} /boot/recovery_2_${brand}.gz ;"        \
    "else "                                                     \
    "    echo \"Booting to regular shell...\" ;"                \
    "    snow load ${KF} /boot/loading_${brand}.gz ;"           \
    "fi ;"                                                      \
    "snow draw ;"                                               \
    " ;"                                                        \
    /* Set up the Linux command line */                         \
    "setenv bootargs root=/dev/${PART} "                        \
            "rootwait console=ttyS0,115200 mem=128M "           \
            "uart_dma sysrq_always_enabled "                    \
            "brandnum=${brandnum} "                             \
            "rw logo.brand=${brand} ${RECOVERY} ;"              \
    "echo \"Booting to ${PARTNAME}...\" ;"                      \
    " ;"                                                        \
    /* Load the kernel from the config area */                  \
    "ext2load mmc 0:${KF} ${default_load_addr} /boot/zImage && cconfigload mmc 0 ${default_load_addr} ${KB};"\
    "bootz ${default_load_addr} ;"                              \
    ""
    //"cconfigload mmc 0 ${default_load_addr} ${KERN} ;"

#endif
#else
#define CONFIG_BOOTCOMMAND          "setenv autoboot boot; bootz 0x500000; setenv autoboot none"
#endif

#define CONFIG_ROOTPATH         /tftpboot/rootfs_arm

#endif /* #if (CONFIG_BOOTDELAY >= 0) */

#define CONFIG_SYS_BARGSIZE         CONFIG_SYS_CBSIZE   /* Boot Argument Buffer Size   */

/*
 * For booting Linux, the board info and command line data
 * have to be in the first 8 MB of memory, since this is
 * the maximum mapped by the Linux kernel during initialization.
 */
#define CONFIG_SYS_BOOTMAPSZ        (8<<20)   /* Initial Memory map for Linux */

/*
 * Miscellaneous configurable options
 */
#define CONFIG_SYS_LONGHELP         /* undef to save memory     */
#if defined(CHUMBY_CONFIG_name)
#define CONFIG_SYS_PROMPT           CHUMBY_CONFIG_name ">> "   /* Monitor Command Prompt   */
#else
#define CONFIG_SYS_PROMPT           "Aspenite>> "   /* Monitor Command Prompt   */
#endif

/* Console I/O Buffer Size  */
#define CONFIG_SYS_CBSIZE           512
/* Print Buffer Size */
#define CONFIG_SYS_PBSIZE           (CONFIG_SYS_CBSIZE+sizeof(CONFIG_SYS_PROMPT)+16)
/* max number of command args   */
#define CONFIG_SYS_MAXARGS          16
/* Boot Argument Buffer Size    */
#define CONFIG_SYS_BARGSIZE         CONFIG_SYS_CBSIZE
#undef  CONFIG_SYS_CLKS_IN_HZ           /* everything, incl board info, in Hz */
#define CONFIG_ENV_OVERWRITE        /* allow to change env parameters */
#undef  CONFIG_INIT_CRITICAL
#define CONFIG_CMDLINE_EDITING
#define CONFIG_SYS_64BIT_VSPRINTF


/*-----------------------------------------------------------------------
 * Stack sizes
 *
 * The stack sizes are set up in start.S using the settings below
 */
#define CONFIG_STACKSIZE            (128*1024)   /* regular stack */
#ifdef  CONFIG_USE_IRQ
#define CONFIG_STACKSIZE_IRQ        (4*1024)   /* IRQ stack */
#define CONFIG_STACKSIZE_FIQ        (4*1024)   /* FIQ stack */
#endif


/*-----------------------------------------------------------------------
 * Physical Memory Map
 */
#define CONFIG_NR_DRAM_BANKS        1   /* we have 1 bank of DRAM */
#define PHYS_SDRAM_1                0x00000000   /* SDRAM Bank #1 */
#if defined(CHUMBY_CONFIG_memsize)
#define PHYS_SDRAM_1_SIZE           (CHUMBY_CONFIG_memsize * 0x100000)  /* 128 MB */
#define PHYS_SDRAM_SIZE_DEC         CHUMBY_CONFIG_memsize
#else
#define PHYS_SDRAM_1_SIZE           0x04000000   /* 64 MB */
#define PHYS_SDRAM_SIZE_DEC         64
#endif
#define CONFIG_SYS_ENV_SIZE             0x10000   /* Total Size of Environment Sector */
//#ifndef CONFIG_MMC3
//#define   CONFIG_ENV_IS_IN_NAND       1
//#else
#define CONFIG_ENV_IS_NOWHERE       1
//#endif
#define CMD_SAVEENV         1
#define CONFIG_SYS_NO_FLASH     1
#ifndef CONFIG_MMC3
#define CMD_SAVEENV         1
#define CONFIG_BBM          1
#endif

/*-----------------------------------------------------------------------
 * cpuid configuration
 */
#define CONFIG_CMD_CPUID        1

/*-----------------------------------------------------------------------
 * NAND and DFC configuration
 */
/*
#ifndef CONFIG_MMC3
#define CONFIG_CMD_NAND         1
#define CONFIG_SYS_MAX_NAND_DEVICE  1         // Max number of NAND devices
#define CONFIG_SYS_NAND_BASE        0xD4283000
#define CONFIG_SYS_ONENAND_BASE     0x80000000  // configure for ttc
#endif
#ifndef CHUMBY_CNPLATFORM_silvermoon
#define CONFIG_USB_ETH
#define CONFIG_U2O_REG_BASE     0xd4208000
#define CONFIG_U2O_PHY_BASE     0xd4207000
#endif
*/

#endif
/* __CONFIG_H */
