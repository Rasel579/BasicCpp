#include <iostream>
#include <vector>

using namespace std;

int main(){
    for(int i {1}; i <= 10; i+=2){
        cout << i << endl;
    }
    for( int i{1}, j{5}; i <= 5; i++, j++){
        cout << i << " + " << j << " = " << (i + j) << endl;
    }
    for( int i {0}; i <= 100; i++){
        cout <<i;
        if(i % 10 == 0){
            cout << endl;
        } else{
            cout << " ";
        }
    }
    for (int i {0}; i <= 100; i++){
        cout << i;
        cout << ((i % 10 == 0) ? "\n" : " ");
    }

    vector <int> nums {10, 20, 30, 40 };
    for (unsigned i{0}; i < nums.size(); i++){
        cout << nums[i] << endl;
    }

    return 0;

}