#include <iostream>

using namespace std;

int main(){
    cout << "Hello, welpcome to Frank's Carpet Cleaning Service" << endl;
    cout << endl;
    cout << "Enter the number of  small rooms: ";
    int numberOfSmallRooms {0};
    int numberOfBigRooms {0};
    const double priceForSmallRoom {25};
    const double priceForBigRooms {30};
    const double taxRate {0.06};
    cin >> numberOfSmallRooms;
    cout << "How many big rooms you would like to be cleaned: " << endl;
    cin >> numberOfBigRooms;
    cout << "The number of  small rooms : " << numberOfSmallRooms << endl;
    cout << "The number of  big rooms : " << numberOfBigRooms << endl;
    cout << "The price per small room $: " << priceForSmallRoom << endl;
    cout << "The price per big room $: " << priceForBigRooms << endl;

    cout << "Cost is: $" << numberOfSmallRooms * priceForSmallRoom + numberOfBigRooms*priceForBigRooms << endl;
    cout << "The tax is $" << (numberOfSmallRooms * priceForSmallRoom + numberOfBigRooms*priceForBigRooms)*taxRate << endl;
    cout << "The total price is $" << ( numberOfSmallRooms * priceForSmallRoom + numberOfBigRooms*priceForBigRooms) + 
    ((numberOfSmallRooms * priceForSmallRoom + numberOfBigRooms*priceForBigRooms)*taxRate) << endl;

    return 0;

}