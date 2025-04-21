#ifndef SAMPLE_H
# define SAMPLE_H

class Sample
{
    public:
        int         foo;
        float const x_val;
        float const y_val;
        Sample(float const x, float const y);
        ~Sample(void);
        void    bar(void) const ;
        int    getFoo(void) const;
        void    setFoo(int value);
        static int  getNbInst(void);
    private:
        int _foo;
        static int  _nbInst;
};

#endif /* SAMPLE_H */