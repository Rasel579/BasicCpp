#include <iostream>

using namespace std;

void local_example();
void global_example();
void static_local_example();

int num {300}; // Global variable - declared outside any class or function

void local_example(int x){
    int num {1000}; // local to local example
    cout << "\nLocal num is " << num << " in local_example - start" << endl;
    num = x;
    cout << "\nLocal num is " << num << " in local_example - end" << endl;

}

void global_example(){
    cout << "\nGlobal num is " << num << " in global-example - start " << endl;
    num*=2;
    cout << "\nGlobal num is " << num << " in global-example - end " << endl;
}

void static_local_example(){
    static int num {5000};  // local to static_local_example static - retains it to value between calls
    cout << "\nLocal static num is " << num << "in static_local_example - start" <<endl;
    num += 1000;
    cout << "\nLocal static num is " << num << "in static_local_example - end" <<endl;


}

int main(){
    int num {100}; //Local to main
    int num1 {500}; //Local to main

    cout << "Local num is " << num << " in main" << endl;
    { // creates a new level of scope
       int num { 200 }; // local to inner block
       cout << "Local num is " << num << " in inner block in main" << endl;
       cout << "Inner block can see out - num1 is " << num1 << endl;


    }

    cout << "Local num is " << num << " in main" << endl;

    local_example(10);
    local_example(20);

    global_example();
    global_example();


    static_local_example();
    static_local_example();
    static_local_example();

    return 0;

}