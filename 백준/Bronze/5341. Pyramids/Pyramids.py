while 1:
    layers = int(input())
    if layers == 0:
        break

    else:
        result = 0
        for i in range(1, layers+1):
            result += i

        print(result)


