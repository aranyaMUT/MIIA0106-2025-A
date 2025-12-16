#include <iostream>
#include <string>
using namespace std;

double calculateCircleArea(double radius)
{
    double PI = 3.14159;
    double area = PI * radius * radius;
    return area;
}
double rectangleArea(double width, double length)
{
    return width * length;
}

int main()
{

    const double PI = 3.14159;
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area1 = calculateCircleArea(radius);
  
   
    double width, length;

    cout << "Enter width: ";
    cin >> width;

    cout << "Enter length: ";
    cin >> length;

    double area2 = rectangleArea(width, length);

    cout << "Circle Area = " << radius << " is " << area1 << endl;
    cout << "Rectangle Area = " << area2 << endl;


    return 1;
}