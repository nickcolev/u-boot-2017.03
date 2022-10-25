#!/bin/bash
# NPK 2/17/22
. /etc/init.d/tc-functions

ARCH=arm
# see README for these below
CROSS_COMPILE=/opt/linaro/bin/arm-linux-gnueabihf-
HOSTCC=arm-linux-gnueabihf-gcc
HOSTSTRIP=arm-linux-gnueabihf-strip

PATH=/opt/linaro/bin:${PATH}

msg() {
	echo "${BLUE}${1}${NORMAL}"
}

msg 'clean'
make clean

msg 'config'
make orangepi_zero_config

msg 'make'
make HOST_TOOLS_ONLY=yes tools
