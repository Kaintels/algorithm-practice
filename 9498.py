'''
시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 
나머지 점수는 F를 출력하는 프로그램을 작성하시오.
'''

score = int(input())

if score >= 90 and score <= 100:
    print("A")
if score >= 80 and score < 90:
    print("B")
if score >= 70 and score < 80:
    print("C")
if score >= 60 and score < 70:
    print("D")
if score < 60:
    print("F")