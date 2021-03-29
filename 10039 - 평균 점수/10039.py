total = 0
for i in range(1, 6):
    score = int(input())
    if score < 40: total += 40
    else: total += score
print(int(total/5))
