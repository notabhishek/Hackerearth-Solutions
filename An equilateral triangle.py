//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

from math import floor
n=int(input())-3
ans  = floor(((n+3)**2 - 1)*((n+3)**2 - 3)/48) // see series on oasis encyclopedia
print(int(ans))
