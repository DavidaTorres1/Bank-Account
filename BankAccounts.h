#ifndef BANKACCOUNTS_H
#define BANKACCOUNTS_H

#include <string>

using namespace std;

class BankAccounts {
//Class^
private:
    string aln;
    string aP;
    float aB;
//Encapsulation^(and objects)
public:
    int accNum;
    string aFn;
//Objects^

    // Constructor
    BankAccounts();

    // SETTERS
    void setLast(string accLname);
    void setFirst(string accFname);
    void setNum(int accNumber);
    void setPass(string accPass);
    void setBal(float accBal);

    // GETTERS
    string getLast();
    string getFirst();
    int getNum();
    string getPass();
    float getBal();

    // CHANGE PASSWORD
    void changePass();
};

#endif