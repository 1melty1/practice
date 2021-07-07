#include <string>
#include <iostream>
using namespace std;

int main(){
    string scorestr;
    int input_times, streak, total;
    cin >> input_times;
    for (int j=1; j <= input_times; j++){
        streak = total = 0; //reset
        cin >> scorestr;
        for (int i=0; i<scorestr.length(); i++){ //不能 i<=79 不然會超出 scorestr index 範圍
            if (scorestr[i]=='O'){streak++; total+=streak;}
            else (streak = 0);
        }
        cout << total << '\n';
    }
}
