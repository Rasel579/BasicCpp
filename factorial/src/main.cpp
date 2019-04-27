#include <iostream>

using namespace std;
unsigned long long fibonachi(unsigned long long n);
unsigned long long factorial(unsigned long long n);

unsigned long long fibonachi( unsigned long long n){
    if (n <= 1){
        return n;
    }
    return fibonachi(n-1) + fibonachi(n-2);
}

unsigned long long factorial(unsigned long long n){
    if (n == 0){
        return 1;
    }
    return n*factorial(n-1);
}


int main(){
    cout << fibonachi(5) << endl;
    cout << fibonachi(30) << endl;
    cout << fibonachi(40) << endl;
    cout << factorial(3) << endl;
    cout << factorial(8) << endl;
    cout << factorial(12) << endl;
    cout << factorial(20) << endl;
    
    return 0;

}