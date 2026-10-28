#include <iostream>
#include "BankAccount.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

int main() {  // sandbox to play with objects
    std::cout << std::endl;
    std::cout << "Bank account objects" << std::endl;

    //BankAccount customer1("Mick Mouse","1234567",2350.50);
    //customer1.display();
    //customer1.withdraw(500);
    //customer1.display();

    //BankAccount* customer2 = new BankAccount("Don Duck","7654321",1250.75);
    //customer2->display();
    //delete customer2;

    std::cout << std::endl;
std::cout << "Savings account objects" << std::endl;

SavingsAccount savings("Daisy Duck", "9876543", 1000.00);
savings.display();

savings.withdraw(200.00);
savings.display();

std::cout << std::endl;
std::cout << "Checking account objects" << std::endl;

CheckingAccount customer3("Minnie Mouse","3456789",2000.00,300.00);
    customer3.display();
    customer3.withdraw(2200);
    customer3.display();
    customer3.withdraw(50);
    customer3.display();

    BankAccount* customer4 = new CheckingAccount("Daisy Duck","9876543",1000.00,200.00);
    customer4->display();
    customer4->withdraw(1100);
    customer4->display();
    delete customer4;

    return 0;
}
