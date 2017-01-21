#include <iostream>
using namespace std;

void add (int x, int y)
{
	cout << x + y << endl;
}

void subtract (int x, int y)
{
	cout << x - y << endl;
}

void multiply (int x, int y)
{
	cout << x * y << endl;
}

void divide (float x, float y)
{
	if ( y == 0 )
	{
		cout << "Divided by zero produces an error" << endl;
	}
	else
	{
		cout << x / y << endl;
	}
}

int getInt (string prompt)
{
	do
	{
		cout << prompt;

		int userAnswer;
		cin >> userAnswer;
		cin.ignore(999, '\n');

		if ( !cin.fail() )
			return userAnswer;

		cin.clear();
		cin.ignore(999, '\n');
		cout << "[Input Format Error] Please enter an integer." << endl;

	} while ( true );
}

string getString (string prompt)
{
	do
	{
		cout << prompt;

		string userAnswer;
		cin >> userAnswer;
		cin.ignore(999, '\n');

		if ( !cin.fail() )
			return userAnswer;

		cin.clear();
		cin.ignore(999, '\n');
		cout << "[Input Format Error] Please enter a valid text." << endl;

	} while ( true );
}


int main ( void )
{
	int x = getInt("Please enter an integer: ");
	int y = getInt("Please enter another integer: ");
	
	
	string input = "";
	while ( input != "add" && input != "subtract" && input != "multiply" && input != "divide" )
	{
		input = getString("Which operation would you like to proceed with. Your options are: add, subtract, multiply, divide: ");
	}
	
	if (input == "add")
	{
		add(x,y);
	}
	else if (input == "subtract")
	{
		subtract(x,y);
	}
	else if (input == "multiply")
	{
		multiply(x,y);
	}
	else if (input == "divide")
	{
		divide(x,y);
	}
	else 
	{
		cout << "Your choice was not valid." << endl;
	}
	return 0;
}
