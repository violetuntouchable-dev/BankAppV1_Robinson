#ifndef BANKAPPV1_SAVINGSACCOUNT_H
#define BANKAPPV1_SAVINGSACCOUNT_H
#include <iostream>
#include "BankAccount.h"

class SavingsAccount : public BankAccount {
public:
    SavingsAccount(const std::string &accHolder, const std::string &accNum, double balance)
        : BankAccount(accHolder, accNum, balance) {
    }

    ~SavingsAccount() {
        std::cout << "Savings account object deconstructed" << std::endl;
    }

    bool withdraw(double amount) override {
        if (amount > 0 && amount <= m_balance - 5.0) {
            m_balance -= amount;
            return true;
        }
        return false;
    }

    void display() override {
        BankAccount::display();
        std::cout << "Account Type: Savings" << std::endl;
    }
};

#endif
