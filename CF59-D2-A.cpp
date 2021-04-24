#include <iostream>
#include <string>
using namespace std;

int main(){
    int lowercase=0;
    string s1;
    cin >> s1;
    for (int i=0; i<s1.size(); i++){
        if (islower(s1[i])){
            lowercase ++;
        }
    }
    if (lowercase >= (s1.size()-lowercase)){
        for (int i=0; i<s1.size(); i++){
            cout << (char) tolower(s1[i]);
            }
    } else {
        for (int i=0; i<s1.size(); i++){
            cout << (char) toupper(s1[i]);
        }
    }
}