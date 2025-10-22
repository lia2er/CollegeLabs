# cmath - complex math вимога 
# для складного обчислення кореня
from cmath import *     # * - для використання функцій
                        # бібліотеки без префіксу cmath

# Константи
A = 1.85
B = 6.21

loopDefault = 22.0   # Початкове значення параметра циклу
loopEnd = 3.1      # Кінцеве значення параметра циклу
loopStep = -2.1     # Крок зміни параметра циклу

g = loopDefault # Аргумент

# Умовний цикл while виконується поки значення
# параметра = true
while (g>loopEnd):
    t = A*B*(1-sin(g+5)) + sqrt(B-pow(cos(g), 1/2))
    print(f"g = {g:.2f}\tt = {t.real:.2f}")
    g+=loopStep

