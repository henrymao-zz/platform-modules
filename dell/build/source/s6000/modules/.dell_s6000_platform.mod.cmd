savedcmd_dell_s6000_platform.mod := printf '%s\n'   dell_s6000_platform.o | awk '!x[$$0]++ { print("./"$$0) }' > dell_s6000_platform.mod
