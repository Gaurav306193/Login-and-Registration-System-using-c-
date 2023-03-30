#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    // initialize empty variables
	string command;
	string username;
	string password;
	string existingAcount;
	string checkUsername;
	string checkPassword;
	string createAccount;

	// get the command the user wants to use
	cout << "exit/login/register" << endl << "Command: ";
	cin >> command;

    // check what command the user uses
	if (command == "exit") {
		cout << "Goodbye!";
	}
	else if (command == "register") {
		cout << "Username: ";
		cin >> username;
		cout << "Password: ";
		cin >> password;
		cout << "You have been successfully registered! "<< endl;
		cout << "Now login: " << endl;
		cout << "Username: ";
        cin >> checkUsername;
        cout << "Password: ";
        cin >> checkPassword;
        if (checkUsername == username && checkPassword == password) {
            cout << "You are now logged in!";
        }
        else {
            cout << "Incorrect username or password!";
        }
	}
	else if (command == "login") {
		cout << "Do you have an existing account? (y, n)" << endl;
		cin >> existingAcount;
		if (existingAcount == "y") {
		    cout << "Username: ";
		    cin >> checkUsername;
		    cout << "Password: ";
		    cin >> checkPassword;
		    if (checkUsername == username && checkPassword == password) {
			cout << "You are now logged in!";
		    }
		    else {
			cout << "Incorrect username or password!";
		    }
		}
		else if (existingAcount == "n") {
            cout << "Do you want to create an account? (y, n)";
            cin >> createAccount;
            if (createAccount == "y") {
                cout << "Username: ";
                cin >> username;
                cout << "Password: ";
                cin >> password;
                cout << "You have been successfully registered!";
                cout << "You are now logged in!" << endl;
            }
            else if (createAccount == "n") {
                cout << "Goodbye!";
            }
            else {
                cout << " ";
            }

		}
		else {
            		cout << " ";
		}
	}
	else {
        	cout << command << " is not a valid command!";
	}
}