#include<iostream>
using namespace std;
int main()
{
	double V, h, r;
	cout << "输入圆锥底的半径" << endl;
	cin >> r;
	cout << "输入锥高" << endl;
	cin >> h;
	const double pai = 3.14;
	V = ((1.0 / 3) * h * r * r * pai);
	cout << "体积等于" << V << endl;
}