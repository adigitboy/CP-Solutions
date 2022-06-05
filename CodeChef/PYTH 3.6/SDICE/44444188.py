t = int(input())
for test in range(t):
    n = int(input())
    if n==1:
        print(20)
    elif n==2:
        print(36)
    elif n==3:
        print(51)
    elif n==4:
        print(60)
    else:
        remi = n%4
        ans = ((n-remi)//4)*44
        if remi==0:
            ans += 16
        elif remi==1:
            ans += 32
        elif remi==2:
            ans += 44
        elif remi==3:
            ans += 55
        print(ans)
