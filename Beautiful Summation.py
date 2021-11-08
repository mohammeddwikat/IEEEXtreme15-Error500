p,q,n,m = list(map(int, input().split()))


def fast_power(a,p):
    if p == 0:
      return 1
    x = fast_power(a,p//2)
    x*=x
    if(p%2==1):
      x *= a
    return x

res = 0
for k in range(1, n+1):
    res += fast_power(k,q) * fast_power(p,k)
    res %= m
    
print(res)
