#!/bin/bash
make -j 24
make modules
make modules_install
make install
reboot
