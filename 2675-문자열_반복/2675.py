T = int(input())
for i in range(T):
    arr = input().split(' ')
    R = int(arr[0])
    S = arr[1]
    for j in range(len(S)):
        print(S[j]*R, end='') // end값 지정을 통해 줄바꿈하지 않고 연속해서 출력
    print("") // 줄바꿈
