#!/bin/python
from math import *
eq = input("Enter equation : ")
def f_of_x(z):
    x = z
    return float(format(eval(eq),'.10f'))

while True:
    print("Enter 'break' to break out of loop")
    x = input("Enter x : ")
    if x == 'break':
        break
    x = float(x)
    print(f_of_x(x))

print("Enter first approximation values")
a = int(input("x with -ve value : "))
b = int(input("x with +ve value : "))


print(f"hence a = {a} | b = {b} \n Root lies between {a} and {b}.")
approx = float(format(( ( (a*f_of_x(b)) - (b*f_of_x(a)) ) / (f_of_x(b) - f_of_x(a)) ), ".10f"))
print(f"1st approximation \nx1 = ({a}*{f_of_x(b)}) - ({b}*{f_of_x(a)}) / ({f_of_x(b)}) - ({f_of_x(a)})  \nx1 = {approx}")

for i in range(1,11):
    print(f"since f(x{i}) = {f_of_x(approx)}")
    if f_of_x(approx) < 0:
        a = approx
    if f_of_x(approx) > 0:
        b = approx
    print(f"hence Root lies between {a} and {b}\n\n")
    old_approx = approx
    approx = float(format(( ( (a*f_of_x(b)) - (b*f_of_x(a)) ) / (f_of_x(b) - f_of_x(a)) ), ".10f"))
    print(f"{i+1} approximation\nx{i+1} = ({a}*{f_of_x(b)}) - ({b}*{f_of_x(a)}) / ({f_of_x(b)}) - ({f_of_x(a)})  \nx{i+1} = {approx}")
    if float(format(old_approx,'.4f')) == float(format(approx,'.4f')):
        print(f"The correct value is {approx} or {float(format(approx,'.4f'))} to 5 significant digits")
        break
    
