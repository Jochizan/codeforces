t=int(input())
while(t>0):
    n=int(input())
    l=[int(s) for s in input().split()]
    s=c=0
    for i in range(n):
        if(s==0 and l[i]<0):
            c+=abs(l[i])
        else:
            s+=l[i]
        if(s<0):
            c+=abs(s)
            s=0
    print(c)
    t-=1
