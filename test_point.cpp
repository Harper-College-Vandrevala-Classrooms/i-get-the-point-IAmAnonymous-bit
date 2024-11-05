using namespace std;

#include <iostream>
#include "point.hpp"

int main()
{
    Point a(3.2, 9.8);
    Point b(5.5, -1.2);
    Point c(3.2, 9.8);

    cout << "operator- for (a - b) should return 11.2379: " << (a - b) << endl;
    cout << "operator== for (a == b) should return 0 (false): " << (a == b) << endl;
    cout << "operator== for (a == c) should return 1 (true): " << (a == c) << endl;
    cout << "operator!= for (a != b) should return 1 (true): " << (a != b) << endl;
    cout << "operator!= for (a != c) should return 0 (false): " << (a != c) << endl;

    Point d = a / b;
    cout << "The midpoint between (3.2,9.8) & (5.5,-1.2) should be (4.35,4.3): (" << d.get_x() << "," << d.get_y() << ")" << endl;

    return 0;
}