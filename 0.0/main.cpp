#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;
void swapByReference(Rectangle& r1, Rectangle& r2) {
    Rectangle temp = r2;
    r2 = r1;
    r1 = temp;
}
void swapByPointer(Rectangle* r1, Rectangle* r2) {
    Rectangle temp = *r2;
    *r2 = *r1;
    *r1 = temp;
}
int main() {
    double w, h;
    cin >> w >> h;
    Rectangle r1(w, h);
    cin >> w >> h;
    Rectangle r2(w, h);
    cout << "SwapByReference:" << fixed << setprecision(2) << r1.getArea() << " " << r2.getArea();
    swapByReference(r1, r2);
    cout << " to " << fixed << setprecision(2) << r1.getArea() << " " << r2.getArea() << endl;
    cout << "SwapByPointer:" << fixed << setprecision(2) << r1.getArea() << " " << r2.getArea();
    swapByPointer(&r1, &r2);
    cout << " to " << fixed << setprecision(2) << r1.getArea() << " " << r2.getArea() << endl;
}