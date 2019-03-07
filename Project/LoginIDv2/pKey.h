#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include "AdvConsole.h"
#include "User.h"
using namespace AdvancedConsole;

class pKey : public User
{
	public:
		pKey();
		void menu();
	private:
		const std::string logo1 = " /$$$$$$$  /$$   /$$ /$$$$$$$$";
		const std::string logo2 = "| $$__  $$| $$  /$$/| $$_____/";
		const std::string logo3 = "| $$  \\ $$| $$ /$$/ | $$       /$$$$$$/$$$$  /$$   /$$";
		const std::string logo4 = "| $$$$$$$/| $$$$$/  | $$$$$   | $$_  $$_  $$| $$  | $$";
		const std::string logo5 = "| $$____/ | $$  $$  | $$__/   | $$ \\ $$ \\ $$| $$  | $$";
		const std::string logo6 = "| $$      | $$\\  $$ | $$      | $$ | $$ | $$| $$  | $$";
		const std::string logo7 = "| $$      | $$ \\  $$| $$$$$$$$| $$ | $$ | $$|  $$$$$$/"; 
		const std::string logo8 = "|__/      |__/  \\__/|________/|__/ |__/ |__/ \\______/";
		const std::string logoInfo = "[Presented by BSCSSE - N01]";
		const std::string pkEmuInfo1 = "This is a project written in C++ to use Product Key basic usage in other applications.";
		const std::string pkEmuInfo2 = "For this preposition we will integrate use of product key as a layer of security in logging in.";
};

#endif
