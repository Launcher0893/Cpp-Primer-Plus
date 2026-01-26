// name_space.h
#ifndef NAME_SPACE_H_
#define NAME_SPACE_H_

#include <string>

// create the pers abd debts namespaces
namespace pers
{
    struct Person
    {
        std::string fname;
        std::string lname;
    };

    void getPerson(Person &);
    void showPerson(const Person &);
}

namespace debts
{
    using namespace pers;

    struct Debt
    {
        pers::Person name;
        double amount;
    };

    void getDebt(Debt &);
    void showDebt(const Debt &);
    double sumDebts(const Debt ar[], int n);
}

#endif
