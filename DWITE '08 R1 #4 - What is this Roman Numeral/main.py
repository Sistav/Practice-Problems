
inputs = []
values= []
for i in range(5):
    inputs.append(input())
    numbers = {1:"I", 4: "IV", 5: "V", 9: "IX", 10: "X", 40: "XL", 50: "L", 90: "XC", 100: "C", 400: "CD", 500: "D", 900: "CM", 1000: "M"}
    numerals = {v: k for k, v in numbers.items()}

for i in range(len(inputs)):
    end = len(inputs[i])
    value = 0
    while end > 0:
        r = inputs[i][end-2:end]
        if r in numerals.keys():
            value += numerals[r]
            end -= 2
        else:
            value += numerals[inputs[i][end-1:end]]
            end -= 1
    values.append(value)



for i in range(len(values)):
    print(values[i])