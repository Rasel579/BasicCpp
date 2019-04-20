#include <iostream>
#include <vector>

using namespace std;

int main(){
    int scores[] {10, 20, 30};
    for ( auto score: scores){
        cout << score << endl;
    }

    vector <double> temp {87.9, 77.9, 80.0, 72.5};
    double avg_temp {};
    double sum_temp {};

    for ( auto temp: temp){
        sum_temp+= temp;
    }

    cout << "The average tempreture is " << sum_temp/temp.size() << endl;

    return 0;

}