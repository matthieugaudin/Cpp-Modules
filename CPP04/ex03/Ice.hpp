#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
		Ice(void);
		Ice(const Ice &src);
		virtual ~Ice(void);
		Ice	&operator=(const Ice &rhs);
		virtual AMateria* clone() const;
    	virtual void use(ICharacter& target);
};

#endif /* ICE_HPP */