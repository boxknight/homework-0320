#include<iostream>
using namespace std;

int main()
{
	int num[100],i,flag_a,flag_b,obj;
	flag_a = 0, flag_b = 99;
	cout << "please enter the number" << endl;
	cin >> obj;

	for (i = 0; i < 100; i++)
		num[i] = i;

	i = 0;
	while (num[i] != obj)
	{
		if (num[i] < obj)
		{
			flag_a = i;
			i = (i + flag_b) / 2;
		}
		if (num[i] > obj)
		{
			flag_b = i;
			i = (i + flag_a) / 2;
		}
	}

	cout << i << endl;

	return 0;
}