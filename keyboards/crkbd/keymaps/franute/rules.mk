OLED_ENABLE 		= yes
OLED_DRIVER 		= ssd1306
TAP_DANCE_ENABLE 	= yes
EXTRAKEY_ENABLE 	= yes
NKRO_ENABLE        	= yes
CONSOLE_ENABLE		= no

# Fancy Stuff
RGBLIGHT_ENABLE    = no
RGB_MATRIX_ENABLE  = yes
RGB_MATRIX_DRIVER  = ws2812
RGB_MATRIX_CUSTOM_USER = no
OLED_DRIVER_ENABLE = yes

SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE   = no

EXTRAFLAGS        += -flto
COMMAND_ENABLE	   = no # Commands for debug and configuration
UNICODE_ENABLE     = yes # Unicode
MOUSEKEY_ENABLE    = no # Mouse keys(+4700)