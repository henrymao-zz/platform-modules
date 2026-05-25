savedcmd_dell_z9864f_fpga.o := ld -m elf_x86_64 -z noexecstack --no-warn-rwx-segments   -r -o dell_z9864f_fpga.o @dell_z9864f_fpga.mod  ; /usr/src/linux-headers-7.0.0-1002-sonic/tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --retpoline --rethunk --sls --stackval --static-call --uaccess --prefix=16  --link  --module dell_z9864f_fpga.o

dell_z9864f_fpga.o: $(wildcard /usr/src/linux-headers-7.0.0-1002-sonic/tools/objtool/objtool)
