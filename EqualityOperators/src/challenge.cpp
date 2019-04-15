#include <iostream>

using namespace std;

int main(){
    cout << "Enter an amount in cents: ";
    int cents{},dollars{0}, quarter{0}, dime{0}, nickel{0}, penny{0};
    
    cin >> cents;
     dollars = cents/100;
     quarter = (cents%100)/25;
     dime = ((cents%100)%25)/10; 
     nickel = (((cents%100)%25)%10)/5; 
     penny = (((cents%100)%25)%10)%5; 

    cout << "Dollars: "  << dollars << endl;
    cout << "Quarters: "  << quarter << endl;
    cout << "Dimes: "  << dime << endl;
    cout << "Nickels: "  << nickel << endl;
    cout << "Pennis: "  << penny << endl;
    return 0;

}