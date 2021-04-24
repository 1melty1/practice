#include <iostream>
using namespace std;

int main(){
    int i, j, number;
    for (i=1; i<6; i++){
        for (j=1; j<6; j++){
            cin >> number;
            if (number==1) cout << abs(3-j)+abs(3-i);;
        }
    }
}