#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint << endl;
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//Ϊʲô���Ϊ-2?:testUnintԭֵ������short���͵�ȡֵ ����ֻ�ᱣ����16λ����ԭ�� �Ӷ��õ�ʮ���Ƶ�-2
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16�������
	cout << "output in Hex unsigned int type:" << oct << testUnint << endl; //8�������
	system("pause");
	return 0;
}
/*
������Ϊ��
output in unsigned int 1 type:65534
output in char type:
output in short type:-2
output in int type:65534
output in double type:65534
output in double type:6.553e+04
output in Hex unsigned int type:fffe
output in Hex unsigned int type:177776
*/