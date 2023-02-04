#ifndef BANK_H
#define BANK_H

#include<string>
using namespace std;

class Bank
{
	public:
		Bank(string owner);
		Bank(string owner, int balance);
		void deposit(int amount);
		void withdraw(int amount);
		string getOwner() const;
		int getBalance() const; 
	
	private:
		string owner;
		int balance;


};









#endif




