/*
N���� ���ڰ� ���� ���� �����ִ�. �� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
ù° �ٿ� ������ ���� N (1 �� N �� 100)�� �־�����. ��° �ٿ� ���� N���� ������� �־�����.
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
    vector<int> v;   // ���� ����
    char num;        // ���� ���ڿ��� ����
    int totalNum;    // �� �Է��� ��
    cin >> totalNum; // �� �Է��� �� �Է�
    if (totalNum < 1 || totalNum > 100)
    {
        throw invalid_argument("�� ������ ������ϴ�.");
    }

    for (int i = 0; i < totalNum; i++)
    {
        cin >> num;
        v.insert(v.begin(), num - '0');
    }

    cout << accumulate(v.begin(), v.end(), 0) << endl;
}