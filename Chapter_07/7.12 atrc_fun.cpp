// atrc_fun.cpp -- functions with a structure argument
#include <iostream>
#include <cmath>

struct polar
{
    double distance; // distance from origin
    double angle;    // direction from origin
};
struct rect
{
    double x;       // horizontal distance from origin
    double y;       // vertical distance from origin
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
    using namespace std;

    rect rect_place;
    polar polar_place;

    cout << "Enter the x and y values: ";
    while (cin >> rect_place.x >> rect_place.y)
    {
        polar_place = rect_to_polar(rect_place);
        show_polar(polar_place);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";

    return 0;
}

polar rect_to_polar(rect xypos)
{
    using namespace std;

    polar answer;

    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x); // compare to atan() which handles only quadrants I and IV

    return answer;
}

void show_polar(polar dapos)
{
    using namespace std;

    const double Rad_to_deg = 57.29577951; // 180 / pi

    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees\n";
}
