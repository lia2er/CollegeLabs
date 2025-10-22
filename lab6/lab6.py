from math import *

A = -2.0
B = -8.0
PI = 3.14

i = 0
y = 0

i = float(input("Введіть i:"))

if (i < B):
    y = pow(B, 3) + log((fabs(PI)+fabs(i)), 2)
    print(f"гілка 1: y = b^3+ln^2|i+pi| = {y:.2f}")
    print(f"Ваш аргумент: i = {i:.2f}\nРезультат: y = {y:.2f}")
elif (i > A):
    y = pow(i, 3) + log((fabs(PI)+fabs(i)), 2)
    print(f"гілка 2: y = i^3+ln^2|i+pi| = {y:.2f}")
    print(f"Ваш аргумент: i = {i:.2f}\nРезультат: y = {y:.2f}")
else:
    print("функція не визначена для цього i." )
