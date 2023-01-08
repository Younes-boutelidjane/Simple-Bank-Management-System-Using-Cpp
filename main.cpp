/* 
    A Simple Bank Management System Using C++
    
    @author Younes Boutelidjane
     Contact: boutelidjaneyounes@gmail.com
*/
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

struct Account
{
	std::string name;
	int pin_num;
};

Account client;
double balance = 0.0;

void showMenu();
void depositFun();
void withdrawFunc();


int main(){
    
    int selection;
    showMenu();
do
{
   cout << "Selection: ";
   cin>> selection;
   switch(selection){
        case 1:
        cout<<"Your balance is: $"<<balance<<"\n\n";
        break;
        case 2:
        depositFun();
        break;
        case 3:
        withdrawFunc();
        break;
        case 4:
		cout << "Thank you and Have a nice day :)";
        exit(1);
        break;
        default:
        cout << "Invalid selection !!, enter a value between 1 & 4\n\n";
        break;}
} while (selection != 4);

    system("pause");

    return 0;
}
void showMenu(){
    cout<<"*************Hello!*************\n";
    cout<<"******Welcome to ATM banking******\n\n";
	cout<<"Please enter you name and your pin number\n";
    cout<<"Name: ";
    cin >> client.name;
    cout<<"\npin number: ";
    cin >> client.pin_num;
    cout << "Welcome "<< client.name <<"\nHow can I help you today?\n\n";
    cout<<"**Please choose one of the option below**\n\n";
    cout<<"< 1 > Check balance\n";
    cout<<"< 2 > Deposit\n";
    cout<<"< 3 > Withdraw\n";
    cout<<"< 4 > Exit\n\n\n";
}
void depositFun(){
    double depositAmount = 0.0;
    cout << "Deposit Amount : ";
    cin >> depositAmount;
    balance += depositAmount;
}
void withdrawFunc(){
    double withdrawAmount = 0.0;
    cout << "Withdraw Amount: $";
    cin >> withdrawAmount;
    if(withdrawAmount <= balance)
        balance -= withdrawAmount;
    else
        cout << "Not enough money \n\n ";
}
