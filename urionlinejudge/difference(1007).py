***
solved on 24 sep 2020
Read four integer values named A, B, C and D. Calculate and print the difference of product A and B by the product of C and D (A * B - C * D).

Input
The input file contains 4 integer values.

Output
Print DIFERENCA (DIFFERENCE in Portuguese) with all the capital letters, according to the following example, with a blank space before and after the equal signal.

 Input Samples	Output Samples
5             duiffer=-26
6
7
8
***
a=int(input())
b=int(input())
c=int(input())
d=int(input())
print("DIFERENCA = ",(a*b)-(c*d),sep="")
