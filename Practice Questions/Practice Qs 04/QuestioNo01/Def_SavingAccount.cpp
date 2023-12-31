//
// Created by rayhan on 3/21/23.
//
#include <iostream>
#include "SavingsAccount.h"

#define zero 0
#define annual 12.0
#define limit 2

using namespace std;
double SavingsAccount::annual_IntersetRate;
int SavingsAccount::account_count = zero;

SavingsAccount::SavingsAccount() {
    account_number = account_count + 1;
    if (account_count == zero)
        cout << "Enter the Rate of the Interest:", cin >> annual_IntersetRate;
    account_count++;
    cout << "Enter the amount to deposit:", cin >> savingsBalance;
}

void SavingsAccount::calculateMonthlyInterset(void) {
    double interset_amount = savingsBalance * (annual_IntersetRate / 100) / annual;
    cout << savingsBalance << " = " << interset_amount << " + " << savingsBalance << endl;
    savingsBalance += +interset_amount;
    cout << "New Balance for account no " << account_number << " : " << savingsBalance << endl;
}

void SavingsAccount::modifyintersetRate(void) {
    cout << "Enter new interest Rate: ", cin >> annual_IntersetRate;
    cout << "New interest Rate :" << annual_IntersetRate << endl;
}

void operations(void) {
    cout << "Driver Programs Initiate" << endl;
    SavingsAccount saver1, saver2;
    for (int i = zero; i < limit; ++i) {
        saver1.calculateMonthlyInterset(), saver2.calculateMonthlyInterset();
        if (i == limit - 2)
            SavingsAccount::modifyintersetRate();
    }
}