#include <iostream>
using namespace std;

int main() 
{
    double num1, num2;
    bool a = 1;
    char op;
    cout << "输入第一个数字："<<endl;
    cin >> num1;
    cout << "输入运算符 (+、-、*、/、%)："<<endl;
    cin >> op;
    cout << "输入第二个数字："<<endl;
    cin >> num2;
    double result;
    switch (op) 
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0) 
        {
            a = false;
            cout << "除数不能为 0。" << endl;
            break;
        }
        result = num1 / num2;
        break;
    case '%':
        if (static_cast<int>(num2) == 0 || static_cast<int>(num1) != num1 || static_cast<int>(num2) != num2) 
        {
            a = false;
            cout << "取余运算除数不能为 0 且操作数应为整数。" << endl;
            break;
        }
        result = static_cast<int>(num1) % static_cast<int>(num2);
        break;
    default:
        cout << "非法运算符。" << endl;
        a = false;
        break;
    }

    if (a)
    {
        cout << num1 << " " << op << " " << num2 << " = " << result << endl;
    }
    return 0;
}