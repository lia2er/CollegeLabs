def LiniaRamky(dr): # Функція для створення рамки
    print("\n")
    print("*="*dr,"*")
    

def SumaCyfr(c): # Функція для підрахунку суми поданих чисел
    b = int(c)
    sum = 0
    while(b>0):
        sum+=b%10
        b//=10
    return sum

MAXN = 10   # Максимальна кількість вводимих чисел

chysl,chmax,n,sumc,maxsum,nmax =0,0,0,0,0,0 # Оголошення змінних

print("\n\n Вводьте числа (0 - кінець):\n")
while(True):
    chysl = input()
    chysl = int(chysl)  
    if (chysl==0) or (n>=MAXN):  # Перевіркв введеного числа та кількості введених чисел
        break
    n += 1
    sumc = SumaCyfr(chysl)  # Підсумовка цифр в числі
    if (sumc>maxsum):
        maxsum = sumc
        nmax = n
        chmax = chysl

LiniaRamky(30)  #Побудова рамки та вивід результатів
print(f"Найбільшу суму цифр - {maxsum} має {nmax}-е число {chmax}");
LiniaRamky(30)
