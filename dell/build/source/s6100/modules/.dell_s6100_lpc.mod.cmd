savedcmd_dell_s6100_lpc.mod := printf '%s\n'   dell_s6100_lpc.o | awk '!x[$$0]++ { print("./"$$0) }' > dell_s6100_lpc.mod
