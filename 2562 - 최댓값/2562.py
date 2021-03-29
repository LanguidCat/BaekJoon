a = []
for i in range(9):
    ip = int(input())
    a.append(ip) # list a에 입력받기
A = a[:] # a 전체 복사해서 list A에 저장
A.sort() # list A 오름차순으로 정렬
b = A[-1] # A중 가장 마지막 값 저장
w = a.index(b) + 1 # a중 b의 위치 + 1
print(b)
print(w)
