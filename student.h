class Student 
{
public:
	void display();
	void SetValue(int num,const char name[], char sex)
	{
		int m = 0;
		while (name[m] != '\t')
		{
			m++;
		}
		this->num = num;
		for (int a = 0; a < m; a++)
		{
			this->name[a] = name[a];
		}
		this->sex = sex;
	}
private:
	int num;
	char name[20];
	char sex;
};