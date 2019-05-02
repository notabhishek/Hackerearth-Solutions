//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

n = int(input())
arr = []
for i in range(n):
    arr.append(input().split())

for i in range(len(arr)):
    cost = 0
    n = int(arr[i][0])
    a = int(arr[i][1])
    b = int(arr[i][2])

    while(n >= 1):
        if (((n / 2) * a) > b):
            if(n % 2 == 0):
                n /= 2
                cost += b

            else:
                n -= 1
                cost += a

        else:
            n -= 1
            cost += a
    print(cost)
