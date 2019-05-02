//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

def getRowMagicNumber(x,y):
    ret = 1
    for i in range(0,x):
        ans = 1
        for j in range(0,y-1):
            if(mat[i][j] == mat[i][j+1]):
                ans+=1
                if(ans > ret):
                    ret = ans
            else:
                if(ans > ret):
                    ret = ans
                ans = 1
    return ret

def getColMagicNumber(x,y):
    ret = 1
    for i in range(0,x):
        ans = 1
        for j in range(0,y-1):
            if(mat[j][i] == mat[j+1][i]):
                ans+=1
                if(ans > ret):
                    ret = ans
            else:
                if(ans > ret):
                    ret = ans
                ans = 1
    return ret

t = int(input())
for i in range(t):
    [r,c] = list(map(int, input().split()))
    mat = []
    for i in range(0,r):
        mat.append(list(map(int, input().split())))
    print(getRowMagicNumber(r,c)*getColMagicNumber(c,r))
