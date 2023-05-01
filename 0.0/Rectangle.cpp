#include "Rectangle.h"
using namespace std;
Rectangle::Rectangle() {
}
Rectangle::Rectangle(double w, double h) {
	width = w;
	height = h;
}
void Rectangle::setWidth(double w) {
	width = w;
}
void Rectangle::setHeight(double h) {
	height = h;
}
double Rectangle::getHeight() {
	return height;
}
double Rectangle::getWidth() {
	return width;
}
double Rectangle::getArea() {
	return width * height;
}