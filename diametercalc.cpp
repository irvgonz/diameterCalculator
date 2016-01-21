//
//  main.cpp
//  Simple Diameter Calculator
//
//


#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    
    float radius;
    float circumference;
    float diameter;
    float area;
    
    cout << "Enter the radius: ";
    cin >> radius;
    cout << "\n";
    
    circumference = 2 * 3.1416 * radius;
    diameter=2 * radius;
    area = 3.1416 * radius * radius;
    
    cout << "Circumference: " << circumference << "\n"
    << "Diameter: " << diameter << "\n"
    << "Area: " << area << endl;
    
    return 0;
    
} 


