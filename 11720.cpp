/*
N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에 숫자 N개가 공백없이 주어진다.
*/

#include <iostream>
#include <vector>
#include <numeric>
#include <stdexcept>

using std::accumulate;
using std::cin;
using std::cout;
using std::endl;
using std::invalid_argument;
using std::vector;

int main()
{
    vector<int> v;   // 벡터 선언
    char num;        // 수는 문자열로 받음
    int totalNum;    // 총 입력할 수
    cin >> totalNum; // 총 입력할 수 입력
    if (totalNum < 1 || totalNum > 100)
    {
        throw invalid_argument("값 조건을 벗어났습니다.");
    }

    for (int i = 0; i < totalNum; i++)
    {
        cin >> num;
        v.insert(v.begin(), num - '0');
    }

    cout << accumulate(v.begin(), v.end(), 0) << endl;
}