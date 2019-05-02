//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

def main():
    n,k = map(int,input().split())
    A =  set([int(i) for i in input().split()])
    a1 = A
    a2 = A
    for _ in range(2,k+1):
        a2 = set([x|y for x in a2 for y in a2 if x|y not in a1])
        a1.update(a2)
    print(len(a1))

if __name__ == "__main__":
    main()
