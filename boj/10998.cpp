#include <iostream>

/*
두 정수 A와 B를 입력받은 다음, A×B를 출력하는 프로그램을 작성하시오.
*/

using std::cin;
using std::cout;

int main()
{
	int a, b, c; // 변수 선언

	cin >> a;  // 입력
	cin >> b;  // 입력
	c = a * b; // 입력된 두 값을 곱함
	cout << c; // 곱한 값을 출력
}
