//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

n,m=input().split(" ")
n=int(n)
m=int(m)
c=0
tp=0
for n in range(1,n):
    a,b=input().split(" ")
    a=int(a)
    b=int(b)
    tp=tp+a-b
    if(tp<0):
        tp=0
    if(tp>=m):
        c+=1
print(c)
