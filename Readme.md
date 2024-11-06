# IRshell shim

##### Used to boot IRshell 1.50 kxploit version


### Prerequites 

- PSP 1K

- ARK-4 4.20.69 r150 or higher


## Setup

- Download the latest IRShell release.

- Place `IRSHELL` folder on the root of your memory stick `ms0:/IRSHELL`


## Running

- Run IRshell shim and it will boot the 1.50 version of IRshell.

<b><em>Note: Not all functions still work but a lot do.</em></b>

### IRshell things that don't work currently

1. Adhoc wifi file transfer, network never initilizes.
2. Devhook, just black screens
3. Launch XMB, just turns off after a bit.
4. iR Shell Configurator, works but when saving and exit will lock up and power off, still saving the config however.
5. Reset iR Shell, black screens then powers off.
6. ISO loading 
  1. Normal Launch: 800200D9 error
  2. Via Devhook, just returns to ISO selection screen
  3. Via Devhook w/iR Shell, just returns to ISO selection screen
7. Launch UMD
  1. Launch via EBOOT.BIN, 800200D9 error
  2. Launch via BOOT.BIN, FFFFFED3 error
8. Toggle USB Mass Storage, launches it in readonly mode. Could be because I am using a 32GB card perhaps.
9. Predefined homebrew, 80010002
