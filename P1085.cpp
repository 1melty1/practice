#include <iostream>
using namespace std;

int main(){
    int i, school, eca, b4=8, unhappyday=0;
    for (i=1 ; i<=7 ; i++){
        cin >> school;
        cin >> eca;
        if (school+eca > b4){
            b4 = school + eca;
            unhappyday = i;
        }
    }
    cout << unhappyday;
}