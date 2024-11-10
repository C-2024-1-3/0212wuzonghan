#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    cout << "输入一个数：";
    cin >> a;

    double xn = a;
    double xn1;
    do 
    {
        xn1 = 0.5 * (xn + a / xn);
        if (abs(xn1 - xn) < 1e-5) 
        {
            break;
        }
        xn = xn1;
    } while (true);

    cout << "平方根为：" << xn1 << endl;

    return 0;
}