savedcmd_dell_n3248pxe_platform.mod := printf '%s\n'   dell_n3248pxe_platform.o | awk '!x[$$0]++ { print("./"$$0) }' > dell_n3248pxe_platform.mod
