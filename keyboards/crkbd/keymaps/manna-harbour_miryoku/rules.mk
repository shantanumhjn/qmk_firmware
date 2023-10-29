# Copyright 2022 Shantanu Mahajan

RGB_MATRIX_ENABLE 	= yes
OLED_ENABLE     	= yes
OLED_DRIVER     	= ssd1306
LTO_ENABLE      	= yes

POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = cirque_pinnacle_i2c

# for elite-c
# BOOTLOADER 			= atmel-dfu
# LTO_ENABLE = yes

# for arcadia (rp2040)
CONVERT_TO = promicro_rp2040
LTO_ENABLE = no
SERIAL_DRIVER = vendor