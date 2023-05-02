#ifndef Rectangle_h
#define Rectangle_h
class Rectangle {
private:
	double width;
	double height;
public:
	Rectangle();
	Rectangle(double w, double h);
	double getHeight();
	double getWidth();
	double getArea();
	void setWidth(double);
	void setHeight(double);
};
#endif
