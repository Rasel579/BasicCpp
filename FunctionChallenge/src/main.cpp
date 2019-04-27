#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display(vector <string> v, char &selection);
void printNumbers(vector <int> v);
void addNumberToVector(vector <int> &v);
void meanNumbers( vector <int> v);
void smallestNumber(vector <int> v);
void largestNumber(vector <int> v);
void clear (vector <int> &v);


int main(){
    char selection {};
    vector <int> list_numbers {};
    vector <string> display_option {"===============================", "P - Print numbers", "A - add a number",
                                         "M - display mean of the numbers", "S - Display the smallest number", 
                                         "L - Display the largest number",
                                         "C - To clear the list of numbers", "Q - Quit"};
    do{
         display(display_option, selection);


         if( selection == 'P' || selection == 'p'){
              printNumbers(list_numbers);
         }

         else if (selection == 'A' || selection == 'a'){
              addNumberToVector(list_numbers);
         }

         else if(selection == 'm' || selection == 'M'){
             meanNumbers(list_numbers);

         }


         else if (selection == 's' || selection == 'S'){
             smallestNumber(list_numbers);
         }


         else if (selection == 'l' || selection == 'L'){
             largestNumber(list_numbers);
         }



        else if (selection == 'c' || selection == 'C'){
            clear(list_numbers);
        }


         else if (selection == 'q' || selection == 'Q'){
             cout << "Goodbye!" << endl;
             cout << "==============================="<< endl;
         }

         else {
             cout << "Unknown selection, please, try again" << endl;
             cout << "==============================="<< endl;
         }




    } while (selection != 'q' && selection != 'Q');
    

    return 0;

}


void display(vector <string> v, char &selection){
    for (auto s: v){
        cout << s << endl;
    }
    cout << "\nEnter your choice: ";
    cin >> selection;
}

void printNumbers( vector <int> v){
    if( v.size() == 0){
                 cout << "[] - the list is empty" <<endl;
                 cout << "==============================="<< endl;

             } else {
                    cout << "[ ";
                   for(auto val : v){
                       cout << val << " ";
                   }
                   cout << " ]" << endl;
                   cout << "==============================="<< endl;

             }
}

void addNumberToVector(vector <int> &v){
              int addedNumber {};
              int repeatTimes {};
              cout << "Enter an integer number: ";
              cin >> addedNumber;
              for (auto val : v){
                  if (val == addedNumber){
                      repeatTimes++;
                  }
              }
              if(repeatTimes){
                  cout << "You already entered this number" << endl;
                  cout << "==============================="<< endl;
              } else{
                   v.push_back(addedNumber);
                   cout << addedNumber << " added." << endl;
                   cout << "Duplicate list entries are OK" << endl;
                   cout << "==============================="<< endl;
              }
}

void meanNumbers( vector <int> v){
             int sum {0};
             double avg_list {0};
             if(v.size() == 0){
                 cout << "Unable to calculate the mean - no data" <<endl;
                 cout << "==============================="<< endl;

             } else {
                 for (auto val : v){
                     sum+= val;
                 }
                 avg_list = sum / v.size();
                 cout << "The mean of list is " << avg_list << endl;
                 cout << "==============================="<< endl;

             }
}

void smallestNumber(vector <int> v){
   if(v.size() == 0){
                 cout << "Unable to determine the smalest number - the list is empty" <<endl;
                 cout << "==============================="<< endl;

             } else {
                 int smallest_number = v[0];
                 for (auto val: v){
                     if(val < smallest_number){
                         smallest_number = val;
                     }
                 }
                 cout << "The smallest number is " << smallest_number << endl;
                 cout << "==============================="<< endl;

             }
}

void largestNumber( vector <int> v){
   if(v.size() == 0){
                 cout << "Unable to determine the largest number - the list is empty" <<endl;
                 cout << "==============================="<< endl;

             } else {
                 int largest_number = v[0];
                 for (auto val: v){
                     if(val > largest_number){
                         largest_number = val;
                     }
                 }
                 cout << "The largest number is " << largest_number << endl;
                 cout << "==============================="<< endl;

             }
}

void clear (vector <int> &v){
            v.clear();
            cout << "You list is empty now. " << endl;
            cout << "==============================="<< endl;
}
