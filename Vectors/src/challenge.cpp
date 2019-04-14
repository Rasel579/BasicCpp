#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> vector1;
    vector <int> vector2;
    vector1.push_back(100);
    vector1.push_back(200);
    cout << "Elements are " << vector1.at(0) << " and " << vector1.at(1) << " and size of vector is " << vector1.size() << endl;
    cout << "========================" << endl;
    vector2.push_back(10);
    vector2.push_back(20);
    cout << "Elements are " << vector2.at(0) << " and " << vector2.at(1) << " and size of vector is " << vector2.size() << endl;

    vector <vector <int>> vector_2d;
    vector_2d.push_back(vector1); // {100, 200}
    vector_2d.push_back(vector2); // {10, 20}
    cout << "Elements are " << vector_2d.at(0).at(0) << " and " << vector_2d.at(0).at(1) 
        << " and "<< vector_2d.at(1).at(0) << " and "
             << vector_2d.at(1).at(1) << " and size of vector is " << vector_2d.size() << endl;
    cout << "=========================" << endl;
    vector1.at(0) = 1000;
    cout << "Elements are " << vector_2d.at(0).at(0) << " and " << vector_2d.at(0).at(1) 
        << " and "<< vector_2d.at(1).at(0) << " and "
             << vector_2d.at(1).at(1) << " and size of vector is " << vector_2d.size() << endl;
    
    cout << "=========================" << endl;
    cout << "Elements are " << vector1.at(0) << " and " << vector1.at(1) << " and size of vector is " << vector1.size() << endl;

    
 
    return 0;

} 