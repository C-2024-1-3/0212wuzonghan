//第一题

/*
#include<iostream>
using namespace std;
class Time
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	Time(int h, int m, int s)
	{
		hour = h;
		minute = m;
		sec = s;
	}
	void SetTime()
	{
		int a;
		int b;
		int c;
		cin >> a;
		cin >> b;
		cin >> c;
		hour = a;
		minute = b;
		sec = c;
	}
	void ShowTime()
	{
		cout << hour << ":" << minute << ":" << sec;
	}
};
int main()
{
	int a = 0, b = 0, c = 0;
	cout <<  "分别输入时、分、秒" << endl;
	Time t1(a,b,c); 
	t1.SetTime();
	t1.ShowTime();
	return 0;
}
*/

//第二题
// student.cpp

/*
#include <iostream>
#include"student.h"
using namespace std;
void Student::display()
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
*/

//student.h
/*
class Student
{
public:
	void display();
private:
	int num;
	char name[20];
	char sex;
};

*/

//main.cpp

/*
#include<iostream>
#include"student.h"
using namespace std;
int main()
{
	Student stud;
    stud.SetValue(007,"tcg", 'm');
	stud.display();
	return 0;
}
*/

//第三题

/*
#include<iostream>
using namespace std;
class Rectangle
{
private:
	int length;
	int width;
	int height;
public:
	int volume;
	Rectangle(int l, int w, int h)
	{
		length = l;
		width = w;
		height = h;
	}
	void Set()
	{
		int a, b, c;
		cout << "输入长" << endl;
		cin >> a;
		cout << "输入宽" << endl;
		cin >> b;
		cout << "输入高" << endl;
		cin >> c;
		length = a;
		width = b;
		height = c;
	}
	int Volume()
	{
		int c = length * width * height;
		return c;
	}
	void Cout()
	{
		cout << length * width * height << endl;
	}
};
int main()
{
	Rectangle a(0, 0, 0);
	a.Set();
	Rectangle b(0, 0, 0);
	b.Set();
	Rectangle c(0, 0, 0);
	c.Set();
	a.Cout();
	b.Cout();
	c.Cout();
}
*/

//第四题

/*
#include<iostream>
using namespace std;
class Student
{
private:
	int num;
	int score;
public:
	void Set(int num,int score)
	{
		this->num = num;
		this->score = score;
	}
	int num1()
	{
		return num;
	}
	int score1()
	{
		return score;
	}
};
int max(Student a[5])
{
	int b[5];
	for (int i = 0; i < 5; i++)
	{
		b[i] = a[i].score1();
	}
	for (int i = 0; i < 5; i++)
	{
		bool m = 1;
		for (int c = 0; c < 5; c++)
		{
			if (i == c)
			{
			}
			else
			{
				if (b[i] < b[c])
					m = 0;
			}
		}
		if (m == 1)
		{
			return b[i];
		}
	}
}
int maxnum(Student a[5])
{
	int b[5];
	for (int i = 0; i < 5; i++)
	{
		b[i] = a[i].score1();
	}
	for (int i = 0; i < 5; i++)
	{
		bool m = 1;
		for (int c = 0; c < 5; c++)
		{
			if (i == c)
			{
			}
			else
			{
				if (b[i] < b[c])
					m = 0;
			}
		}
		if (m == 1)
		{
			return i;
			break;
		}
	}
}
int main()
{
	Student a[5];
	a[0].Set(1, 143);
	a[1].Set(2, 136);
	a[2].Set(3, 137);
	a[3].Set(4, 145);
	a[4].Set(5, 132);
	int max1 = max(a);
	cout << "最高成绩为" << max(a) << endl;
	cout << "最高成绩者学号为" << maxnum(a) << endl;
}
*/

//第五题

/*
#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point a(60, 80);
	a.setPoint(10, 20);
	a.display();
}
*/