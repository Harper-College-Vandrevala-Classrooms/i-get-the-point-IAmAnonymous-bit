using namespace std;

#include <cmath>
#include "point.hpp"

Point::Point(float x, float y)
{
    this->x = x;
    this->y = y;
}

float Point::operator-(const Point &point)
{
    float x1 = point.x - this->x;
    float x2 = x1 * x1;
    float y1 = point.y - this->y;
    float y2 = y1 * y1;
    float d1 = x2 + y2;
    float d2 = sqrt(d1);
    return d2;
}

bool Point::operator==(const Point &point)
{
    if(this->x == point.x && this->y == point.y)
    {
        return true;
    }
    return false;
}

bool Point::operator!=(const Point &point)
{
    if(this->x != point.x || this->y != point.y)
    {
        return true;
    } 
    return false;
}

Point Point::operator/(const Point &point)
{
    float newX = (this->x + point.x) / 2;
    float newY = (this->y + point.y) / 2;
    Point newPoint(newX, newY);
    return newPoint;
}

float Point::get_x()
{
    return this->x;
}

float Point::get_y()
{
    return this->y;
}