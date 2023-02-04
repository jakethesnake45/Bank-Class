#include<iostream>
#include "Bank.h"
using namespace std;

int main()
{
	Bank myAccount("Aaron Perry", 6000);
	Bank otherAccount("James Walter");
	
	otherAccount.deposit(500);
	cout << "James account contains " << otherAccount.getBalance() << endl;

	otherAccount.withdraw(1000); //should cause a warning

	cout << "James account is still " << otherAccount.getBalance() << endl;

	cout << myAccount.getOwner() << "'s account contains "
		<< myAccount.getBalance() << endl;

	return 0;
}
