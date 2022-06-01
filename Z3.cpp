#include "Circle.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	Circle c;
	Point p;
	c.getcirc();
	p.getpoint();
	c.square();
	c.lenth();
	if (is_in(p, c)) {
		std::cout << "\nТочка принадлежит окружности";
	}
	else {
		std::cout << "\nТочка не принадлежит окружности";
	}

}

