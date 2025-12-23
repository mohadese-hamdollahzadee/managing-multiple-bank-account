//managing multiple bank account
#include<iostream>
#include<string>
using namespace std;
 
class bankAccount{

private:
	string ownerName; 
	string accountNumber;
	double balance; 



public:
	bankAccount(string name, string accNum, double initialBalance) {
		ownerName = name;
		accountNumber = accNum;
		balance = initialBalance;
	}


	void displayAccount() {
		cout << "\n--- Account Information ---\n";
		cout << "Owner Name: " << ownerName << endl;
		cout << "Account Number: " << accountNumber << endl;
		cout << "Balance: " << balance << endl;
	}
};



int main() {

	string name, accNum;
	double initialBalance; 

	cout << "enter name : ";
	getline(cin, name);

	cout << "enter account number :";
	getline(cin, accNum);


	cout << "enter initial Balance ? ";
	cin >> initialBalance;


	bankAccount account(name, accNum, initialBalance);

	account.displayAccount();













	return  0; 
}

