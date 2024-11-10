#include <iostream>
using namespace std;

int main() 
{
    char ch;
    cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') 
    {
        cout << static_cast<char>(ch - 32) << endl;
    }
    else 
    {
        cout << static_cast<int>(ch + 1) << endl;
    }

    return 0;
}