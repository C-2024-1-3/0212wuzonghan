#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	 float F, C;
	 cout << "����һ�������¶�" << endl;
	 cin >> F;
	 C = (F - 32.0) * 5.0 / 9.0;
	 cout << fixed << setprecision(2) << "�˻����¶��µ������¶�Ϊ��" << C;


}