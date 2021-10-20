echo "Enter the range m and n, m<n:"
read m n
echo The given range is from $m to $n
echo The prime numbers are:
while [ $m -le $n ]
do
i=2 ; flag=1
while [ $i -lt $m ]
do
if [ `expr $m % $i` -eq 0 ]
then
flag=0
break
else
i=`expr $i + 1`
fi
done
if [ $flag -eq 1 ]
then 
echo $m
fi
m=`expr $m + 1`
done
