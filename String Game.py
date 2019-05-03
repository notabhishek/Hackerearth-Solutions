//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

t = int(input())
for _ in range(t):
    strr = set(input())
    if len(strr)%2==0:
        print('Player2')
    else:
        print('Player1')
