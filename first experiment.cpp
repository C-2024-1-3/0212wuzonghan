//第一题

/*
#include <iostream>
using namespace std;
int gy(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int gb(int p, int q)
{
    return p * q / gy(p, q);
}
int main()
{
    int m, n;
    cout << "输入第一个自然数" << endl;
    cin >> m;
    cout << "输入第二个自然数" << endl;
    cin >> n;
    int p, q;
    p = gy(m, n);
    q = gb(m, n);
    cout << "最大公约数为：" << p << endl << "最小公倍数为：" << q << endl;
}
*/

//第二题

/*
#include<iostream>
using namespace std;
bool is_prime(int num)
{
    if (num <= 1)
        return false;
    if (num == 2 || num == 3)
        return true;
    for (int m = 2; m < num; m++)
    {
        if (num % m == 0)
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    int a=0,b=0;
    while (b < 200)
    {
        if (is_prime(a))
        {
            cout << a << '\t';
            b++;
            if (b % 10 == 0)
            {
                cout << endl;
            }
        }
        a++;
    }
    return 0;
}
*/

//第三题

/*
#include<iostream>
#include "mytemperature.h"
#include <iomanip>
using namespace std;
int main()
{
    cout << "Celsius" << '\t' << '\t' << "Fahrenheit" << '\t' << "|" << '\t' << "Fahrenheit" << '\t' << "Celsius" << endl;
    for (double m = 40.0,n = 120.0; m >= 31.0; m--)
    {
        cout<< fixed << setprecision(1) << m << '\t' << '\t' << celsius_to_fah(m) << '\t' << '\t' << "|" << '\t' << n << '\t' << '\t' << fixed << setprecision(2)<< fahrenheit_to_cels(n) << endl;
        n = n - 10.0;
    }
    return 0;
}
*/

//第四题

/*
#include<iostream>
using namespace std;
int houzi(int m,int p)
{
    if (p <= 9)
    {
        m = houzi(2 * (m + 1), p + 1);
    }
    return m;
}
int main()
{
    int a = 1, b = 1;
    a = houzi(a,b);
    cout << a << endl;
}
*/
