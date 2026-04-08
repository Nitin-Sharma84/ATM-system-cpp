#include <iostream>
using namespace std;

int main()
{
    const int pin = 1212;
    int attempts = 0;
    int enteredPin;

    cout << "Enter PIN: ";
    cin >> enteredPin;

    while (enteredPin != pin)
    {
        attempts++;

        if (attempts == 3)
        {
            cout << "Transaction Declined! Try again later.";
            return 0;
        }

        cout << "Enter valid PIN: ";
        cin >> enteredPin;
    }

    cout << "Access Granted!" << endl;

    double balance = 0;
    int option;

    while (true)
    {
        cout << "\n1.Check Balance\n2.Deposit Money\n3.Withdraw Money\n4.Exit\n";
        cout << "Enter option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Your balance is: " << balance << endl;
            break;

        case 2:
            double dep;
            cout << "Enter deposit amount: ";
            cin >> dep;

            if (dep <= 0)
                cout << "Invalid amount" << endl;
            else
            {
                balance += dep;
                cout << "Money deposited successfully." << endl;
            }
            break;

        case 3:
            double wd;
            cout << "Enter withdrawal amount: ";
            cin >> wd;

            if (wd <= 0)
                cout << "Invalid amount" << endl;
            else if (wd > balance)
                cout << "Insufficient balance" << endl;
            else
            {
                balance -= wd;
                cout << "Cash withdrawn successfully." << endl;
            }
            break;

        case 4:
            cout << "Thank you for using ATM.";
            return 0;

        default:
            cout << "Invalid option!" << endl;
        }
    }
}
