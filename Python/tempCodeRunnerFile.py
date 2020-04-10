for number in range(100,1000):
    total = 0
    n2 = number
    while number != 0:
        total = total + (number%10) ** 3
        number = number//10
    if n2 == total:
        print(total)
