#!/bin/sh
echo "******STRING MANUPULATION*******"
echo "1. Compare strings "
echo "2. Concanate  strings "
echo "3. find Length of the string "
echo "4. find occurance of each character in string "
echo "5. Reverse the string "
echo "6.Exit"
echo "________________________________"
echo -n "Enter Your  choice  :  "
read choice
while [ $choice != 6 ]
do
	case $choice in
	 1) 
		echo -n "Enter String 1 : "
	    	read str1
		echo -n "Enter String 2 : "
		read str2
           	( [ $str1 = $str2 ] && echo "\"$str1\" and \"$str2\" are Equal" ) || echo "\"$str1\" and \"$str2\" Not equal."
	 	;;
	 2) 
		echo -n "Enter String 1 :  "
	    	read str1
		echo -n "Enter String 2 :  "
		read str2
	    	echo "Concatination of \"$str1\" and \"$str2\" is : "$str1$str2
	 	;;
	 3) 
		echo -n "Enter String :  "
		read str
		echo "Length of Enter string \"$str\" :  " ${#str}
	 	;;
	 4) 
		echo -n "Enter String :  "
		read str
		echo $str | awk '{for (i=1 ; i<=NF ; i++) array[$i]++ } END{ for (char in array) print char,array[char]}' FS=""
		 ;;
	 5)
		echo -n "Enter String :  "
		read str
		echo "Reverse String of string \"$str\" is : "`echo $str | rev`
	 	;;
	 *)
		echo "Please Enter Vaild Option...."
		;;
	esac
	echo -n "Enter choice Again :  "
	read choice

done

echo "Thank You!!!"
