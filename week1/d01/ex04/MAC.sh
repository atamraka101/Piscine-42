#!/bin/sh
ifconfig -a | grep "ether" | grep -ioE '([a-f0-9]{2}:){5}..'

