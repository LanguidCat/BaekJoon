string = input().split()
if "12345678" == ''.join(string):
    print("ascending")
elif "87654321" == ''.join(string):
    print("descending")
else:
    print("mixed")

