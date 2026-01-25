// str_ref.cpp -- using struct references
#include <iostream>
#include <string>

struct FreeThrows
{
    std::string name;
    int made;
    int attempts;
    float percent;
};

void display(const FreeThrows & ft);
void setPercent(FreeThrows & ft);
FreeThrows & accumulate(FreeThrows & target, const FreeThrows & source);

int main()
{
// partial initializations - remaining menbers set to 0
    FreeThrows one = { "Ifelsa Branch", 13, 14 };
    FreeThrows two = { "Andor Knott", 10, 16 };
    FreeThrows three = { "Minnie Max", 7, 9 };
    FreeThrows four = { "Whily Looper", 5, 9 };
    FreeThrows five = { "Long Long", 6, 14 };
    FreeThrows team = { "Throwgoods", 0, 0 };
// no initialization
    FreeThrows dup;

    setPercent(one);
    display(one);
    accumulate(team, one);
    display(team);

// use return value as argument
    display(accumulate(team, two));
    accumulate(accumulate(team, three), four);
    display(team);

// use return value in assignment
    dup = accumulate(team, five);
    std::cout << "Displaying team:\n";
    display(team);
    std::cout << "Displaying dup after assignment:\n";
    display(dup);
    setPercent(four);

// ill-advised assignment
    accumulate(dup, five) = four;
    std::cout << "Displaying dup after ill-advised assignment:\n";
    display(dup);

    return 0;
}

void display(const FreeThrows & ft)
{
    using namespace std;

    cout << "Name: " << ft.name << "\n";
    cout << " Made: " << ft.made << "\t";
    cout << " Attempts: " << ft.attempts << "\t";
    cout << " Percent: " << ft.percent << "\n";
}

void setPercent(FreeThrows & ft)
{
    if (ft.attempts != 0)
        ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
    else
        ft.percent = 0;
}

FreeThrows & accumulate(FreeThrows & target, const FreeThrows & source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    setPercent(target);

    return target;
}
