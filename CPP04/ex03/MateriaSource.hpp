#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource &src);
        virtual ~MateriaSource(void);
        MateriaSource  &operator=(const MateriaSource &rhs);
        virtual void        learnMateria(AMateria*);
        virtual AMateria*   createMateria(std::string const & type);
    private:
        AMateria    *_materias[4];
};

#endif /* MATERIA_SOURCE_HPP */