#!/bin/bash

#platform init script for Dell N3248TE

source dell_i2c_utils.sh

# The i2c bus numbering is pinned by loading the iSMT and i801 adapters
# before dell_n3248te_platform (see n3248te-modules.conf and the modprobe
# order in the init section below): the iSMT controller stays at bus 0 and
# the top-level PCA9548's channels consistently land on buses 2-9, with
# the fan/temp channel at bus 7 and the syseeprom at bus 2. The hardcoded
# bus numbers below (and in /etc/fancontrol and the sonic_platform API)
# expect that layout.

# Make failures visible: probes of i2c devices on channels with no device
# behind them fail with -ENODEV, which the kernel logs only at debug level,
# and the new_device sysfs write still succeeds. Verify that the platform
# sensors actually bound so the service does not report success while the
# fan controller is invisible to "sensors"/fancontrol.
verify_devices() {
    local rc=0
    if [ ! -e /sys/bus/i2c/devices/7-002c/driver ]; then
        echo "n3248te_platform: ERROR: fan controller (emc2305) did not bind on i2c-7"
        rc=1
    fi
    if [ ! -e /sys/bus/i2c/devices/7-0049/driver ]; then
        echo "n3248te_platform: ERROR: temperature monitor (tmp75 0x49) did not bind on i2c-7"
        rc=1
    fi
    if [ ! -e /sys/bus/i2c/devices/10-005e/driver ]; then
        echo "n3248te_platform: WARNING: PSU0 (dps460) did not bind on i2c-10"
    fi
    return $rc
}

#Attach/Detach the system devices
sys_devices() {
    case $1 in
        "new_device")    #syseeprom
                         i2c_config "echo 24c02 0x50 > /sys/bus/i2c/devices/i2c-2/$1"
                         #Attach Fan Controller
                         i2c_config "echo emc2305 0x2c > /sys/bus/i2c/devices/i2c-7/$1"
                         #Attach temperature monitor
                         i2c_config "echo tmp75 0x49 > /sys/bus/i2c/devices/i2c-7/$1"
                         i2c_config "echo tmp75 0x4a > /sys/bus/i2c/devices/i2c-7/$1"
                         i2c_config "echo tmp75 0x4b > /sys/bus/i2c/devices/i2c-7/$1"
                         i2c_config "echo tmp75 0x4c > /sys/bus/i2c/devices/i2c-7/$1"
                         i2c_config "echo tmp75 0x4f > /sys/bus/i2c/devices/i2c-7/$1"
                         #Attach PSU Controller. Buses 10/11, 15-17 and 20-25 are
                         #allocated with fixed numbers by dell_n3248te_platform,
                         # so they are safe to hardcode here.
                         i2c_config "echo dps460 0x5e > /sys/bus/i2c/devices/i2c-10/$1"
                         i2c_config "echo dps460 0x5e > /sys/bus/i2c/devices/i2c-11/$1"
                         #Attach PSU EEPROM
                         i2c_config "echo 24c02 0x56 > /sys/bus/i2c/devices/i2c-10/$1"
                         i2c_config "echo 24c02 0x56 > /sys/bus/i2c/devices/i2c-11/$1"
                         #Attach Fan EEPROM
                         i2c_config "echo 24c02 0x50 > /sys/bus/i2c/devices/i2c-15/$1"
                         i2c_config "echo 24c02 0x50 > /sys/bus/i2c/devices/i2c-16/$1"
                         i2c_config "echo 24c02 0x50 > /sys/bus/i2c/devices/i2c-17/$1"
                         ;;
        "delete_device") i2c_config "echo 0x50 > /sys/bus/i2c/devices/i2c-2/$1"
                         i2c_config "echo 0x2c > /sys/bus/i2c/devices/i2c-7/$1"
                         i2c_config "echo 0x49 > /sys/bus/i2c/devices/i2c-7/$1"
                         i2c_config "echo 0x4a > /sys/bus/i2c/devices/i2c-7/$1"
                         i2c_config "echo 0x4b > /sys/bus/i2c/devices/i2c-7/$1"
                         i2c_config "echo 0x4c > /sys/bus/i2c/devices/i2c-7/$1"
                         i2c_config "echo 0x4f > /sys/bus/i2c/devices/i2c-7/$1"
                         i2c_config "echo 0x5e > /sys/bus/i2c/devices/i2c-10/$1"
                         i2c_config "echo 0x5e > /sys/bus/i2c/devices/i2c-11/$1"
                         i2c_config "echo 0x56 > /sys/bus/i2c/devices/i2c-10/$1"
                         i2c_config "echo 0x56 > /sys/bus/i2c/devices/i2c-11/$1"
                         i2c_config "echo 0x50 > /sys/bus/i2c/devices/i2c-15/$1"
                         i2c_config "echo 0x50 > /sys/bus/i2c/devices/i2c-16/$1"
                         i2c_config "echo 0x50 > /sys/bus/i2c/devices/i2c-17/$1"
                         ;;
        *)               echo "n3248te_platform: main_board_mux : invalid command !"
                         return 1
                         ;;
    esac
}

