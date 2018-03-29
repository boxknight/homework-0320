#include<iostream>
using namespace std;

class Account
{
public:
	Account(int x=0);
	void credit();
	void debit();
	void getBalance();
private:
	int num;
};

Account::Account(int x)
{
	num = x;
	if (num < 0)
	{
		num = 0;
		cout << "error and num=0" << endl;
	}
}

void Account::credit()
{
	int x;
	cin >> x;
	num += x;
}

void Account::debit()
{
	int x;
	cin >> x;
	if (x < num)
		num -= x;
	if (x > num)
		cout << "you do not have enough money" << endl;
}

void Account::getBalance()
{
	cout << "you have  :  " << num << endl;
}

int main()
{
	Account a1, a2(50);

	return 0;
}