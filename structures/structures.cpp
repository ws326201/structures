// structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct User
{
	string sName;
	int iAge;
};

void UpdateUserDetails(User* objUser)
{
	cout << "\n Enter users name \n";
	cin >> objUser->sName;

	cout << "\n Enter users age \n";
	cin >> objUser->iAge;
}

void OutputUserDetails(User* objUser)
{
	cout << "\n Users Name: " << objUser->sName << "\n Age: " << objUser->iAge;
}

void UpdateUserDetails(User objUsers[], int iSize) 
{
	for (int iCount = 0; iCount < iSize; iCount++)
	{
		cout << "\n\n Enter user " << iCount + 1 << "'s name \n ";
		cin >> objUsers[iCount].sName;

		cout << "\n Enter their age \n";
		cin >> objUsers[iCount].iAge;
	}
}

void OutputUserDetails(User objUsers[], int iSize)
{
	for (int iCount = 0; iCount < iSize; iCount++)
	{
		cout << "Name: " << objUsers[iCount].sName << "Age: " << objUsers[iCount].iAge;

	}
}


int main()
{
	/*User objUser1;
	User objUser2;

	UpdateUserDetails(&objUser1);
	UpdateUserDetails(&objUser2);

	OutputUserDetails(&objUser1);
	OutputUserDetails(&objUser2);*/

	const int iSize = 3;

	User objUsers[iSize];

	UpdateUserDetails(objUsers, iSize);
	OutputUserDetails(objUsers, iSize);

	UpdateUserDetails(&objUsers[0]);
	OutputUserDetails(&objUsers[0]);



	
	/*cout << "\n Enter User 2's name \n";
	cin >> objUser2.sName;
	cout << "\n Enter User 2's age \n";
	cin >> objUser2.iAge;
	cout << "\n User 2's Name: \n" << objUser2.sName << "\n Age: " << objUser2.iAge;*/

	_getch();



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
