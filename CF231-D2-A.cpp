#include <iostream>
using namespace std;

int main(){
    int question, i, j, view, totalview,questionsimp=0;
    cin >> question;
    for (i=0; i<question; i++){
        for (j=0; j<3; j++){
            cin >> view;
            if (view==1) totalview++;
        }
        if (totalview>=2) questionsimp++;
        totalview=0;
    }
    cout << questionsimp;
}