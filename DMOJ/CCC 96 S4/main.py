runs = int(input())
inputs = []
values= []
for i in range(runs):
    inputs.append(input().strip("=").split("+"))
    numbers = {1:"I", 4: "IV", 5: "V", 9: "IX", 10: "X", 40: "XL", 50: "L", 90: "XC", 100: "C", 400: "CD", 500: "D", 900: "CM", 1000: "M"}
    numerals = {v: k for k, v in numbers.items()}

for i in range(len(inputs)):
    values.append([])
    for j in range(2):
        end = len(inputs[i][j])
        value = 0
        while end > 0:
            r = inputs[i][j][end-2:end]
            if r in numerals.keys():
                value += numerals[r]
                end -= 2
            else:
                value += numerals[inputs[i][j][end-1:end]]
                end -= 1
        values[i].append(value)

results = []
for i in range(len(values)):
    a = values[i]
    sum = a[0] + a[1]
    if sum >= 1000:
        results.append("CONCORDIA CUM VERITATE")
    else:
        string = ""
        for key in reversed(numbers.keys()):
            while sum // key > 0:
                sum -= key
                string += numbers[key]
        results.append(string)

for i in range(len(inputs)):
    a = inputs[i]
    print(f"{a[0]}+{a[1]}={results[i]}")