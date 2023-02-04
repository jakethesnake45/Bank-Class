#include "Bank.h"
#include<iostream>
using namespace std;

Bank::Bank(string owner)
{
	this->owner = owner;
	this->balance = 0;
	
}
Bank::Bank (string owner, int balance)
{
	this->owner = owner;
	if (balance <= 0)
	{
		cout << "Your must enter in a balance greater than 0 " << endl;
	}
	else
	{
		this->balance = balance;
	}
}
void Bank::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount; // balance = balance + amount;

	}
	else
	{
		cout << "The amount to deposit must be greater than 0 " << endl;
	}
}
void Bank::withdraw(int amount)
{
	if (amount > 0 && amount <= balance)
	{
		balance -= amount; // balance = balance - amount 
	}
	else
	{
		cout << "The amount to withdraw must be greater than 0 "
			<< "and less than your balance." << endl;
	}
}
string Bank::getOwner() const
{
	return owner;
}
int Bank::getBalance() const
{
	return balance;

}