nums =0 # Оголошення змінних
char = 'a'

while(True):

    nums = int(input("\n\n Введіть число(0 щоб вийти):   "))
    
    if (nums == 0):
        break

    print(f"Ваше число - {nums}");
    
    char = input("Оберіть специфікацію числа(d, x, X, o, с): ")
    
    # Умови для перетворень
    if char == 'd': 
        print(f"Ваше конвертоване число - {nums:d}")
    elif char == 'x':
        print(f"Ваше конвертоване число - {nums:x}")
    elif char == 'X':
        print(f"Ваше конвертоване число - {nums:X}")
    elif char == 'o':
        print(f"Ваше конвертоване число - {nums:o}")
    elif char == 'c':
        ch = chr(nums)
        print(f"Ваше конвертоване число - {ch:s}")
    else:
        print("Спробуйте ще раз")
