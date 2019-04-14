#include <iostream>

using namespace std;

int main(){
    //This program will calculate the area of a room in square feet


    cout << "Enter the width of the room:";
    int roomWidth {0};
    cin >> roomWidth;

    cout << "Enter the length of the room:";
    int roomLength {0};
    cin >> roomLength;

    cout << "The area of the room: " << roomLength * roomWidth << " m2" << endl;



    return 0;

}