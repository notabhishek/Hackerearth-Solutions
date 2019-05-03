
//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker
v = 'aeiou'
for _ in range(int(input())):
    input()
    s = input().strip()
    r = s[0].upper()
    c = 0
    for i in s[1:]:
        if i in v:
            if c:
                r += str(c)
                c = 0
            if r[-1] != i:
                r += i
        else:
            c += 1
    if c:
        r += str(c)
    print(r)
