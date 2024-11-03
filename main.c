#include <pspsdk.h>
#include <pspkernel.h>
#include <pspdebug.h>
#include <stdio.h>

PSP_MODULE_INFO("irshell_shim", 0x1000, 1, 0);

#define printf pspDebugScreenPrintf


int ircloader_thread(int argc, char *args[]) {

	int status;
	int mod = sceKernelLoadModule("ms0:/IRSHELL/BIN/irshell150.prx", 0, NULL);
	if(mod >= 0) {
		sceKernelStartModule(mod, sizeof(mod), args, status, NULL);
	}
}

int main(int argc, char *args[]) {
	pspDebugScreenInit();

	int threadid;
	threadid = sceKernelCreateThread("ircloader_thread", ircloader_thread, 0x20, 0x2000, 0, 0);
	if(threadid) {
		sceKernelStartThread(threadid, argc, args);
		sceKernelDelayThread(-1);
	}

	
	
	sceKernelWaitThreadEnd(threadid, NULL);
	printf("ms0:/IRSHELL folder in root not found....\n");
	sceKernelDelayThread(5000000);
	sceKernelExitGame();

	return 0;
}
