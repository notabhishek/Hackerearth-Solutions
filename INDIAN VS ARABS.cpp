//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

for _ in range(int(input())):
    n = int(input())
    a = [int(x) for x in input().split()]
    res = n
    s = 0
    k = sum(a)
    for i in range(n):
        s+=a[i]
        if i-k >= 0:
            s-=a[i-k]
        res = min(res,k-s)
    s=0
    k=n-k
    for i in range(n):
        s+=1-a[i]
        if i-k>=0:
            s-=1-a[i-k]
        res = min(res,k-s)
    print(res)
