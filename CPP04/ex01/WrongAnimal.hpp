#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &src);
        ~WrongAnimal(void);
        WrongAnimal  &operator=(const WrongAnimal &rhs);
        void    makeSound(void) const;
        std::string     getType(void) const;
    protected:
        std::string _type;
};

#endif /* WRONG_ANIMAL_HPP */