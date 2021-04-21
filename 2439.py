'''
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.
'''

n = int(input())
list_command = [" " for i in range(n)]

for i in range(n):
  list_command.pop(-(i+1))
  list_command.append("*")
  print("".join(list_command))