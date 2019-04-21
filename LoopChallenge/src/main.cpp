#include <iostream>
#include <vector>

using namespace std;

int main(){
    char selection {};
    vector <int> list_numbers {};
    do{
         cout << "==============================="<< endl;
         cout << "P - Print numbers" << endl;
         cout << "A - add a number" << endl;
         cout << "M - display mean of the numbers" << endl;
         cout << "S - Display the smallest number" << endl;
         cout << "L - Display the largest number" << endl;
         cout << "F - find the number of times it occurs in the list" << endl;
         cout << "C - To clear the list of numbers" << endl;
         cout << "Q - Quit" << endl;
         cout << "\nEnter your choice: ";
         cin >> selection;


         if( selection == 'P' || selection == 'p'){
             if(list_numbers.size() == 0){
                 cout << "[] - the list is empty" <<endl;
                 cout << "==============================="<< endl;

             } else {
                    cout << "[ ";
                   for(auto val : list_numbers){
                       cout << val << " ";
                   }
                   cout << " ]" << endl;
                   cout << "==============================="<< endl;

             }
         }

         else if (selection == 'A' || selection == 'a'){
              int addedNumber {};
              int repeatTimes {};
              cout << "Enter an integer number: ";
              cin >> addedNumber;
              for (auto val : list_numbers){
                  if (val == addedNumber){
                      repeatTimes++;
                  }
              }
              if(repeatTimes){
                  cout << "You already entered this number" << endl;
                  cout << "==============================="<< endl;
              } else{
                   list_numbers.push_back(addedNumber);
                   cout << addedNumber << " added." << endl;
                   cout << "Duplicate list entries are OK" << endl;
                   cout << "==============================="<< endl;
              }
              
         }

         else if(selection == 'm' || selection == 'M'){
             int sum {0};
             double avg_list {0};
             if(list_numbers.size() == 0){
                 cout << "Unable to calculate the mean - no data" <<endl;
                 cout << "==============================="<< endl;

             } else {
                 for (auto val : list_numbers){
                     sum+= val;
                 }
                 avg_list = sum / list_numbers.size();
                 cout << "The mean of list is " << avg_list << endl;
                 cout << "==============================="<< endl;

             }

         }


         else if (selection == 's' || selection == 'S'){
             if(list_numbers.size() == 0){
                 cout << "Unable to determine the smalest number - the list is empty" <<endl;
                 cout << "==============================="<< endl;

             } else {
                 int smallest_number = list_numbers[0];
                 for (auto val: list_numbers){
                     if(val < smallest_number){
                         smallest_number = val;
                     }
                 }
                 cout << "The smallest number is " << smallest_number << endl;
                 cout << "==============================="<< endl;

             }
         }


         else if (selection == 'l' || selection == 'L'){
             if(list_numbers.size() == 0){
                 cout << "Unable to determine the largest number - the list is empty" <<endl;
                 cout << "==============================="<< endl;

             } else {
                 int largest_number = list_numbers[0];
                 for (auto val: list_numbers){
                     if(val > largest_number){
                         largest_number = val;
                     }
                 }
                 cout << "The largest number is " << largest_number << endl;
                 cout << "==============================="<< endl;

             }
         }

         else if (selection == 'f' || selection == 'F'){
             int finderNumber {};
             int times {};
             cout << "Enter the number are you looking for: ";
             cin >> finderNumber;
             for (auto val : list_numbers){
                 if( val == finderNumber){
                     times++;
                 }
             }

             cout << "Your number is repeating " << times << " times in the list." << endl;
             cout << "==============================="<< endl;
         }


        else if (selection == 'c' || selection == 'C'){
            list_numbers.clear();
            cout << "You list is empty now. " << endl;
            cout << "==============================="<< endl;
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