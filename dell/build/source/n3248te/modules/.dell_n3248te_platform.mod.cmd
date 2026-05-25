savedcmd_dell_n3248te_platform.mod := printf '%s\n'   dell_n3248te_platform.o | awk '!x[$$0]++ { print("./"$$0) }' > dell_n3248te_platform.mod
