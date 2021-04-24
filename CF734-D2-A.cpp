#include <iostream>
using namespace std;

int main(){
    int i, round, antonwin=0;
    char win;
    cin >> round;
    for (i=1; i<=round ; i++){
        cin >> win;
        if (win == 'A') antonwin++;
    }
    if (antonwin > (round - antonwin)){
        cout << "Anton";
    } else if (antonwin < (round - antonwin)){
        cout << "Danik"; 
    } else {cout << "Friendship";}
}