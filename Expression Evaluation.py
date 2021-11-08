
testCases = int(input())


for i in range(testCases):
    operandKeys =['+', '*', '-']
    try:
        x = input()
        operandCount = 0
        numericCount = 0
        for _ in x :
            
            if _ in operandKeys:
                operandCount += 1
            if _.isnumeric():
                numericCount += 1
        if operandCount >= numericCount:
            print("invalid")
        else:
          
            print(eval(x)%1000000007)
            
    except :
        print("invalid")
