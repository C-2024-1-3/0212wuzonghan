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
    cout << "输入第一个正整数：";
    cin >> a;
    cout << "输入第二个正整数：";
    cin >> b;

    int m = P(a, b);
    int n = Q(a, b);

    cout << "最大公约数是：" << m << endl;
    cout << "最小公倍数是：" << n << endl;

    return 0;
}