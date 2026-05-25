savedcmd_dell_s3248t_platform.mod := printf '%s\n'   dell_s3248t_platform.o | awk '!x[$$0]++ { print("./"$$0) }' > dell_s3248t_platform.mod
