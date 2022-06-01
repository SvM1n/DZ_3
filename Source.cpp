# include "Circle.h"
#include <cmath>
#define PI  3.1415926

Circle::Circle() : R(0), x(0), y(0) { };
Circle::Circle(int r, double x0, double y0) : R(r), x(x0), y(y0) { };

void Circle::getcirc()
{
    std::cout << "\nКруг: ";
    std::cout << "\nВведите радиус: "; std::cin >> R;
    std::cout << "\nВведите коородинату x0: "; std::cin >> x;
    std::cout << "\nВведите коородинату y0: "; std::cin >> y;
}
void Circle::square() {
    std::cout << "\nПлощадь круга: " << PI * pow(R, 2);
}

void Circle::lenth() {
    std::cout << "\nДлина окружности: " << 2 * PI * R;
}
Circle::~Circle() { };




Point::Point() :a(0), b(0) { };
Point::Point(double a0, double b0) :a(a0), b(b0) { };

void Point::getpoint()
{
    std::cout << "\nТочка: ";
    std::cout << "\nВведите коородинату x: "; std::cin >> a;
    std::cout << "\nВведите коородинату y: "; std::cin >> b;
}

Point::~Point() { };

bool is_in(Point point, Circle circ) {
    return  (pow(circ.x - point.a, 2) + pow(circ.y - point.b, 2) <= pow(circ.R, 2)) ? true : false;
}
