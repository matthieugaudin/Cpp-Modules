#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

    public:
        HumanA(std::string name, const Weapon &weapon);
        ~HumanA(void);
        void        	attack() const;

	private:
		std::string		_name;
		const Weapon	&_weapon;

};

#endif /* HUMAN_A_HPP */