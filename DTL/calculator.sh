# !/bin/sh

echo "*********Calculator*********"
echo "1.Add"
echo "2.Substract"
echo "3.Multiply"
echo "4.Divide"
echo "5.Exit"
echo "______________________________"
echo -n "Select Your choice :   "
read option
while [ $option != 5 ]
do								#while loop starts
	echo -n "Number 1 :  "  	 			#Number1 input
	read N1
	echo -n "Number 2 :  "	    				#Number2 input
	read N2
	case $option in			  		#switch case starts
	1)
		echo "$N1 + $N2 = $((N1 + N2)) " ;;  		#addition
	2)
		echo "$N1 - $N2 = $((N1 - N2))"  ;;	 	#substraction
	3)
		echo "$N1 x $N2 = $((N1 * N2))"  ;; 	 	#Multiplication
	4)
		if [ $N2 != 0 ]           	 		#if else statement
			then
				echo "$N1 / $N2 = $((N1 / N2))"
			else
				echo "Zero Division Error....."
		fi ;;							#if else ends
	*)
		echo "Sorry at this moment We can calculate only from given options!!!!" ;;
	esac								#switch ends
	echo -n "Select Your choice :  "
	read option
done									#while ends

echo "Thanks You!!!!"
