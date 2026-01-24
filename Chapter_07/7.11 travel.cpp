// travel.cpp -- using structures with functions
#include <iostream>

struct travel_time
{
    int hours;
    int minutes;
};

const int MINS_IN_HR = 60;

travel_time sum(travel_time t1, travel_time t2);

void show_time(travel_time t);

int main()
{
    using namespace std;

    travel_time day1 = {5, 45}; // 5 hours, 45 minutes
    travel_time day2 = {4, 55}; // 4 hours, 55 minutes

    travel_time total = sum(day1, day2);
    cout << "Two-day total: ";
    show_time(total);

    travel_time day3 = {4, 32}; // 4 hours, 32 minutes
    cout << "Three-day total: ";
    show_time(sum(total, day3));

    return 0;
}

travel_time sum(travel_time t1, travel_time t2)
{
    travel_time total;

    // through modular arithmetic % for minutes, and integer division / for hours
    total.minutes = (t1.minutes + t2.minutes) % MINS_IN_HR;
    total.hours = t1.hours + t2.hours + (t1.minutes + t2.minutes) / MINS_IN_HR;

    return total;
}

void show_time(travel_time t)
{
    using namespace std;

    cout << t.hours << " hours, " 
         << t.minutes << " minutes\n";
}
