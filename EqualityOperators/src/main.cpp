#include <iostream>

using namespace std;

int main(){
    bool equal_result {false};
    bool no_equal_result {false};
    int num1{}, num2{};
    // cout << boolalpha;

    cout << "Enter two integers separated by space: ";
    cin >> num1 >> num2;
    equal_result = num1 == num2;
    no_equal_result = num1 != num2;

    cout << "equal " << equal_result << endl; 
    cout << "no equal " << no_equal_result << endl; 

    return 0;

}