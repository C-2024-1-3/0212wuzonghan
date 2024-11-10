#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	 float F, C;
	 cout << "输入一个华氏温度" << endl;
	 cin >> F;
	 C = (F - 32.0) * 5.0 / 9.0;
	 cout << fixed << setprecision(2) << "此华氏温度下的摄氏温度为：" << C;


}