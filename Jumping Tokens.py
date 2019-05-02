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


def capture(string, i, j, length, dir):
  if 0 <= j < length:
    if string[i] != string[j]:
      if dir == 1:
        string = string[:i] + string[i+1:j] + string[i] + string[j+1:]
      else:
        string = string[:j] + string[i] + string[j+1:i] + string[i+1:]
    else:
      string = ''
  else:
    string = ''

  return string

def solve(string, length, table):
  min_length = length

  if length == 2 or length == 1:
    return length

  if string in table:
    return table[string]

  for i in range(length):
    sa = capture(string, i, i + 2, length, 1)

    if sa:
      min_length = min(min_length, solve(sa, len(sa), table))

    sb = capture(string, i, i - 2, length, -1)

    if sb:
      min_length = min(min_length, solve(sb, len(sb), table))

  table[string] = min_length

  return min_length


def pos(string, color):
  for i, c in enumerate(string):
    if c == color:
      return i

def _solve(string, length):
  flag = 1

  if string == 'BRRRB' or string == 'RBBBR':
    return 3

  cb, cr = 0, 0

  for i, c in enumerate(string):
    if c == 'R':
      cr += 1
    elif c == 'B':
      cb += 1
    if i >= 1 and string[i] == string[i - 1]:
      flag = 0

  if cr == 0 or cb == 0 or flag == 1:
    return length

  elif cr == 1:
    r = pos(string, 'R')
    if r % 3 == (length - r - 1) % 3:
      return 3
    else:
      return 2
  elif cb == 1:
    r = pos(string, 'B')
    if r % 3 == (length - r - 1) % 3:
      return 3
    else:
      return 2
  else:
    return 2

def main():
  t = int(get_line())

  for _ in range(t):
    string = get_line().strip()
    #print(solve(string, len(string), table))
    print(_solve(string, len(string)))

main()
