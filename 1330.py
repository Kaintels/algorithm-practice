'''
두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.
'''

a, b = map(int, input().split())

print(">") if a > b else print("<") if a < b else print("==")