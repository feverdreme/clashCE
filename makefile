# ----------------------------
# Makefile Options
# ----------------------------

NAME = CLASHCE
ICON = icon.png
DESCRIPTION = "CLASH ROYALE ClONE FOR TI84"
COMPRESSED = NO
ARCHIVED = NO

CFLAGS = -Wall -Wextra -Oz
CXXFLAGS = -Wall -Wextra -Oz

# ----------------------------

# include /Users/jeffrey/CEdev/meta/makefile.mk
include $(shell cedev-config --makefile)
