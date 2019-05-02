//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

import math
n=int(input())
x=int(math.sqrt(n))
while n%x!=0 :
    x-=1
print(int(x+n/x))
