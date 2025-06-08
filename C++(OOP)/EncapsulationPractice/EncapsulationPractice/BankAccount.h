#pragma once
class BankAccount
{
private:
	string ownerName;
	string accountNumber;
	double balance;
public:
	BankAccount(string name,string accountNumber)
	{
		this->ownerName = name;
		this->accountNumber = accountNumber;
		this->balance = 0;
	}
	void Deposit(double amount) {
		if (amount >= 0 && this->balance >= 0) {
			this->balance += amount;
		}
		else {
			cout << "Error -- 404";
		}
	}
	double GetBalance() {
		return this->balance;
	}
	void PrintAccountInfo() {
		cout << this->ownerName << endl;
		cout << this->accountNumber << endl;
		cout << this->balance << endl;
	}
	
};

