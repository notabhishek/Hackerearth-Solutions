//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

s=list(input())
n=len(s)
q=int(input())
for _ in range(q):
    ind,ch=input().split()
    ind=int(ind)
    s[ind-1]=ch
print(*s,sep='')
prev=s
m=int(input())
for _ in range(m):
    l,r=map(int,input().split())
    s=s[0:l-1]+s[l-1:r][::-1]+s[r:]
print(*s,sep='')
cnt=0
for i in range(len(s)):
    if s[i]==prev[i]: cnt+=1
print(cnt)
