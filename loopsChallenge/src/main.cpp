#include <iostream>
#include <string>

using namespace std;

int main(){
    string input {};
    string midpoint {};
    string output {};
    cout << "Enter an input: ";
    getline(cin, input);
    

    for (auto val: input){
        midpoint += val;
        // cout << midpoint;
        // cout << endl;
        // cout << (midpoint.length() - 1) << endl;
        for ( size_t j = midpoint.length() -1; j > -1;  -- j  ){
            //  output[midpoint.length() - 1 + j] = midpoint[j];
             output += midpoint[j];
              cout << output;
              cout << endl;

        }
    }

    return 0;

}