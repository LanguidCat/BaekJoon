# 문제
In the recent years children in Byteland have been hardly reading any books. This has a negative influence on the knowledge of orthography among Byteland residents. Teachers at schools do their best to change this situation. They organize many different tests and contests. The objective is to increase the knowledge of orthography among pupils. This, however, does not improve the situation much. Many children own dyslexia certificate, which allows them not to care about the orthographical mistakes that they make. Ministry of Education decided to counteract this situation. It has been decided that every owner of a dyslexia certificate has to prove that she or he is indeed dyslexic. There are so many children affected by dyslexia in Byteland that it is required to automate the process of validation. All children will have to rewrite a special set of texts on a computer. The number of mistakes made will make it possible to decide, whether the pupil is a dyslexic or not. Ministry of Education would like you to prepare a validating program for this test.

Write a program which:

reads two texts from the standard input - the original one and the version rewritten by a pupil,  
determines the number of letters that were rewritten incorrectly,  
writes the result to the standard output.  
# 입력
In the first line there is one integer n (1 ≤ n ≤ 100 000), representing the length of the original text (it is also the length of the second text). The second line contains the original text. It consists of n small and/or capital letters of the English alphabet. The third line contains the text rewritten by a pupil. It also consists of n small and/or capital letters of the English alphabet.

# 출력
The first and only line of output should contain one non-negative integer - the number of letters that were rewritten incorrectly.

# 예제 입력 1 
21  
JASIOJESTDYSLEKTYKIEM  
JAsIOJSSTDXSIEKTYKLEM  
# 예제 출력 1 
5
