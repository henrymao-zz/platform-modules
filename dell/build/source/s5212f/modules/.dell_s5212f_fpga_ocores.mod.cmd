savedcmd_dell_s5212f_fpga_ocores.mod := printf '%s\n'   dell_s5212f_fpga_ocores.o | awk '!x[$$0]++ { print("./"$$0) }' > dell_s5212f_fpga_ocores.mod
