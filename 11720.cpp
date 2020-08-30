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
    for (int i = 0; i < totalNum; i++)
    {
        cin >> num;
        v.insert(v.begin(), num - '0');
    }

    cout << accumulate(v.begin(), v.end(), 0) << endl;
}