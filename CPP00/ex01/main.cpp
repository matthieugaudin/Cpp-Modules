/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:59:54 by mgaudin           #+#    #+#             */
/*   Updated: 2025/04/29 19:14:00 by mgaudin          ###   ########.fr       */
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
			return (0);
		}
		if (input == "ADD") {
			phoneBook.addContact();
		} else if (input == "SEARCH") {
			phoneBook.searchContact();
		} else if (input == "EXIT") {
			return (0);
		}
    }
}