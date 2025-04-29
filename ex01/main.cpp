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

int main(void) {
	PhoneBook	phoneBook;
	std::string input;

    while (true) {
		std::cout << "PhoneBook> ";
		std::getline(std::cin, input);
		if (input == "ADD") {
			phoneBook.addContact();
		} else if (input == "SEARCH") {
			phoneBook.searchContact();
		} else if (input == "EXIT") {
			exit(0);
		}
    }
}