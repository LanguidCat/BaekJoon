import sys
Bin = sys.stdin.readline().rstrip()

if len(Bin) % 3 == 2:
    Bin = "0" + Bin

elif len(Bin) % 3 == 1:
    Bin = "00" + Bin

Oct = ""
for i in range(0, len(Bin), 3):
    tmp = int(Bin[i]) * 4 + int(Bin[i + 1]) * 2 + int(Bin[i + 2])
    Oct += str(tmp)
print(Oct)