#Attach/Detach the SFP modules on PCA9548_2
switch_board_sfp() {
    case $1 in
        "new_device")    i2c_config "echo optoe2 0x50 > /sys/bus/i2c/devices/i2c-20/$1"
                         i2c_config "echo optoe2 0x50 > /sys/bus/i2c/devices/i2c-21/$1"
                         i2c_config "echo optoe2 0x50 > /sys/bus/i2c/devices/i2c-22/$1"
                         i2c_config "echo optoe2 0x50 > /sys/bus/i2c/devices/i2c-23/$1"
                         i2c_config "echo optoe1 0x50 > /sys/bus/i2c/devices/i2c-24/$1"
                         i2c_config "echo optoe1 0x50 > /sys/bus/i2c/devices/i2c-25/$1"
                         ;;
        "delete_device") i2c_config "echo 0x50 > /sys/bus/i2c/devices/i2c-20/$1"
                         i2c_config "echo 0x50 > /sys/bus/i2c/devices/i2c-21/$1"
                         i2c_config "echo 0x50 > /sys/bus/i2c/devices/i2c-22/$1"
                         i2c_config "echo 0x50 > /sys/bus/i2c/devices/i2c-23/$1"
                         i2c_config "echo 0x50 > /sys/bus/i2c/devices/i2c-24/$1"
                         i2c_config "echo 0x50 > /sys/bus/i2c/devices/i2c-25/$1"
                         ;;
        *)               echo "n3248te_platform: switch_board_sfp: invalid command !"
                         return 1
                         ;;
    esac
}

platform_firmware_versions() {

FIRMWARE_VERSION_FILE=/var/log/firmware_versions
command -v dmidecode >/dev/null 2>&1 || return 0
rm -rf ${FIRMWARE_VERSION_FILE}
# Get BIOS version
echo "BIOS: `dmidecode -s system-version `" > $FIRMWARE_VERSION_FILE
# Get CPU CPLD version
echo "CPU CPLD: $((`cat /sys/devices/platform/dell-n3248te-cpld.0/cpu_cpld_mjr_ver`)).$((`cat /sys/devices/platform/dell-n3248te-cpld.0/cpu_cpld_mnr_ver`))" >> $FIRMWARE_VERSION_FILE
# Get SYS CPLD version
echo "SYS CPLD: $((`cat /sys/devices/platform/dell-n3248te-cpld.0/sys_cpld_mjr_ver`)).$((`cat /sys/devices/platform/dell-n3248te-cpld.0/sys_cpld_mnr_ver`))" >> $FIRMWARE_VERSION_FILE

}

install_python_api_package() {
    device="/usr/share/sonic/device"
    [ -x /usr/local/bin/sonic-cfggen ] || return 0
    command -v pip3 >/dev/null 2>&1 || return 0
    platform=$(/usr/local/bin/sonic-cfggen -H -v DEVICE_METADATA.localhost.platform)

    pip3 install $device/$platform/sonic_platform-1.0-py3-none-any.whl
}

remove_python_api_package() {
    command -v pip3 >/dev/null 2>&1 || return 0
    rv=$(pip3 show sonic-platform > /dev/null 2>/dev/null)
    if [ $? -eq 0 ]; then
        rv=$(pip3 uninstall -y sonic-platform > /dev/null 2>/dev/null)
    fi
}

get_reboot_cause() {
    REBOOT_REASON_FILE="/host/reboot-cause/platform/reboot_reason"
    mkdir -p $(dirname $REBOOT_REASON_FILE)

    # Handle First Boot into software version with reboot cause determination support
    if [[ ! -e $REBOOT_REASON_FILE ]]; then
        echo "0x0" > $REBOOT_REASON_FILE
    else
        cat /sys/devices/platform/dell-n3248te-cpld.0/reboot_cause > $REBOOT_REASON_FILE
    fi
}


if [[ "$1" == "init" ]]; then
   # The iSMT and i801 adapters must register their i2c buses before the
   # platform module creates the top-level mux, so the PCA9548's channels
   # consistently get bus numbers 2-9 (fan/temp channel at bus 7, syseeprom
   # at bus 2). n3248te-modules.conf enforces the same order at boot.
   modprobe i2c-ismt
   modprobe i2c-i801
   modprobe i2c-dev
   modprobe i2c-mux-pca954x
   modprobe pmbus
   modprobe emc2305
   # Pre-load the drivers that the devices below rely on. If they are left
   # to auto-load on first use, this service can run early enough in boot
   # that the kernel's request_module() is still deferred by the udev
   # usermode-helper lock; the devices then bind seconds later, after
   # verify_devices below and after fancontrol has resolved the hwmon
   # indexes in /etc/fancontrol (which expect emc2305 to be hwmon1 and the
   # tmp75 monitors to be hwmon2-6). Pre-loading makes every probe bind
   # synchronously, in creation order, on every boot.
   modprobe lm75
   modprobe at24
   modprobe optoe
   modprobe dell_n3248te_platform

   sys_devices "new_device" || exit 1
   get_reboot_cause
   switch_board_sfp "new_device"
   echo 0xf0 > /sys/devices/platform/dell-n3248te-cpld.0/sfp_txdis
   install_python_api_package
   platform_firmware_versions
   echo -2 > /sys/bus/i2c/devices/i2c-0/0-0071/idle_state
   verify_devices || exit 1
elif [[ "$1" == "deinit" ]]; then
    switch_board_sfp "delete_device"
    sys_devices "delete_device"

    modprobe -r dell_n3248te_platform
    modprobe -r emc2305
    modprobe -r pmbus
    modprobe -r i2c-mux-pca954x
    modprobe -r i2c-dev
    remove_python_api_package
else
     echo "n3248te_platform : Invalid option !"
fi
