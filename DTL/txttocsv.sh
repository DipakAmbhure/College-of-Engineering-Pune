#!/bin/sh

IFS=''
for f in colors.txt
do
	while read -r NAME
	do
		read -r name
		read -r RGBHex
		read -r R
		read -r G
		read -r B
		echo "${NAME#*=},${name#*=},${RGBHex#*=},${R#*=}.${G#*=}.${B#*=}" >> Colors.csv
	done < "$f"
done

