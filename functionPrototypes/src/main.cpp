#include <iostream>

using namespace std;

const double pi = 3.14159;
//Function Prototypes
void area_circle();
double calc_volume_cylinder( double radius, double height);
double calc_area_circle(double radius);
void  volume_cylinder();


int main(){
    area_circle();
    volume_cylinder();
    return 0;

}



void area_circle(){
    double radius {};
    cout << "Enter the radius of the circle: ";
    cin  >> radius;
    double result = calc_area_circle(radius);
    cout << " The area of the circle is: " << result << endl;
}

double calc_volume_cylinder( double radius, double height){
    // return pi*radius* radius *height;
    return calc_area_circle(radius) * height;
}

double calc_area_circle(double radius){
  return pi*radius * radius;
}

void  volume_cylinder(){
    double radius {};
    double height {};
    cout << "\nEnter the radius of the cylinder height: ";
    cin >> radius;
    cout << "\nEnter the radius of the  height: ";
    cin >> height;

    cout << "The volume of the cylinder is " << calc_volume_cylinder(radius, height) << endl;
}
