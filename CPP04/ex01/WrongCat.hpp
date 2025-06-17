#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(const WrongCat &src);
        ~WrongCat(void);
        WrongCat  &operator=(const WrongCat &rhs);
        void    makeSound(void) const;
};

#endif /* WRONG_CAT_HPP */