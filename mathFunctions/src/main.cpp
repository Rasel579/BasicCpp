#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double num {};
    cout << "Enter a number (double): ";
    cin >> num;

    cout << "The sqrt of the number is " << sqrt(num) << endl;
    cout << "The cubed root of the number is " << cbrt(num) << endl;
    cout << "The sine of the number is " << sin(num) << endl;
    cout << "The cosine of the number is " << cos(num) << endl;
    cout << "The ceil of the number is " << ceil(num) << endl;
    cout << "The floor of the number is " << floor(num) << endl;
    cout << "The round of the number is " << round(num) << endl;

    double power {};
    cout << "\nEnter a power to raise " << num << " to: ";
    cin >> power;
    cout << num << "is raised to the " << power << " is " << pow(num, power) << endl;
    
    return 0;

}