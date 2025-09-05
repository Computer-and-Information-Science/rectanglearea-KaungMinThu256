#include <iostream>
using namespace std;

int main() {
  
    double length = 7.2;
    double width = 1.3;

    double area = length * width;
    double perimeter = 2 * (length + width);

    cout << "Rectangle Properties:" << endl;
    cout << "Length = " << length << endl;
    cout << "Width = " << width << endl;
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;

    return 0;
}
