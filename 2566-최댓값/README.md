<그림 1>과 같이 9×9 격자판에 쓰여진 81개의 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 행 몇 열에 위치한 수인지 구하는 프로그램을 작성하시오.

예를 들어, 다음과 같이 81개의 수가 주어지면

![image](https://user-images.githubusercontent.com/45219806/103602308-0c29aa80-4f4f-11eb-9f23-884bfbc51527.png)

이들 중 최댓값은 90이고, 이 값은 5행 7열에 위치한다.

# 입력
첫째 줄부터 아홉 번째 줄까지 한 줄에 아홉 개씩 자연수가 주어진다. 주어지는 자연수는 100보다 작다.

# 출력
첫째 줄에 최댓값을 출력하고, 둘째 줄에 최댓값이 위치한 행 번호와 열 번호를 빈칸을 사이에 두고 차례로 출력한다. 최댓값이 두 개 이상인 경우 그 중 한 곳의 위치를 출력한다.

# 예제 입력 1 
3&nbsp;23&nbsp;85&nbsp;34&nbsp;17&nbsp;74&nbsp;25&nbsp;52&nbsp;65  
10&nbsp;7&nbsp;39&nbsp;42&nbsp;88&nbsp;52&nbsp;14&nbsp;72&nbsp;63  
87&nbsp;42&nbsp;18&nbsp;78&nbsp;53&nbsp;45&nbsp;18&nbsp;84&nbsp;53  
34&nbsp;28&nbsp;64&nbsp;85&nbsp;12&nbsp;16&nbsp;75&nbsp;36&nbsp;55  
21&nbsp;77&nbsp;45&nbsp;35&nbsp;28&nbsp;75&nbsp;90&nbsp;76&nbsp;1  
25&nbsp;87&nbsp;65&nbsp;15&nbsp;28&nbsp;11&nbsp;37&nbsp;28&nbsp;74  
65 27 75 41 7 89 78 64 39  
47 47 70 45 23 65 3 41 44  
87 13 82 38 31 12 29 29 80  
# 예제 출력 1 
90  
5 7
