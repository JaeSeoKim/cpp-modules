#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
	struct contact_data
	{
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
	};

	int index;
	struct contact_data data[8];

	std::string GetPrintAbleStr(std::string str);
	void PrintDiver();

public:
	Contact();
	void Add();
	void ShowAllContact();
	void Search();
	~Contact();
};

#endif
