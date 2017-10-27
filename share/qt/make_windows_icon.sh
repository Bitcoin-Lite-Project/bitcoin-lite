#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/bitcoinlite.png
ICON_DST=../../src/qt/res/icons/bitcoinlite.ico
convert ${ICON_SRC} -resize 16x16 bitcoinlite-16.png
convert ${ICON_SRC} -resize 32x32 bitcoinlite-32.png
convert ${ICON_SRC} -resize 48x48 bitcoinlite-48.png
convert bitcoinlite-16.png bitcoinlite-32.png bitcoinlite-48.png ${ICON_DST}

