'''
두 정수 A와 B를 입력받은 다음, A×B를 출력하는 프로그램을 작성하시오.
'''

a, b = map(int, input().split())


def mul(a, b):
    num = a * b
    return num

c = mul(a, b)
print(c)
