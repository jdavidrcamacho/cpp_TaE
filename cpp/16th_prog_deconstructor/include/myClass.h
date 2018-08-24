#ifndef MYCLASS_H
#define MYCLASS_H


class myClass
{
    public:
        myClass(int x, int y);
        ~myClass();
        void print();
    protected:
        int regVar;
        const int constVar;
    private:
};

#endif // MYCLASS_H
