/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:59:54 by mgaudin           #+#    #+#             */
/*   Updated: 2025/06/10 10:13:39 by mgaudin          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
	(void)argv;
	PhoneBook	phoneBook;
	std::string input;

	if (argc > 1) {
		std::cout << "The program doesn't take arguments" << std::endl;
		return (1);
	}
    while (true) {
		std::cout << "PhoneBook> ";
		std::getline(std::cin, input);
		if (std::cin.eof()) {
			std::cout << std::endl;
			return (1);
		}
		if (input == "ADD") {
			if (!phoneBook.addContact())
				return (1);
		} else if (input == "SEARCH") {
			if (!phoneBook.searchContact())
				return (1);
		} else if (input == "EXIT") {
			return (0);
		}
    }
}