savedcmd_dell_z9864f_fpga.mod := printf '%s\n'   fpga.o fpga_attr.o fpga_gpio.o fpga_i2c.o fpga_reg.o | awk '!x[$$0]++ { print("./"$$0) }' > dell_z9864f_fpga.mod
