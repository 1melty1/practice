#include <string>
#include <iostream>
using namespace std;

int main(){
    string scorestr;
    int streak=0, total=0;
    cin >> scorestr;
    for (int i=0; i<79; i++){
        if (scorestr[i]=='O'){streak++; total+=streak;}
        else (streak = 0);
    }
    cout << total;
}