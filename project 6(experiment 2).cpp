#include <iostream>
using namespace std;

int P(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int Q(int a, int b)
{
    return a * b / P(a, b);
}

int main() {
    int a, b;
    cout << "�����һ����������";
    cin >> a;
    cout << "����ڶ�����������";
    cin >> b;

    int m = P(a, b);
    int n = Q(a, b);

    cout << "���Լ���ǣ�" << m << endl;
    cout << "��С�������ǣ�" << n << endl;

    return 0;
}