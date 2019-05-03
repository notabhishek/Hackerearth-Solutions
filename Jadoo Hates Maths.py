//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

n=int(input())+1
while True:
    s=str(n)
    if n%3!=0 and '3' not in s:
        break
    n+=1
print(n)
