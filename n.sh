#!/bin/bash
echo "Enter a number"
read n
i=1
sum=0
while [ $i -le $n ]
  do
   echo "$i"
   sum=$(( $sum + $i ))
        i=$(( $i + 1 ))
  done
echo "Sum=$sum"
