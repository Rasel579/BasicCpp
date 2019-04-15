#include <iostream>

using namespace std;

int main(){
    const double usdPerEur {1.19};
    cout << "Welcome to the EUR to USD converter\n";
    cout << "Enter the value in EUR: ";
    double eur {0.0};
    double usd {0.0};
    cin >> eur;
    usd = eur * usdPerEur;
    cout << "The USD is " << usd << endl;
    

    return 0;

}