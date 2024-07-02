#pragma once
#include <iostream>
#include <string>

using namespace std;

class Polzovatel
{
public:
	void Admin();
	bool User_registration(string user_login, string user_password, string user_location);
	bool User_enter(string user_login, string user_password);
	string User_location(string user_login, string user_password);
	string List_users();
};

