#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int day = 1;
    double t = 0.8 * 2;
    while (a * 2 <= 100) 
    {
        a *= 2;
        t += 0.8 * a;
        day++;
    }
    double av = t / day;
    cout << "每天平均花费：" << av << " 元。" << endl;
    return 0;
}