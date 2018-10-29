
Debian
====================
This directory contains files used to package calypsod/calypso-qt
for Debian-based Linux systems. If you compile calypsod/calypso-qt yourself, there are some useful files here.

## calypso: URI support ##


calypso-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install calypso-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your calypsoqt binary to `/usr/bin`
and the `../../share/pixmaps/calypso128.png` to `/usr/share/pixmaps`

calypso-qt.protocol (KDE)

