# 문제
2468년 개최된 해왕성 올림픽, ‘에리 - 카드’는 드디어 올림픽 정식 종목으로 채택된다. ‘에리 - 카드’는 N 장의 ‘공유 숫자카드’와 N 장의 ‘팀 숫자카드’를 받고 시작한다. 상대 팀은  우리 팀의 ‘팀 숫자카드’ K 장을 견제할 수 있는데, 견제된 카드는 낼 수 없게 된다. 모든 견제가 마친 후 우리 팀은 ‘공유 숫자카드’에서 한 장, ‘팀 숫자카드’ 중 한 장씩을 골라 내게 되는데, 두 카드의 곱이 우리 팀의 점수가 되며 이후 같은 방식으로 상대 팀도 진행하여 상대 팀의 점수보다 높을 경우 이기게 된다.

상대팀은 항상 최선의 방법으로 N장의 우리 팀의 ‘팀 숫자카드’ 중 K장을 견제한다고 했을 때, 우리 팀이 얻을 수 있는 최대 점수를 출력하는 프로그램을 작성하시오.

# 입력
첫째 줄에 N, K(0 ≤ K < N ≤ 100)가 주어지고 둘째 줄에는 N개의 ‘공유 숫자카드’에 적혀 있는 정수, 셋째 줄에는 N개의 ‘팀 숫자카드’에 적혀 있는 정수가 주어진다. 이 수는 -10,000보다 크거나 같고, 10,000보다 작은 정수이다.

# 출력
우리 팀이 얻을 수 있는 최대 점수를 출력한다.

# 예제 입력 1 
5 2  
-1 2 3 4 5  
-1 0 2 3 4  
# 예제 출력 1 
10  