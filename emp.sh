Shell script to compute the gross salary of an employee
#!/bin/bash
echo "\nEnter name of Employee :"
read name
echo "\nEnter DA :"
read da
echo "\nEnter HRA:"
read hra
echo "\nEnter basic"
read basic
sal=$(( $da + $hra + $basic ))
echo "\nGross Salary of $name is $sal"
Output
