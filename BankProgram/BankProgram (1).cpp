#include "BankProgram.hpp"

#include <iostream>
#include <string>
using namespace std;

void BankProgram::Start()
{
	m_balance = 0;
	MainMenu();
}

void BankProgram::MainMenu()
{
	bool done = false;
	while (!done)
	{
		// 1. Display main menu
		cout << endl << endl << 
			"BANK OF JCCC" << endl;
		cout << "1. Deposit" << endl;
		cout << "2. Withdraw" << endl;
		cout << "3. View Balance" << endl;
		cout << "4. Quit" << endl;

		cout << "Choice: ";
		int choice;
		cin >> choice;

		// 3. Either quit, deposit, withdraw, or view balance
		if (choice == 1)
		{
			Deposit();
		}
		else if (choice == 2)
		{
			Withdraw();
		}
		else if (choice == 3)
		{
			ViewBalance();
		}
		else if (choice == 4)
		{
			done = true;
		}
	}
}

void BankProgram::Deposit()
{
	// 1. Ask the user how much they want to deposit
	cout << "How much would you like to deposit? ";
	// 2. Get the user's input and store it in a variable
	float amount;
	cin >> amount;
	// 3. Check to see if it's a valid amount (e.g., can't deposit an amount < 0)
	if (amount > 0)
	{
		m_balance = amount + m_balance;
	}
	else
	{
		cout << "ERROR: Invalid Amount";
	}
	// 4. If it's valid: Add to m_balance. Otherwise: Display error.
}

void BankProgram::Withdraw()
{
	// 1. Ask the user how much they want to withdraw
	cout << "How much would you like to withdraw? ";
	// 2. Get the user's input and store it in a variable
	float amount;
	cin >> amount;
	// 3. Check to see if it's a valid amount (can't be < 0 or more than the balance)
	if (amount > 0 && amount < m_balance)
	{
		m_balance = m_balance - amount;
	}
	else
	{
		cout << "ERROR: Invalid Amount";
	}
	// 4. If it's valid: Subtract from m_balance. Otherwise: Display error.
}

void BankProgram::ViewBalance()
{
	// Output the value of m_balance.
	cout << "$" << m_balance << endl;
}
