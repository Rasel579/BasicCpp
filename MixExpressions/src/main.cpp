#include <iostream>

using namespace std;

int main(){
    int total {0};
    int num1 {0}, num2 {0}, num3{0};
    const int count {3};
    
    cout << "Enter 3 integers separated by spaces: ";

    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average {0.0};

    average = static_cast<double> (total)/count;

    cout << "the 3 integers were " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The sum of the numbers: " << total << endl;
    cout << "The average is :" << average << endl;

    
    return 0;

}