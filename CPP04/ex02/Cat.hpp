#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
    public:
        Cat(void);
        Cat(const Cat &src);
        virtual ~Cat(void);
        Cat  &operator=(const Cat &rhs);
        virtual void    makeSound(void) const;
    private:
        Brain *_brain;
};

#endif /* CAT_HPP */