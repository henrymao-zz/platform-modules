# SONiC Dell Platform Modules

Kernel modules, platform API, and utilities for Dell network switch platforms in the [SONiC (Software for Open Networking in the Cloud)](https://github.com/sonic-net/SONiC) ecosystem.

Source code in `dell/` matches the upstream repo at [sonic-platform-modules-dell](https://github.com/sonic-net/sonic-buildimage/tree/master/platform/broadcom/sonic-platform-modules-dell). Kernel API compatibility patches are under `dell/patch/` and applied automatically during the workshop build.

## Supported Platforms

| Model    | Kernel Modules                                                                |
| -------- | ----------------------------------------------------------------------------- |
| s3248t   | dell_s3248t_platform, emc2305                                                 |
| n3248te  | dell_n3248te_platform, emc2305                                                |
| n3248pxe | dell_n3248pxe_platform, emc2305                                               |
| e3224f   | dell_e3224f_platform, emc2305                                                 |
| s5212f   | dell_s5212f_fpga_ocores                                                       |
| s5224f   | dell_s5224f_fpga_ocores                                                       |
| s5232f   | dell_s5232f_fpga_ocores                                                       |
| s5248f   | dell_s5248f_fpga_ocores                                                       |
| s5296f   | dell_s5296f_fpga_ocores                                                       |
| s5448f   | dell_s5448f_fpga_ocores, mc24lc64t                                            |
| s6000    | dell_s6000_platform                                                           |
| s6100    | dell_s6100_iom_cpld, dell_s6100_lpc, dell_ich                                 |
| z9100    | dell_z9100_cpld, dell_mailbox, dell_ich                                       |
| z9264f   | dell_z9264f_fpga_ocores                                                       |
| z9332f   | cls-i2c-ocore, cls-i2c-mux-pca954x, cls-switchboard, mc24lc64t                |
| z9432f   | dell_z9432f_fpga_ocores, mc24lc64t                                            |
| z9664f   | dell_z9664f_fpga_ocores, mc24lc64t                                            |
| z9864f   | dell_z9864f_fpga                                                              |

Each platform also includes Python platform API (`sonic_platform`) and platform-specific scripts.

## How to Build

### Prerequisites

- Linux kernel headers matching the target SONiC kernel (e.g., `linux-headers-6.12.41+deb13-common-sonic`)
- Build dependencies: `debhelper` (compat 13), `dh-python`, `python3`, `python3-build`, `python3-setuptools`, `python3-wheel`

### Option 1: Workshop (containerized build)

```bash
cd dell
workshop build
```

The build pipeline is defined in `dell/workshop.yaml`. It copies the source to a build directory, applies kernel API compatibility patches from `dell/patch/`, then runs `dpkg-buildpackage` inside a container with all required dependencies.

### Option 2: Direct dpkg-buildpackage

First apply the patches:

```bash
cd dell
for patch in patch/*.patch; do patch -p1 < "$patch"; done
```

Then build:

```bash
sudo KVERSION=<kernel-version> dpkg-buildpackage -d -b -uc -us
```

Example:

```bash
sudo KVERSION=7.0.0-1002-sonic dpkg-buildpackage -d -b -uc -us
```

This compiles kernel modules, builds Python wheels, and produces 18 Debian packages under the parent directory.
