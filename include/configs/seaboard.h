/*
 *  (C) Copyright 2010,2011
 *  NVIDIA Corporation <www.nvidia.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#include <linux/sizes.h>

/* LP0 suspend / resume */
#define CONFIG_TEGRA_LP0
#define CONFIG_AES
#define CONFIG_TEGRA_PMU
#define CONFIG_TPS6586X_POWER
#define CONFIG_TEGRA_CLOCK_SCALING

#include "tegra20-common.h"

/* High-level configuration options */
#define CONFIG_TEGRA_BOARD_STRING	"NVIDIA Seaboard"

/* Board-specific serial config */
#define CONFIG_TEGRA_ENABLE_UARTD
#define CONFIG_SYS_NS16550_COM1		NV_PA_APB_UARTD_BASE

#define CONFIG_MACH_TYPE		MACH_TYPE_SEABOARD

/* I2C */
#define CONFIG_SYS_I2C_TEGRA

/* Environment in eMMC, at the end of 2nd "boot sector" */
#define CONFIG_ENV_IS_IN_MMC
#define CONFIG_ENV_OFFSET (-CONFIG_ENV_SIZE)
#define CONFIG_SYS_MMC_ENV_DEV 0
#define CONFIG_SYS_MMC_ENV_PART 2

/* USB Host support */
#define CONFIG_USB_EHCI
#define CONFIG_USB_EHCI_TEGRA

/* USB networking support */
#define CONFIG_USB_HOST_ETHER
#define CONFIG_USB_ETHER_ASIX

/* General networking support */

/* Enable keyboard */
#define CONFIG_TEGRA_KEYBOARD
#define CONFIG_KEYBOARD

/* USB keyboard */

/* LCD support */
#define CONFIG_SYS_WHITE_ON_BLACK

/* NAND support */
#define CONFIG_CMD_NAND
#define CONFIG_TEGRA_NAND

/* Max number of NAND devices */
#define CONFIG_SYS_MAX_NAND_DEVICE	1

#include "tegra-common-post.h"

#endif /* __CONFIG_H */