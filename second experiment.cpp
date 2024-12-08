//(一)
//第一题

/*
#include<iostream>
using namespace std;
int main()
{
	int a[10],c[10],n=0;
	cout << "Enter ten number:";
	for (int i = 0; i < 10; i++) 
	{
		cin >> a[i];
		bool h = true;
		for (int j = 0; j < n; ++j) 
//比较新数组中有没有与新输入的数相同的数 有则不移入数组
		{
			if (a[i] == c[j]) 
			{
				h = false;
				break;
			}
		}
		if (h == true) 
		{
			c[n] = a[i];
			n++;
		}
	}

	cout << endl;
	cout << "The distinct numbers are:";
	for (int j = 0; j < n; j++)
	{
		cout << c[j] << " ";
	}
	return 0;

}
*/

//第二题

/*
#include<iostream>
using namespace std;
int main()
{
	double a[10];
	cout << "输入十个数：" << endl;
	for (int m = 0; m < 10; m++)
	{
		cin >> a[m];
	}
	for (int b = 9; b > 0; b--)
	{
		for (int c = 0; c < b; c++)
		{
			if (a[c] > a[c + 1])
			{
				int p = a[c];
				a[c] = a[c + 1];
				a[c + 1] = p;
			}
		}
	}
	cout << "排序后：" << endl;
	for (int m = 0; m < 10; m++)
	{
		cout << a[m] << " ";
	}
}
*/

//第三题

/*
#include<iostream>
using namespace std;
int main()
{
	bool m[100];
	for (int a = 0; a < 100; a++)
	{
		m[a] = false;
	}
	for (int b = 1; b <= 100; b++)
	{
		for (int c = 1; c * b <= 100; c++)
		{
			int q = c * b;
			m[q] = !m[q];
		}
	}
	for (int d = 0; d < 100; d++)
	{
		if (m[d] == true)
		{
			cout << d << " ";
		}
	}
}
*/

//第四题

/*
#include<iostream>
#include<string>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int m = size1 + size2;
	for (int i = 0; i < m; i++)
	{
		if (i < size1)
		{
			list3[i] = list1[i];
		}
		else
		{
			list3[i] = list2[i - size1];
		}
	}
	for (int i = m-1; i > 0; i--)
	{
		for (int c = 0; c < i; c++)
		{
			if (list3[c] > list3[c + 1])
			{
				int q = list3[c];
				list3[c] = list3[c + 1];
				list3[c + 1] = q;
			}
		}
	}

}
int main()
{
	int m, n;
	cout << "输入第一个数组有多少个数：" << endl;
	cin >> m;
	int a[20];
	int b[20];
	cout << "输入第一个数组的数：" << endl;
	for (int i = 0; i < m; i++)
	{
		cin >> a[i];
	}
	cout << "输入第二个数组有多少个数：" << endl;
	cin >> n;
	cout << "输入第二个数组的数：" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	int c[40];
	merge(a, m, b, n, c);
	cout << "合并并排序后：" << endl;
	for (int i = 0; i < m + n; i++)
	{
		cout << c[i] << " ";
	}
}
*/

//第五题

/*
#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	bool h = false;
	int len1 = 0, len2 = 0;
	for (int i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (int i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}
	if (len1 >= len2)
	{
		return -1;
	}
	else
	{
		for (int i = 0; i < len2; i++)
		{
			for (int o = 0; o < len1; o++)
			{
				if (s2[i] == s1[o])
				{
					h = true;
					return i;
					break;
				}
			}
			if (h == true)
			{
				break;
			}
		}
		if (h == false)
		{
			return -1;
		}
	}
}
int main()
{
	char m[30];
	cout << "Enter the first string:" << endl;
	cin.getline(m, 30);
	char n[30];
	cout << "Enter the second string:" << endl;
	cin.getline(n, 30);
	int k;
	k = indexOf(m, n);
	if (k == -1)
	{
		cout << "不是子串" << endl;
	}
	else
	{
		cout << "是子串，下标为：" << k << endl;
	}
}
*/

//第六题

/*
#include <iostream>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		for (int o = 0; o < 26; o++)
		{
			if (s[i] == char(65 + o) || s[i] == char(97 + o))
			{
				counts[o]++;
				break;
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			if (counts[i] == 1)
			{
				cout << char(65 + i) << ":" << counts[i] << " time" << endl;
			}
			else
			{
				cout << char(65 + i) << ":" << counts[i] << " times" << endl;
			}
		}
	}
}
int main()
{
	int counts[26];
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	char m[30];
	cout << "Enter the first string:" << endl;
	cin.getline(m, 30);
	count(m, counts);
}
*/

