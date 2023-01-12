#!/bin/bash



echo "Enter Line number1"
read -a number1

echo "Input size: ${#number1[*]}"

echo "first: ${number1[0]}"

export FT_LINE1=${number1[0]}

echo "##########################"
echo "##########################"

echo "Enter Line number2"

read -a number2

echo "Input size: ${#number2[*]}"

echo "second: ${number2[0]}"

echo "Result"

export FT_LINE2=${number2[0]}


#cat /etc/passwd | grep -v "#" | awk 'NR>2' | rev | sort -r | awk "NR>=${number1[0]} && NR<=${number2[0]}"

cat /etc/passwd | grep -v "#" | awk 'NR%2==0' | rev | sort -r | awk "NR>=${FT_LINE1} && NR<=${FT_LINE2}" | tr "\/" " " | tr ":" " " | awk '{print $NF}' | tr "\n" "," | sed "s/,/, /g" | rev | cut -c 3- | rev | sed -e "s/\$/./"
cat /etc/passwd | grep -v "#" | awk 'NR%2==0' | rev | sort -r | awk "NR>=${FT_LINE1} && NR<=${FT_LINE2}" | tr "\/" " " | tr ":" " " | awk '{print $NF}' | tr "\n" "," | sed "s/,/, /g" | sed -e 's/,/./'







