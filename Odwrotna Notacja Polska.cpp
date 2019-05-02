//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

a = input().split()
stack = []
for i in a:
    if i.isdigit():
        stack.append(int(i))
        continue
    elif i == 'false':
        stack.append(False)
        continue
    elif i == 'true':
        stack.append(True)
        continue
    elif len(stack) < 2:
        print('SYNTAX ERROR')
        break
    else:
        aux1 = stack.pop()
        aux2 = stack.pop()
        if type(aux1) != type(aux2) :
            print('TYPE ERROR')
            break
        elif i == '*' and type(aux1) is int:
            stack.append(aux1 * aux2)
        elif i == '+' and type(aux1) is int:
            stack.append(aux1 + aux2)
        elif i == '==' and type(aux1) is int:
            stack.append(aux1 == aux2)
        elif i == 'and' and type(aux1) is bool:
            stack.append(aux1 and aux2)
        elif i == 'or'and type(aux1) is bool:
            stack.append(aux1 or aux2)
        else:
            print('TYPE ERROR')
            break
else:
    aux1 = stack.pop()
    if aux1 == True:
        print('true')
    elif aux1 == False:
        print('false')
    else:
        print(aux1)
        print(aux1)
