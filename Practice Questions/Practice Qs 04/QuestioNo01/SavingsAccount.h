//
// Created by rayhan on 3/21/23.
//

#ifndef QUESTIONO01_SAVINGSACCOUNT_H
#define QUESTIONO01_SAVINGSACCOUNT_H

class SavingsAccount {
private:
    static int account_count;
    static double annual_IntersetRate;
    double savingsBalance;
    int account_number;
public:
    SavingsAccount();
    void calculateMonthlyInterset(void);
    static void modifyintersetRate(void);
};
void operations(void);


#endif //QUESTIONO01_SAVINGSACCOUNT_H
