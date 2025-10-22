import math

# Константи
PI = math.pi
D = 0.865
d = 0.532
g = 9.81
alpha_deg = 123.0
gama = 1.63
h = 245.6

# Переведення градусів у радіани
alpha_rad = math.radians(alpha_deg)

# Обчислення
F = g * h * gama
upper = 4 * F * math.cos(alpha_rad)
bottom = PI * ((D * d) - (d ** 2))
U = upper / bottom

# Вивід з округленням до 2 знаків після крапки
print(f"F = {F:.2f}")
print(f"U = {U:.2f}")

