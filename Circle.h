#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
class Point;
class Circle{
    private:
        int R;
        double x;
        double y;
    public:
        Circle();
        Circle(int r, double x0, double y0);
        void getcirc();
        void square();
        void lenth();
        friend bool is_in(Point point, Circle circ);
        ~Circle();
};

class Point {
    private:
        double a;
        double b;
    public:
        Point();
        Point(double a0, double b0);
        void getpoint();
        friend bool is_in(Point point, Circle circ);
        ~Point();
};

bool is_in(Point point, Circle circ);
#endif
