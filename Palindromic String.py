//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker



def palin(st) :
    l=len(s)
    mid=int(l/2)
    for i in range(mid) :
        if st[i]!=st[l-i-1] :
            return "NO"
    return "YES"
s=input()
print(palin(s))
