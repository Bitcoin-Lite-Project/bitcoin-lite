
Debian
====================
This directory contains files used to package bitcoinlited/bitcoinlite-qt
for Debian-based Linux systems. If you compile bitcoinlited/bitcoinlite-qt yourself, there are some useful files here.

## bitcoinlite: URI support ##


bitcoinlite-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install bitcoinlite-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your bitcoinlite-qt binary to `/usr/bin`
and the `../../share/pixmaps/bitcoinlite128.png` to `/usr/share/pixmaps`

bitcoinlite-qt.protocol (KDE)

