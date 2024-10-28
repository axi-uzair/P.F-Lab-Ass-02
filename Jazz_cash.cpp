#include <iostream>
using namespace std;

int main() {
    
int initialbal, depositamount, withdrawalamount;

cout << "Enter Initial Balance: ";
cin >> initialbal;
cout << "Enter the deposit amount: ";
cin >> depositamount;

initialbal += depositamount;
cout << "Balance after deposit: " << initialbal << "Rs" << endl;
cout << "Enter the withdrawal amount: ";
cin >> withdrawalamount;

initialbal -= withdrawalamount;
cout << "Balance after withdrawal: " << initialbal << "Rs" << endl;

    return 0;
}
