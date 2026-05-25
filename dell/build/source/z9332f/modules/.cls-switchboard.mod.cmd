savedcmd_cls-switchboard.mod := printf '%s\n'   cls-switchboard.o | awk '!x[$$0]++ { print("./"$$0) }' > cls-switchboard.mod
