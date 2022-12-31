// A c++ calculator that can do basic operation for two numbers.
#include <iostream>
using namespace std;
int main() {
	char operation;
	double number1, number2;
	int option;
	while (true)
	{
		// collects the first number
		cout << "Insert your first number: " << endl;
		cin >> number1;
		// collects the type of the operation
		cout << "What operation?" << endl;
		cin >> operation;
		// collects the second number
		cout << "Insert your second number: " << endl;
		cin >> number2;
		// a switch statement for 4 different possibilities of the operation
		switch (operation)
		{
			// addition operation
		case '+':
			cout << "The result is: " << number1 + number2 << endl;
			break;
			// minus operation
		case '-':
			cout << "The result is: " << number1 - number2 << endl;
			break;
			// multiplication operation
		case'*':
			cout << "The result is: " << number1 * number2 << endl;
			break;
			// division operation
		case '/':
			cout <<"The result is: " << number1 / number2 << endl;
			break;
			// an invalid operation
		default:
			cout << "invalid operation! choose between +,-,*,/" << endl;
		}
		// asks the user if they would like to end the program or start over
		cout << "would you like to go again? (1-yes,2-no)" << endl;
		cin >> option;
		if (option == 1)
			continue;
		else
			break;
	}

}
