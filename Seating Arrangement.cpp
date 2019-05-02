//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

def findseat(n) :
    k=n%12
    if k==1:
        n+=11
        print(str(n)+' WS')
        return;
    if k==2:
        n+=9
        print(str(n)+' MS')
        return;
    if k==3:
        n+=7
        print(str(n)+' AS')
        return;
    if k==4:
        n+=5
        print(str(n)+' AS')
        return;
    if k==5:
        n+=3
        print(str(n)+' MS')
        return;
    if k==6:
        n+=1
        print(str(n)+' WS')
        return;
    if k==7:
        n-=1
        print(str(n)+' WS')
        return;
    if k==8:
        n-=3
        print(str(n)+' MS')
        return;
    if k==9:
        n-=5
        print(str(n)+' AS')
        return;
    if k==10:
        n-=7
        print(str(n)+' AS')
        return;
    if k==11:
        n-=9
        print(str(n)+' MS')
        return;
    if k==0:
        n-=11
        print(str(n)+' WS')
        return;

t=int(input())
for i in range(t) :
    n=int(input())
    findseat(n)
    i+=1
