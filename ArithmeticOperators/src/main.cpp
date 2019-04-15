#include <iostream>

using namespace std;

int main(){
     int num1 {200};
    int num2 {100};
    
    cout << num1 << " + " << num2 << " = "<< num1 + num2  << endl;
    int result {0};
    result = num1 - num2;
    cout << "result is " << result << endl;
    result = num1 / num2;
    cout << "result is " << result << endl;
    result = num1 * num2;
    cout << "result is " << result << endl;
    result = num2 / num1;
    cout << "result is " << result << endl;
    num1 = 10;
    num2 = 3;

    result = num1 % num2;
    cout << "result is " << result << endl;
    return 0;

}