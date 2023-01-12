/* 
    A Simple Bank Management System Using C++
    
    @author Younes Boutelidjane
     Contact: boutelidjaneyounes@gmail.com
*/
#include <iostream>
#include <string>
#include "Functions.h"

double balance = 0.0;

int main(){
    
    int selection;
    showMenu();
do
{
   std::cout << "Selection: ";
   std::cin>> selection;
   switch(selection){
        case 1:
        std::cout<<"Your balance is: $"<<balance<<"\n\n";
        break;
        case 2:
        depositFun();
        break;
        case 3:
        withdrawFunc();
        break;
        case 4:
		std::cout << "Thank you and Have a nice day :)";
        exit(1);
        break;
        default:
        std::cout << "Invalid selection !!, enter a value between 1 & 4\n\n";
        break;}
} while (selection != 4);

    system("pause");

    return 0;
}
