savedcmd_dell_ich.mod := printf '%s\n'   dell_ich.o | awk '!x[$$0]++ { print("./"$$0) }' > dell_ich.mod
