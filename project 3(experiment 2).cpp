#include <iostream>
using namespace std;

int main() {
    double side1, side2, side3;
    cout << "���������εĵ�һ���ߣ�"<<endl;
    cin >> side1;
    cout << "���������εĵڶ����ߣ�"<<endl;
    cin >> side2;
    cout << "���������εĵ������ߣ�"<<endl;
    cin >> side3;
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) 
    {
        double zc = side1 + side2 + side3;
        cout << "�����ε��ܳ�Ϊ��" << zc << endl;

        if ((side1 == side2 && side1 != side3) || (side1 == side3 && side1 != side2) || (side2 == side3 && side2 != side1)) 
        {
            cout << "���������ǵ��������Ρ�" << endl;
        }
        else 
        {
            cout << "�������β��ǵ��������Ρ�" << endl;
        }
    }
    else 
    {
        cout << "�������߲��ܹ��������Ρ�" << endl;
    }

    return 0;
}