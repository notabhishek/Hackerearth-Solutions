//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

N = int(input())
items = [int(x) for x in input().split()]
i = 0
count = 0
counts = []
prevFlag = 0
possibleCombinations = []
prevCount = 0
while i < N:
    if items[i] == 0:
        if count != 0:
            counts.append(count)
            if prevFlag == 1:
                possibleCombinations.append(count+prevCount)
        if i!=0 and i!=N-1 and items[i+1] == 1 and items[i-1] == 1:
            prevFlag = 1
        else:
            prevFlag = 0
        prevCount = count
        count = 0
    else:
        count = count + 1
    i = i + 1
if count > 0:
    counts.append(count)
if prevFlag == 1:
    possibleCombinations.append(count + prevCount)
if len(counts) == 0:
    print (0)
elif len(counts) == 1:
    print (counts[0])
else:
    if len(possibleCombinations) == 0:
        print (max(counts) + 1)
    elif len(possibleCombinations) == 1:
        print (possibleCombinations[0])
    else:
        print (max(possibleCombinations) + 1)
