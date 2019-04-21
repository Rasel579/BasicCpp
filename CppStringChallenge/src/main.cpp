#include <iostream>

using namespace std;

int main(){
    string alphabet {"qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"};
    string key {"MNBVCXZLKJHGFDSAPOIUYTREWQmnbvcxzlkjhgfdsapoiuytrewq"};
    string word {};
    cout << "Enter a word to encrypted it: ";
    getline(cin, word);
    string encrypted_message {};
    for (char c: word){
        size_t position = alphabet.find(c);
        if ( position != string::npos){
             char key_char = key.at(position);
             encrypted_message += key_char;
        } else {
            encrypted_message += c;
        }
    }

    cout << "Encrypted word is " << encrypted_message << endl;
     string decrypted_word {};
    for (char c: encrypted_message){
        size_t position = key.find(c);
        if( position != string::npos){
            char new_char = alphabet.at(position);
            decrypted_word += new_char;
        } else {
            decrypted_word += c;
        }
    }
    
     

    cout << "Decrypted word is " << decrypted_word << endl;

    return 0;

}