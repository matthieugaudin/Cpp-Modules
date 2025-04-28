/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:59:54 by mgaudin           #+#    #+#             */
/*   Updated: 2025/04/28 18:56:32 by mgaudin          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phoneBook;
	std::string input;

    while (true) {
		std::cout << "PhoneBook> ";
        std::cin >> input;
		std::cout << std::endl;
		if (input == "ADD") {
			phoneBook.addContact();
		} else if (input == "SEARCH") {
			phoneBook.searchContact();
		} else if (input == "EXIT") {
			phoneBook.exitProgram();
		}
    }
}