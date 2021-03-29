import sys

T = int(sys.stdin.readline())

for i in range(T):
    N = int(sys.stdin.readline())
    # 학점 = C, 성적 = G
    score = 0
    gpa = 0
    for j in range(N):
        C, G = map(float, sys.stdin.readline().split())
        score += C
        gpa += C * G
    gpa /= score
    score = int(score)
    print(f"{score} {gpa:0.1f}")
