# liblkrt

_Linux Kernel Root Exploit Library._

## Motivation

The purpose of this project is to develop a framework for rooting android
devices using free/libre and open source software.

A majority of android devices are locked down and therefore cannot be
updated with community-supported patches and upgrades.

All major/well-known rooting apps are non-free software and therefore
cannot be entirely trusted.

## FAQ

### Why not use Metasploit?

Metasploit is written in Ruby, meant for interactive use,
and packed full of unnecessary features.

This project seeks to implement minimal, portable, 
non-interactive (embeddable) tooling for gaining root privileges.

## Scope

**Local privilege escalation exploits for the Linux kernel.**

While the primary target for this project is android devices, this library
could theoretically be used on any device running a Linux kernel.

## License

### liblkrt

SPDX-License-Identifier: [GPL-3.0-or-later](COPYING.lkrt)

### kbuild

SPDX-License-Identifier: [GPL-2.0-only](COPYING.kbuild)

### kbuild-template

SPDX-License-Identifier: [BSD-3-Clause](COPYING.kbuild-template)

## Reference

- [Android/Root - Gentoo Wiki](https://wiki.gentoo.org/wiki/Android/Root)

- [Dirty COW (CVE-2016-5195)](https://dirtycow.ninja)

- [[UNIVERSAL GUIDE] Root Any Android Device Manually!](https://forum.xda-developers.com/showthread.php?t=2684210)

## See Also

- [Metasploit](https://www.metasploit.com)

- [Drammer](https://www.vusec.net/projects/drammer)

