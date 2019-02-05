/*
Description:
Author: Zurone Chen
Input Variables: 
Process Flow:
Output Variables: 
*/

// #include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

double PI = 3.14159;

double sphere_volume(double r) // Computes the volume of a sphere
{
    double volume = (4 *  (PI * pow(r, 3)) / 3); 
    return volume;
}

double sphere_surface(double r) // Computes the surface area of a sphere
{
    double surface_area = 4 * PI * pow(r, 2);
    return surface_area;
}

double cylinder_volume(double r, double h) // Computes the volume of a cylinder
{
    double volume = PI * pow(r, 2) * h; 
    return volume;
}

double cylinder_surface(double r, double h) // Computes the surface area of a cylinder
{
    double surface_area = 2 * PI * r * h;
    return surface_area;
}

double cone_volume(double r, double h) // Computes the volume of a cone
{
    double volume = (PI * pow(r, 2) * h) / 3; 
    return volume;
}

double cone_surface(double r, double h) // Computes the surface area of a cone
{
    double surface_area = PI * r * (r + sqrt(pow(h, 2) + pow(r, 2)));
    return surface_area;
}


int main()
{
    double r; 
    double h;

    cout << "Please enter the radius: ";
    cin >> r;

    cout << "Please enter the height: ";
    cin >> h;

    //Sphere
    double volume_sphere = sphere_volume(r);
    double surface_sphere = sphere_surface(r);

    //Cylinder
    double volume_cylinder = cylinder_volume(r, h);
    double surface_cylinder = cylinder_surface(r, h);

    //Cone
    double volume_cone = cone_volume(r, h);
    double surface_cone = cone_surface(r, h);

    cout << "The volume of the sphere is: " << volume_sphere << endl;
    cout << "The surface area of the sphere is: " << surface_sphere << endl;
    cout << "The volume of the cylinder is: " << volume_cylinder << endl;
    cout << "The surface area of the cylinder is: " << surface_cylinder << endl;
    cout << "The volume of the cone is: " << volume_cone << endl;
    cout << "The surface area of the cone is: " << surface_cone << endl;

//    system("pause");
   return 0;
}



















