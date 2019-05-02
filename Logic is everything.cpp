//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

noOfCases = int(input())

for i in range(noOfCases):
    sum = int(input())

    if(sum%10 == 0):
        print(2)
    else:
        print(1)
        print(sum%10)
