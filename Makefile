TARGET = irshell_shim

PSP_EBOOT_TITLE = IRshell shim

PSP_EBOOT_ICON = res/ICON0.PNG

PSP_EBOOT_SND0 = res/SND0.AT3

OBJS = main.o

LIBS = -lpspdebug

BUILD_PRX = 1

PSPSDK=$(shell psp-config -p)
include $(PSPSDK)/lib/build.mak
