#!/bin/sh

file="file.py"

if [ -r $file ]
then
	echo "File \"$file\" has read access"
else
	echo "File \"$file\"  doesn't have read access"
fi

if [ -w $file ]
then
	echo "File \"$file\" has write permission"
else
	echo "File \"$file\" doesn't have write permissions"
fi


if [ -x $file ]
then
	echo "File \"$file\" has execute permissions"
else
	echo "File \"$file\" doesn't have execute permissions"
fi


if [ -f $file ]
then
	echo "File \"$file\" is an ordinary file"
else
	echo "File \"$file\" is special file"
fi

if [ -d $file ]
then
	echo "File \"$file\" is a directory"
else
	echo "File \"$file\" is not directory"
fi
