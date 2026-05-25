savedcmd_emc2305.mod := printf '%s\n'   emc2305.o | awk '!x[$$0]++ { print("./"$$0) }' > emc2305.mod
