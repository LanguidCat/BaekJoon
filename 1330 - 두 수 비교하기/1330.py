a, b = map(int, input().split()) # split으로 공백을 구분, map으로 int형 입력을 a, b에 배분

if a > b: print('>')
elif a < b: print('<')
else: print('==')
