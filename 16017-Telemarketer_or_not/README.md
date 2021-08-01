# 문제
Here at the Concerned Citizens of Commerce (CCC), we have noted that telemarketers like to use seven-digit phone numbers where the last four digits have three properties. Looking just at the last four digits, these properties are:


the first of these four digits is an 8 or 9;

the last digit is an 8 or 9;

the second and third digits are the same.

For example, if the last four digits of the telephone number are 8229, 8338, or 9008, these are telemarketer numbers.

Write a program to decide if a telephone number is a telemarketer number or not, based on the last four digits. If the number is not a telemarketer number, we should answer the phone, and otherwise, we should ignore it.

# 입력
The input will be 4 lines where each line contains exactly one digit in the range from 0 to 9.

# 출력
Output either ignore if the number matches the pattern for a telemarketer number; otherwise, output answer.

# 예제 입력 1 

9

6

6

8

# 예제 출력 1 

ignore

The first digit is 9, the last digit is 8, and the second and third digit are both 6, so this is a telemarketer number.



# 예제 입력 2 

5

6

6

8

# 예제 출력 2 

answer

