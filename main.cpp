#include <iostream>
#include "BankAccounts.h"
//Seperation^
using namespace std;

int main() {
    BankAccounts David;

    // Trying a bunch of setters
    David.setLast("Torres");
    David.setFirst("David");
    David.setNum(122333);
    David.setPass("DavidTheBoss");
    David.setBal(1020.52);

    // Trying a bunch of getters
    cout << "Last name: " << David.getLast() << endl;
    cout << "First name: " << David.getFirst() << endl;
    cout << "Account Number: " << David.getNum() << endl;
    cout << "Account Balance: " << David.getBal() << endl;
    cout << "Account Password: " << David.getPass() << endl;

    // Trying to change password
    David.changePass();

    // Displaying new password
    cout << "Account Password: " << David.getPass() << endl;

    cout << "Fin." << endl;
    return 0;
}