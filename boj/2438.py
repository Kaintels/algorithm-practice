"""
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
"""


def calculate():
    star_num = int(input())
    if star_num > 100:
        raise ValueError
    if star_num < 1 or star_num == 0:
        raise ValueError

    for i in range(1, star_num + 1, 1):
        print("*" * i)


try:
    calculate()
except ValueError:
    print("값 조건을 벗어났습니다.")
