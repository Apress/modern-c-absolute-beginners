# Errata for *Modern C for Absolute Beginners*

On **page 29** [code error]:

printf("Hello World!\nThis is a new line!") States "Hello World!" as the output instead of both lines.

***

On **page 44** [code error]:

printf statement format specifier is %.3f but should actually be %3.3f

***

In **Chapter 5.2 Arithmetic Operators**:

Replace the 4th paragraph with: Let us look at what the % modulus (or modulo) operator does. The result of the x % y expression is the remainder of the x / y integral division. For example, the result of the 9 % 2 is equal to 1. With integral division, 9 divided by 2 equals 4, so the result of the modulus operation is 1, because 9 minus 8 equals 1.

***

In **Chapter 9.5 Multidimensional Arrays**:

In the final paragraph, the following:

>   For example, to access the first element in a second row, we write `myarr[0][1]`; to access the...

should instead read:

>   For example, to access the **second** element in **the first** row, we write `myarr[0][1]`; to access the...
