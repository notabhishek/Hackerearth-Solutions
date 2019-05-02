//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

import sys

lines = sys.stdin.readlines()
line_index = -1

def get_line():
  global lines, line_index

  line_index += 1
  return lines[line_index]


def getT(s, n):
  T = [0]
  for i in range(1, n):
    x = 2 * T[i - 1] + len(s[i])
    T.append(x)

  return T

def main():
  t = int(get_line())

  for _ in range(t):
    n, m = [int(x) for x in get_line().split()]

    s = ['']
    for __ in range(n):
      s.append(get_line().strip())

    T = getT(s, n + 1)

    ans = []
    for __ in range(m):
      k = int(get_line())

      for i in range(n, 0, -1):
        if k >= 2 * T[i - 1]:
          ans.append(s[i][k - 2 * T[i - 1]])
          break
        elif k >= T[i - 1]:
          # not sure about this...??
          k = 2 * T[i - 1] - k - 1

    print(''.join(ans))

main()
