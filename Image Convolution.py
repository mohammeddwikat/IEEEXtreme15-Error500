testCases = int(input())

while testCases:
    testCases -= 1
    counterCases = 0
    r, c = list(map(int, input().split()))
    image = [list(input()) for i in range(r)]
    a, b = list(map(int, input().split()))
    subImage = [list(input()) for i in range(a)]
    flag = False
    for ir in range(r):
        for ic in range(c):
            indexRow = ir
            indexCol = ic
            if indexRow + a > r or indexCol + b > c:
                break
            for ja in subImage:
                for jb in ja:
                    if jb == image[indexRow][indexCol] or jb == '?':
                        flag = True
                        indexCol += 1
                    else:
                        flag = False
                        break
                if flag == False:
                    break
                else:
                    indexCol = ic
                    indexRow += 1
            if flag:
                counterCases += 1
                flag = False
    print(counterCases)

