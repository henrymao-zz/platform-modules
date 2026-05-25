savedcmd_dell_z9664f_fpga_ocores.mod := printf '%s\n'   dell_z9664f_fpga_ocores.o | awk '!x[$$0]++ { print("./"$$0) }' > dell_z9664f_fpga_ocores.mod
