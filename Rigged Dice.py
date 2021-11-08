testCases = int(input())

for i in range(testCases):
    n = int(input())

    sumAlice = 0
    sumBop = 0
    count6Dice2 = 0
    count6Dice1 = 0
    flag = True
    for j in range(n):
        a, b = list(map(int, input().split()))
        sumAlice += a
        sumBop += b
        if flag:
            if a == 6:
                count6Dice1 += 1
            if b == 6:
                count6Dice2 += 1
        else:
            if a == 6:
                count6Dice2 += 1
            if b == 6:
                count6Dice1 += 1

        if sumBop - sumAlice != 0:
            flag = not flag

    print(1) if count6Dice1 >= count6Dice2 else print(2)
       
