#include <iostream>
using namespace std;

int main() 
{
    double num1, num2;
    bool a = 1;
    char op;
    cout << "�����һ�����֣�"<<endl;
    cin >> num1;
    cout << "��������� (+��-��*��/��%)��"<<endl;
    cin >> op;
    cout << "����ڶ������֣�"<<endl;
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
            cout << "��������Ϊ 0��" << endl;
            break;
        }
        result = num1 / num2;
        break;
    case '%':
        if (static_cast<int>(num2) == 0 || static_cast<int>(num1) != num1 || static_cast<int>(num2) != num2) 
        {
            a = false;
            cout << "ȡ�������������Ϊ 0 �Ҳ�����ӦΪ������" << endl;
            break;
        }
        result = static_cast<int>(num1) % static_cast<int>(num2);
        break;
    default:
        cout << "�Ƿ��������" << endl;
        a = false;
        break;
    }

    if (a)
    {
        cout << num1 << " " << op << " " << num2 << " = " << result << endl;
    }
    return 0;
}