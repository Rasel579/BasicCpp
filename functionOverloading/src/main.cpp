#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print (vector <string>);


void print (int num){
    cout << "Printing int is " << num << endl;
}
void print (double num){
    cout << "Printing double is " << num << endl;
}
void print (string s){
    cout << "Printing string is " << s << endl;
}
void print (string s, string t){
    cout << "Printing 2 string is " << s << " and " << t << endl;
}
void print (vector <string> s){
    for (auto v: s){
        cout << v + " ";
        cout << endl;
    }
}

int main(){
    print(100);
    print('A');
    print(123.5);
    print(123.5F);
    print("C-style string");
    string s {"C++ string"};
    print(s);
    print("C-style string",s);

    vector <string> three_stooges {"Larry", "Moe", "Joe"};
    print(three_stooges);
    
    return 0;

}