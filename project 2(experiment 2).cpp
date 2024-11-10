#include<iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "输入x" << endl;
	cin >> x;
	if (x < 1 && x>0)
	{
		y = 3 - 2*x;
		cout << "y=" << y << endl;
	}
	if (x >= 1 && x < 5)
	{
		y = (2 / (4 * x)) + 1;
		cout << "y=" << y << endl;
	}
	if (x >= 5 && x < 10)
	{
		y = x * x;
		cout << "y=" << y << endl;
	}
	if (x <= 0 || x >= 10)
	{
		cout << "x不在定义域内" << endl;
	}
}
//分别输入0.2，1，5，0
//分别输出2.6，1.5，25，x不在定义域内