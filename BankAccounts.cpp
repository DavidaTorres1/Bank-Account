#include "BankAccounts.h"
#include <iostream>

using namespace std;

// Constructor definition
BankAccounts::BankAccounts(){}

// SETTERS
void BankAccounts::setLast(string accLname) {
    aln = accLname;
}
void BankAccounts::setFirst(string accFname) {
    aFn = accFname;
}
void BankAccounts::setNum(int accNumber) {
    accNum = accNumber;
}
void BankAccounts::setPass(string accPass) {
    aP = accPass;
}
void BankAccounts::setBal(float accBal) {
    aB = accBal;
}

// GETTERS
string BankAccounts::getLast() {
    return aln;
}
string BankAccounts::getFirst() {
    return aFn;
}
int BankAccounts::getNum() {
    return accNum;
}
string BankAccounts::getPass() {
    return aP;
}
float BankAccounts::getBal() {
    return aB;
}

// CHANGE PASSWORD
void BankAccounts::changePass() {
    int flag = 0;
    string temp;
    while (flag == 0) {
        cout << "Enter your current password: ";
        cin >> temp;
        if (temp == aP) {
            cout << "Correct. Enter your new pass: ";
            cin >> aP;
            flag = 1;
        } else {
            cout << "Incorrect. Try again." << endl;
        }
    }
}