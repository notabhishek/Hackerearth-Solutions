//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

import sys
import math
from bisect import bisect

inp = sys.stdin.readlines()

n = int(inp[0])
stalls = [int(i) for i in inp[1].split()]
q = int(inp[2])
stalls.sort()

total, prev_stall = 0, 0
stall_totals = [0] * n
for j, stall in enumerate(stalls):
    total += (n - j) * (stall - prev_stall)
    stall_totals[j] = total
    prev_stall = stall

for i in range(3, q+3):
    k = int(inp[i])

    if n < 200:
        total, prev_stall, prev_total = 0, 0, 0
        done = False
        for j, stall in enumerate(stalls):
            total += (n - j) * (stall - prev_stall)
            if total == k:
                print(stall)
                done = True
                break

            elif total > k:
                offset = math.ceil((k - prev_total) / (n - j))
                print(prev_stall + offset)
                done = True
                break

            prev_stall = stall
            prev_total = total

        if not done:
            print(-1)

    else:
        index = bisect(stall_totals, k)
        if index == 0:
            print(math.ceil(k / n))
            continue
        elif index == n:
            print(-1)
            continue

        total = stall_totals[index-1]
        stall = stalls[index-1]
        if total == k:
            print(stall)
        else:
            offset = math.ceil((k - total) / (n - index))
            print(stall + offset)
