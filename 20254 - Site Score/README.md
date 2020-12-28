# 문제
Teams from variaous universities compete in ICPC regional contests for tickets to the ICPC World Finals. The number of tickets allocated to every regional contest may be different. The allocation method in our super region, Asia Pacific, is based on a parameter called site score.

Site scores will only count teams and universities solving at least one problem, in the regional contest or its preliminary contest TOPC. In 2020, the formula for calculating the site score of the Taipei-Hsinchu regional contest is much simpler than past years. Let

UR be the number of universities solving at least one problem in the regional contest.  
TR be the number of teams solving at least one problem in the regional contest.  
UO be the number of universities solving at least one problem in TOPC.  
TO be the number of teams solving at least one problem in TOPC.  
The site score of 2020 Taipei-Hsinchu regional contest will be 56UR + 24TR + 14UO + 6TO. Please write a program to compute the site score of the 2020 Taipei-Hsinchu regional contest.  

# 입력
The input has only one line containing four blank-separated positive integers UR, TR, UO, and TO.

# 출력
Output the site score of the 2020 Taipei-Hsinchu regional contest.

# 제한
0 < UR ≤ TR ≤ 120  
0 < UO ≤ TO ≤ 1000
# 예제 입력 1 
1 1 1 1
# 예제 출력 1 
100
# 예제 입력 2 
1 10 100 1000
# 예제 출력 2 
7696
