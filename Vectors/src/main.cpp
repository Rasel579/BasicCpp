#include <iostream>
#include <vector>

using namespace std;

int main(){
    // vector <char> vowels; //empty
    // vector <char> vowels (5); // 5 initialized to zero
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

    cout << vowels[0] << endl;
    cout << vowels[4] <<endl;

    vector <int> test_scores{100, 98, 89};
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    cout << "===============\n";

    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    cout << "================\n";


    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

    cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;

    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    cout << "\nEnter one more test score to add to the vector: ";
    int score_to_add{0};
    cin >> score_to_add;
    test_scores.push_back(score_to_add);
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    // cout << test_scores.at(10) << endl;

    cout << "================" << endl;

    vector <vector <int>> movieRating
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    cout << movieRating[0][1] << endl;  
    cout << movieRating[0][2] << endl;  
    cout << movieRating[0][3] << endl;  
    cout << "==================" << endl;

    cout << movieRating.at(0).at(1) << endl;  
    cout << movieRating.at(0).at(2) << endl;  
    cout << movieRating.at(0).at(3) << endl;

 
    return 0;

}