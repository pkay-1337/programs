#!/bin/python
import math
import sympy
e = math.e
eq = input("Enter equation : ")
eq2 = str(sympy.Derivative(eq,'x').doit())
print(f"f'(x) = {eq2}")

def fx():
    return float(format(eval(eq),'.10f'))

def f_x():
    return float(format(eval(eq2),'.10f'))


print("Enter 'break' to break out of loop")
while True:
    x = input("Enter x : ")
    if x == 'break':
        break
    x = int(x)
    print(fx())


print("Enter first approximation values")
a = int(input("x with -ve value : "))
b = int(input("x with +ve value : "))

c = []
for i in range(0,11):
    x = float(format(a+(i/10),'.10f'))
    c.append(fx())
c = [abs(v) for v in c]
x = a+(c.index(min(c))/10)
print(f"Taking x0 = {x} ")

z = [0]
for i in range(1,6):
    print(f"{i} iteration     n = {i}")
    print(f"x{i} = x{i-1} - f(x{i-1})/f'(x{i-1})")
    print(f"x{i} = {x} - ({fx()}/{f_x()})")
    x = float(format(x-(fx()/f_x()),'.10f'))
    z.append(x)
    print(f"x{i} = {x} \n")
    if(float(format(z[-1],'.4f')) == float(format(z[-2],'.4f'))):
        break
