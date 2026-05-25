savedcmd_cls-i2c-ocore.mod := printf '%s\n'   cls-i2c-ocore.o | awk '!x[$$0]++ { print("./"$$0) }' > cls-i2c-ocore.mod
