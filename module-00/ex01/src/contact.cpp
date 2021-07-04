/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 19:01:29 by jaeskim           #+#    #+#             */
/*   Updated: 2021/07/04 16:39:30 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
	index = 0;
}

void Contact::Add()
{
	if (index >= 8)
	{
		std::cout << "Error: You can only save 8 contact" << std::endl;
		return;
	}
	std::cout << "first_name : ";
	std::cin >> data[index].first_name;
	std::cout << "last_name : ";
	std::cin >> data[index].last_name;
	std::cout << "nick_name : ";
	std::cin >> data[index].nick_name;
	std::cout << "login : ";
	std::cin >> data[index].login;
	std::cout << "postal_address : ";
	std::cin >> data[index].postal_address;
	std::cout << "email_address : ";
	std::cin >> data[index].email_address;
	std::cout << "phone_number : ";
	std::cin >> data[index].phone_number;
	std::cout << "birthday_date : ";
	std::cin >> data[index].birthday_date;
	std::cout << "favorite_meal : ";
	std::cin >> data[index].favorite_meal;
	std::cout << "underwear_color : ";
	std::cin >> data[index].underwear_color;
	std::cout << "darkest_secret : ";
	std::cin >> data[index].darkest_secret;
	++index;
}

void Contact::PrintDiver()
{
	std::cout << std::setfill('-');
	for (int _ = 0; _ < 4; ++_)
		std::cout << "+" << std::setw(10) << "";
	std::cout << "+" << std::endl
			  << std::setfill(' ');
}

std::string Contact::GetPrintAbleStr(std::string str)
{
	if (str.length() <= 10)
		return (str);
	str = str.substr(0, 8);
	str.append(".");
	return (str);
}

void Contact::ShowAllContact()
{
	PrintDiver();
	std::cout << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "first name";
	std::cout << "|" << std::setw(10) << "last name";
	std::cout << "|" << std::setw(10) << "nickname";
	std::cout << "|" << std::endl;
	PrintDiver();
	for (int i = 0; i < index; ++i)
	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << GetPrintAbleStr(data[i].first_name);
		std::cout << "|" << std::setw(10) << GetPrintAbleStr(data[i].last_name);
		std::cout << "|" << std::setw(10) << GetPrintAbleStr(data[i].nick_name);
		std::cout << "|" << std::endl;
		PrintDiver();
	}
}

void Contact::Search()
{
	int _index;

	std::cout << "Search by Index : ";
	std::cin >> _index;
	std::cin.ignore();
	if (std::cin.fail())
	{
		std::cout << "Error: wrong number" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return;
	}
	if (_index >= index || _index < 0)
	{
		std::cout << "Error: out of range" << std::endl;
		return;
	}
	std::cout << "first_name : " << data[_index].first_name << std::endl;
	std::cout << "last_name : " << data[_index].last_name << std::endl;
	std::cout << "nick_name : " << data[_index].nick_name << std::endl;
	std::cout << "login : " << data[_index].login << std::endl;
	std::cout << "postal_address : " << data[_index].postal_address << std::endl;
	std::cout << "email_address : " << data[_index].email_address << std::endl;
	std::cout << "phone_number : " << data[_index].phone_number << std::endl;
	std::cout << "birthday_date : " << data[_index].birthday_date << std::endl;
	std::cout << "favorite : " << data[_index].favorite_meal << std::endl;
	std::cout << "underwear_color : " << data[_index].underwear_color << std::endl;
	std::cout << "darkest_secret : " << data[_index].darkest_secret << std::endl;
}

Contact::~Contact()
{
}
