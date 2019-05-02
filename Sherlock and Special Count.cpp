//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

num_test_case = int(input())
if 1 <= num_test_case <= 100:
    for i in range(num_test_case):
        n,k = map(int,input().split())
        if 1 <= n <= 40 and 0 <= k <= 2000:
            num_list = [int(i) for i in range(1,n+1)]
            if (k % 2 != 0):
                print('NO')
            else:
                if (n % 2 == 0):
                    result = 0
                    for i in range(n-1,0,-2):
                        result += i
                    if k <= 2*result:
                        print('YES')
                    else:
                        print('NO')
                else:
                    result = 0
                    for i in range(n-1,-1,-2):
                        result += i
                    if k <= 2*result:
                        print('YES')
                    else:
                        print('NO')
