#!/usr/bin/env bash
rm -rf PSP *.zip
make clean && make && make kxploit
mv irshell_shim.prx irshell_shim/EBOOT.PBP
mkdir -p PSP/GAME150
mv -t PSP/GAME150/ irshell_shim/ "irshell_shim%/"
zip -r IRshell_shim.zip PSP
