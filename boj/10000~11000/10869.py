# -*- coding:utf-8 -*-
"""
두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오
"""

a, b = map(int, input().split())

c = a + b
d = a - b
e = a * b
f = int(a / b)
g = a % b
print(c)
print(d)
print(e)
print(f)
print(g)