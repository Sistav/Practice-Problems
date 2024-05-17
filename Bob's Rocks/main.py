input()
st = input()
a = st.split(" ")

highest = 0
highest_num = 0
for i in a:
    inti = int(i)
    dea = a.count(i) * inti
    if dea > highest:
        highest_num = inti
        highest = dea
print(highest_num)