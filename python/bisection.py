#!/bin/python
from math import *
eq = input("Enter equation : ")
def f_of_x(x):
    return float(format(eval(eq),'.10f'))


while True:
    print("Enter 'break' to break out of loop")
    x = input("Enter x : ")
    if x == 'break':
        break
    print(f_of_x(float(x)))

print("Enter first approximation values")
a = int(input("x with -ve value : "))
b = int(input("x with +ve value : "))

for i in range(1,12):
    print(f"root must be ]{a} , {b}[")
    print("\nApprximation", i)
    c = float(format((a+b)/2,'.10f'))
    print(f'x{i} = ({a}+{b})/2 =',c)
    sol = f_of_x(c)
    print(f'f(x{i}) = {eq} = {sol}', end='')
    if sol < 0:
        print(f" < 0")
        a = c
    if sol > 0:
        print(f" > 0")
        b = c

