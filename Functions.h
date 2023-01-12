#pragma once

struct Account
{
	std::string name;
	int pin_num;
};

Account client;
void showMenu();
void depositFun();
void withdrawFunc();
