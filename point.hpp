#pragma once

using namespace std;

class Point
{
    private:
        float x;
        float y;
    public:
        Point(float x, float y);
        float operator-(const Point &point);
        bool operator==(const Point &point);
        bool operator!=(const Point &point);
        Point operator/(const Point &point);
        float get_x();
        float get_y();
};