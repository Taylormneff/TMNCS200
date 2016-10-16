#include <iostream>
using namespace std;

int main()
{
	//Problem 1
	int counter = 0;
	
	while (counter < 10)
	{
		cout << counter << endl; // Display value
		counter++; //increment by 1
	}

	//Problem 2 
	counter = 10;
	while (counter > 0)
		{
				cout << counter << endl;
				counter--;
		}
	//Problem3
	counter = 2;
	while (counter < 100)
	{
		cout << counter << endl;
		counter += 2;
	}

	//Problem4
	int secretNumber = 20;
	int playerGuess = 2;

	while (playerGuess != secretNumber)
	{
		cout << "choose a number" << endl;
		cin >> playerGuess;
		if (playerGuess < secretNumber)
		{
			cout << "answer is too low" << endl;
		}
		else if (playerGuess > secretNumber)
		{
			cout << "answer is too high" << endl; 
		}
	}

	//Problem5
	int choice;

	cout << "Choose number between 0 & 10" << endl;
	cin >> choice;

	while (choice < 0 || choice > 10)
	{
		cout << "Error: Enter another number between 0 & 10" << endl;
		cin >> choice;
	}

	return 0;



	
		
	
	
	
	
	
	
	return 0;


}