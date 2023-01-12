#include "Functions.h"
#include <iostream>


struct Account
{
	std::string name;
	int pin_num;
};

Account client;
double balance = 0.0;

void showMenu(){
    std::cout<<"*************Hello!*************\n";
    std::cout<<"******Welcome to ATM banking******\n\n";
	std::cout<<"Please enter you name and your pin number\n";
    std::cout<<"Name: ";
    std::cin >> client.name;
    std::cout<<"\npin number: ";
    std::cin >> client.pin_num;
    std::cout << "Welcome "<< client.name <<"\nHow can I help you today?\n\n";
    std::cout<<"**Please choose one of the option below**\n\n";
    std::cout<<"< 1 > Check balance\n";
    std::cout<<"< 2 > Deposit\n";
    std::cout<<"< 3 > Withdraw\n";
    std::cout<<"< 4 > Exit\n\n\n";
}
void depositFun(){
    double depositAmount = 0.0;
    std::cout << "Deposit Amount : ";
    std::cin >> depositAmount;
    balance += depositAmount;
}
void withdrawFunc(){
    double withdrawAmount = 0.0;
    std::cout << "Withdraw Amount: $";
    std::cin >> withdrawAmount;
    if(withdrawAmount <= balance)
        balance -= withdrawAmount;
    else
        std::cout << "Not enough money \n\n ";
}