
Debian
====================
This directory contains files used to package allmnd/allmn-qt
for Debian-based Linux systems. If you compile allmnd/allmn-qt yourself, there are some useful files here.

## allmn: URI support ##


allmn-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install allmn-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your allmn-qt binary to `/usr/bin`
and the `../../share/pixmaps/allmn128.png` to `/usr/share/pixmaps`

allmn-qt.protocol (KDE)

