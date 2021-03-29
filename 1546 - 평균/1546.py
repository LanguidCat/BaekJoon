N = int(input()) # 시험 과목의 개수
score = map(int, input().split() # 입력을 공백으로 구분해 int형으로 list 만들기
score.sort() # list score을 오름차순 정렬
M = score[-1] # 최대 점수 M
score_cheated = [] # 조작용 list 생성
for i in range(N): score_cheated.append(score[i]/M*100) # 점수 각각의 조작
sum = 0
for i in range(N): sum += score_cheated[i] # 전체 합산
print(sum/N) # 
