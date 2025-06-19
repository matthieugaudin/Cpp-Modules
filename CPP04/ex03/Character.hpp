#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
    public:
		Character(void);
		Character(const std::string name);
		Character(const Character &src);
		virtual ~Character(void);
		Character	&operator=(const Character &rhs);
	    virtual std::string const & getName() const ;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
	private:
		std::string			_name;
		AMateria			*_materias[4];
};

#endif /* CHARACTER_HPP */