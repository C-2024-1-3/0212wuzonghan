#include<iostream>
using namespace std;
int main()
{
	double V, h, r;
	cout << "����Բ׶�׵İ뾶" << endl;
	cin >> r;
	cout << "����׶��" << endl;
	cin >> h;
	const double pai = 3.14;
	V = ((1.0 / 3) * h * r * r * pai);
	cout << "�������" << V << endl;
}