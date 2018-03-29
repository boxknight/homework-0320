#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

class STUDENT
{
public:
	void set();
	void Ave_score();
	void Display();

private:
	int num;
	string name;
	string sex;
	int age;
	float score[4];
};

void STUDENT::set()
{
	cout << "please enter the massage" << endl;
	cin >> num >> name >> sex >> age >> score[0] >> score[1] >> score[2] >> score[3];
}

void STUDENT::Ave_score()
{
	int i;
	float sum;
	for (i = 0, sum = 0; i < 4; i++)
		sum += score[i];
	sum /= 4;

	cout << "The ave score is " << sum << endl;
}

void STUDENT::Display()
{
	cout << "num:  " << num << endl;
	cout << "name:  " << name << endl;
	cout << "sex:  " << sex << endl;
	cout << "age:  " << age << endl;
}

int main()
{
	STUDENT stu;
	stu.set();
	stu.Ave_score();
	stu.Display();

	return 0;
}