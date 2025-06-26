#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "Cure.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    tmp = src->createMateria("fail");
    
    AMateria    *tab[4] = {new Ice(), new Ice(), new Cure(), NULL};
    bob->equip(tab[0]);
    bob->equip(tab[1]);
    bob->equip(tab[2]);
    bob->unequip(0);
    bob->unequip(1);
    bob->unequip(2);
    bob->unequip(3);
    bob->unequip(10);

    delete bob;
    delete me;
    delete src;
    for (size_t i = 0; i < 4 ; ++i)
        delete tab[i];

    return 0;
}
