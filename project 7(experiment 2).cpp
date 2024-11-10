#include<iostream>
using namespace std;
int main()
{
	int a = 1;
	for (1; a <= 5; a++)
	{
		for (int b = 1; b < a; b++)
		{
			cout << "*";
		}
		cout << "*" << endl;
		cout << endl;
	}
}