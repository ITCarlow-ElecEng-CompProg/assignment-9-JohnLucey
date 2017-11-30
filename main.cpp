
/*
Sphere Volume and Area Calculator
Created on 6/11/17
Author - John Lucey
Last Edited - 6/11/17
*/

//Pre-Processor Directive
#include <iostream>
#include <math.h>
using namespace std;

//Main Function
int main()
{
    //Variables Declared
    double radius = 0, area = 0, volume = 0;
    double *ptr_area, *ptr_volume;

    //Function Prototype
    void Sphere_Calc(double, double *, double *);

    //Pointers assignes
    ptr_area = &area;
    ptr_volume = &volume;

    //Purpose of program displayed
    cout << "Sphere Volume and Area Calculator!!!\n\n\n" << endl;

    //While Loop to ensure radius>0
    while(radius<=0)
    {
        cout << "Enter a Value Greater than 0 for Radius :" << endl;
        cin >> radius;
    }
    //Calculation Function Called
    Sphere_Calc(radius, ptr_area, ptr_volume);

    cout << " Area of Sphere = " << *ptr_area <<
            " Volume of Sphere = " << *ptr_volume <<endl;

    return 0;
}

//Function to calculate area & volume and return values as pointers
void Sphere_Calc(double radius, double *ptr_area, double *ptr_volume)
{
    *ptr_area = 4 * M_PI * pow(radius,2);
    *ptr_volume = (4/3.0) * M_PI * ( radius * radius * radius );

    return;
}
