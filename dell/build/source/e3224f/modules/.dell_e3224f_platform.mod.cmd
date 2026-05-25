savedcmd_dell_e3224f_platform.mod := printf '%s\n'   dell_e3224f_platform.o | awk '!x[$$0]++ { print("./"$$0) }' > dell_e3224f_platform.mod
