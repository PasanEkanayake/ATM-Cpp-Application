#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "---------- World Bank ----------" << endl;
	cout << "----- Create a New Account -----" << endl << endl;

	int approvedAccount = 0;
	float initialDeposit;
	int pinNumber;
	int len = 1;
	string userName;
	cout << "Enter a New User Name: ";
	getline(cin >> ws, userName);

	do {
		cout << "\nCreate a 4 digit pin number consist only with numbers (1,2,3,4,5,6,7,8,9,0)." << endl;
		cout << "\nEnter a New Pin Number: ";
		cin >> pinNumber;
		int temp = pinNumber;
		cout << endl;

		

		if (pinNumber > 0)
		{
			for (len = 0; pinNumber > 0; len++)
			{
				pinNumber /= 10;
			}

			if (len == 4) {
				pinNumber = temp;
			}
			else
			{
				cout << "\n\nYou have entered a invalid pin number. Please try again.\n\n";
			}
		}

	} while (len != 4);

	do {
		cout << "You must have at least Rs.500/= or more initial deposit to open a new account." << endl;
		cout << "\nYour Initial Deposit Amount(Rs.): ";
		cin >> initialDeposit;
		cout << endl;

		if (initialDeposit >= 500)
		{
			cout << "You have successfully created your new bank account.\nNow you can use any of our ATMs in the world." << endl;
			approvedAccount++;
		}
		else
		{
			cout << "Your initial deposite is insuficient to open a new account. Please try again.\n" << endl;
		}
	} while (approvedAccount < 1);

	cout << endl << userName << ' ' << pinNumber << ' ' << initialDeposit;

	/*system("cls");*/
	
}