min = int(input())
max = int(input())

numbers = {"1":"1","0":"0","8":"8","6":"9","9":"6"}
counter = 0
for i in range(min,max):
    check = str(i)
    good = True
    for j in range(len(check)):
        if (not check[j] in numbers.keys()) or check[-(j+1)] != numbers[check[j]]:
            good = False
            break
    
    counter += good

print(counter)
