#include <iostream>

using namespace std;

int main(){
    int num {};
    cout << "Enter a positive integer - start the countdown: ";
    cin >> num;

    while(num > 0){
        cout << num << endl;
        --num;
    }

    int number {};
    cout << "Enter an integer less than 100: ";
    cin >> number;
    while(number > 100){
        cout << "The number is over 100, please, enter a number less 100: ";
        cin >> number;
    }

    cout << "Thanks!" << endl;

    bool done {false};
    int numb {};

    while( !done){
        cout << "Enter the number between 1 and 5: ";
        cin >> numb;
        if( numb <= 1 || numb >= 5){
            cout << "This is out of range> please, try again!" << endl;
        } else {
            cout << "Thanks!" << endl;
            done = true;
        }
    }


    cout << "Blastoff" << endl;

    return 0;

}