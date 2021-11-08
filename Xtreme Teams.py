from itertools import combinations

testCases = int(input())

for i in range(testCases):
    counterTeams = 0
    n,m = list(map(int, input().split()))
    comp = (list(combinations([int(input().replace('y','1').replace('n','0'),2) for h in range(n)], 3)))
    for c in comp:
        counterTeams += 1 if c[0] | c[1] | c[2] == (2 ** m) - 1 else 0
    print(counterTeams)


