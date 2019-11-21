# Unit2--comsci-shin

**DEVELOPMENT**
----------------
Making a binary counter that can count to 15

**Counting in Different Bases**
Our basic counting system is counting in base 10. This means that there are 10 possible digits - 0,1,2,3,4,5,6,7,8,9. When we reach the final digit in base 10 (9), we go up a digit to 10, then continue. Binary is counting in base 2- using only 1 and 0.
Counting in Binary is as follows-


![BinaryTable](binarycountingtable.png)

Other Examples-
Base 4- 0,1,2,3,10,11,12,13,20,21,22,23,30...
Base 8- 0,1,2,3,4,5,6,7,10,11,12,13,14,15,16,17...

**Conversion of Binary-Decimaal and Vice Versa**
From Binary-Decimal
-Line up the squares of 2- starting from 2^0 at the first digit, 2^1 , 2^2, and on and on.
-For every digit, if there is a 0, neglect the power of two that is assosciated with the digit
-For every digit, if there is a 1, add the power of two that is assosciated with the digit to a sum.
-The sum is your decimal number

Example- 10011011 to decimal
8 digits- left to right - 1, 2, 4, 8, 16, 32, 64, 128
There are 1's on the 1st,2nd,4th,5th,8th digits
Add the powers of two corresponding to digits- 1+2+8+16+128
Decimal = 155

From Decimal-Binary
divide decimal number by 2 until reaching 0, for every remainder, a 1, for every division without remainder, 0

Example- 63 to binary
63/2 = 31 r1 . 31/2 = 15 r1, 15/2 = 7 r1, 7/2 = 3 r1, 3/2 = 1 r1, 1/2 = 0 r1
binary- 111111


**CODE**
----------
Learning to use arduino
1 configuring 3leds 



