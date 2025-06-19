#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
		Cure(void);
		Cure(const Cure &src);
		virtual ~Cure(void);
		Cure	&operator=(const Cure &rhs);
		virtual AMateria* clone() const;
    	virtual void use(ICharacter& target);
};

#endif /* CURE_HPP */