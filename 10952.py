'''
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
'''

check = 0
while check == 0:
  a, b = map(int, input().split())
  if a == 0 and b == 0:
    check = 1
  else:
    print(a+b)