// strc_ptr.cpp -- fuctions with pointer to structure arguments, modified from atrc_fun.cpp
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

// polar rect_to_polar(rect xypos);
void rect_to_polar(const rect *p_xy, polar *p_da);
void show_polar(const polar *p_da);

int main()
{
    using namespace std;

    rect rect_place;
    polar polar_place;

    cout << "Enter the x and y values: ";
    while (cin >> rect_place.x >> rect_place.y)
    {
        rect_to_polar(&rect_place, &polar_place);
        show_polar(&polar_place);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";

    return 0;
}

void rect_to_polar(const rect *p_xy, polar *p_da)
{
    using namespace std;

    p_da->distance = sqrt(p_xy->x * p_xy->x + p_xy->y * p_xy->y);
    p_da->angle = atan2(p_xy->y, p_xy->x);
}

void show_polar(const polar *p_da)
{
    using namespace std;

    const double Rad_to_deg = 57.29577951; // 180 / pi

    cout << "distance = " << p_da->distance;
    cout << ", angle = " << p_da->angle * Rad_to_deg;
    cout << " degrees\n";
}
