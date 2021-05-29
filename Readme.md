# TL-WR841N Playground

This repository contains all the code, files and misc. things related with my work with the TP-Link TL-WR841N.

I'm including the firmwares as a backup as I don't trust TP-Link's website.


# Fimwares

## TL-WR841Nv14_ES_0.9.1_4.16_up_boot[180515-rel41770].bin

- SHA1: 1203c163da4d91668dd33a9cab4e92a2377f1a22
- Version: 0.9.1 4.16 v01e4.0 Build 180515 Rel.41770n

This is the base firmware installed in the Router.

## TL-WR841Nv14_US_0.9.1_4.18_up_boot[210203-rel37242].bin

- SHA1: b1914bbe0c0a0a5ff9c6acadabb6be8d96010eca
- Version:

This is the target firmware that I wanted to install.

# Fuzzing (Update 28/05/2021)

`fuzzing` directory contains various files mentioned in the blogpost I wrote, specifically:

- `fuzzing_patches` directory contains patch files ready to apply changes in the required files to be able to fuzz UPnP library (`http_RecvMessage` function)
- `tests` directory contains two C source files with simple examples

To make the examples work out of the box using the provided Makefile, put the `tests` folder inside the `upnp_libs` folder part of the distributed GPL code from TP-Link's website: [TL-WR841NV14.tar.gz](https://static.tp-link.com/resources/gpl/TL-WR841NV14.tar.gz)