//(二)
//第一题(1)

/*
#include<iostream>
using namespace std;
void main()     
{
int i, j, * pi, * pj;     //此处的*表示定义指针变量，而非间接运算符       
pi=&i;       
pj=&j;       
i=5;j=7;      
cout<<i<<'\t' << j << '\t' << pi << '\t' << pj;
cout<<&i<<'\t' << *&i << '\t' << &j << '\t' << *&j;
} 
*/

//(2)

/*
#include<iostream>
#include<stdio.h>
using namespace std;
int main()   //C语言程序，要了解
{
	int a[] = { 1,2,3 };
	int* p, i;
	p = a;    //将数组a首地址送给p
	for (i = 0; i < 3; i++)
	printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));  //与cout功能差不多
}
*/

//(3)

/*
#include<iostream>
#include<stdio.h>
using namespace std;
void f(char* st, int i)
{
	st[i] = '\0';
	cout << st;
	if (i > 1)
	{
		f(st, i - 1);
	}
}
void main()
{
	char st[] = "abcd";
	f(st, 4);
}
*/

//(4)

/*
#include<iostream>
using namespace std;
int* f()
{
	int *list = new int[4] ;
	for (int i = 0; i < 4; i++)
	{
		*(list + i) = i + 1;
	}
	return list;
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[] p;
}
*/

//2.程序设计

//(1)

/*
#include<iostream>
using namespace std;
int indexOf(const char *s1, const char *s2)
{
	bool h = false;
	int len1 = 0, len2 = 0;
	for (int i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (int i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}
	if (len1 >= len2)
	{
		return -1;
	}
	else
	{
		for (int i = 0; i < len2; i++)
		{
			for (int o = 0; o < len1; o++)
			{
				if (s2[i] == s1[o])
				{
					h = true;
					return i;
					break;
				}
			}
			if (h == true)
			{
				break;
			}
		}
		if (h == false)
		{
			return -1;
		}
	}
}
int main()
{
	char m[30];
	cout << "Enter the first string:" << endl;
	cin.getline(m, 30);
	char n[30];
	cout << "Enter the second string:" << endl;
	cin.getline(n, 30);
	int k;
	k = indexOf(m, n);
	if (k == -1)
	{
		cout << "不是子串" << endl;
	}
	else
	{
		cout << "是子串，下标为：" << k << endl;
	}
}
*/

//(2)

/*
#include<iostream>
using namespace std;
int parseHex(const char* const hexString)
{
	int len = 0;
	int m = 0;
	for(int i = 0; hexString[i] != '\0'; i++)
	{
		len++;
	}
	for (int i = len; i > 0 ; i--)
	{
		int o = 0;
		if (hexString[i-1] > 47 && hexString[i-1] < 58)
		{
			o = hexString[i-1] - 48;
			m += o * pow(16,len-i);
		}
		if (hexString[i-1] > 64 && hexString[i-1] < 71)
		{
			o = hexString[i-1] - 55;
			m += o * pow(16,len-i);
		}
	}
	return m;
}
int main()

{
	int r;
	char k[300];
	cout << "请输入一个十六进制的数：" << endl;
	cin.getline(k, 300);
	char* m = k;
	r = parseHex(m);
	cout << "其十进制数为：" << endl;
	cout << r << endl;
}
*/

//(3)

/*
#include<iostream>
using namespace std;
void bubble(int* a,int b)
{
	for (int i = b - 1; i > 0; i--)
	{
		for (int m = 0; m < i; m++)
		{
			if (a[m] > a[m + 1])
			{
				int q = a[m];
				a[m] = a[m + 1];
				a[m + 1] = q;
			}
		}
	}
}
int main()
{
	int b;
	cout << "数组中有多少个元素：" << endl;

	cin >> b;
	int *a=new int[b];
	cout << "输入数组：" << endl;
	for (int i = 0; i < b; i++)
	{
		cin >> a[i];
	}
	bubble(a, b);
	cout << "排序后：" << endl;
	for (int i = 0; i < b; i++)
	{
		cout << *(a+i) << " ";
	}
	delete[] a;
}
*/