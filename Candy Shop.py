n, k = list(map(int, input().split()))
myList = []
for i in range(n):
    myList.append(list(map(int, input().split())))

result = 0
cnt = 0
for i in range(n):
    if (myList[i])[1] == k:
        result += 1
    elif (myList[i])[0] * (myList[i])[1] == k:
        result += 1
    if (myList[i])[1] < k:
        cnt += (myList[i])[1]
        if cnt == k:
            cnt = 0
            result += 1
            

print(result % 998244353)






