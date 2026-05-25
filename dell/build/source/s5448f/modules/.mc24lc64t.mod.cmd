savedcmd_mc24lc64t.mod := printf '%s\n'   mc24lc64t.o | awk '!x[$$0]++ { print("./"$$0) }' > mc24lc64t.mod
