
#include <iostream>

class Integer
{
    public:
        Integer(int n);
        ~Integer(void);
        int getValue(void) const;

        // = overload
        Integer &operator=(const Integer &rhs);
        // + overload
        Integer operator+(const Integer &rhs) const;
        // << operator
        private:
        int _n;
};

std::ostream &operator<<(std::ostream &lhs, const Integer &rhs);