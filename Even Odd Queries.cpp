//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

from sys import stdin,stdout
from math import gcd

for i in range(int(input())):
    n,q=map(int, stdin.readline().split())
    arr = list(map(int, stdin.readline().split()))
    even=[0]
    odd=[0]
    even_num=0
    odd_num=0
    for i in arr:
        if i%2==0:
            even_num+=1
            even.append(even_num)
            odd.append(odd_num)
        else:
            odd_num+=1
            even.append(even_num)
            odd.append(odd_num)
    for j in range(q):
        k,l,r=map(int, stdin.readline().split())
        if k == 1:
            p=odd[r]-odd[l-1]
            q=r-l+1

        elif k == 0:
            p=even[r]-even[l-1]
            q=r-l+1
        a=gcd(p,q)
        b=p+q-a
        t=a
        if (p==q or p==0):
            xyz=p//q
            stdout.write("%i\n"%xyz)
        else:
            xy=p//t
            yz=q//t
            stdout.write("%i %i\n"%(xy,yz))
