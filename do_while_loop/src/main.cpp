#include <iostream>

using namespace std;

int main(){

    char selection {};

    do
    {
        /* code */
        cout << "\n ================" << endl;
        cout << "1: Do this" << endl;
        cout << "2: Do that" << endl;
        cout << "3: Do something else" << endl;
        cout << "Q: Quit" << endl;
        cout << "Enter your selection: ";
        cin >> selection;
        if (selection == '1'){
            cout << "\n ================" << endl;

            cout << "Do this" << endl;
        } else if ( selection == '2'){
            cout << "\n ================" << endl;
            cout << "Do that" << endl;
        } else if (selection == '3'){
           cout << "\n ================" << endl;
           cout << "Do something else" << endl;
        } else {
             cout << "\n ================" << endl;
            cout << "Illegible input" << endl;
        }
        
    } while (selection != 'Q' && selection != 'q');
    
    return 0;

}