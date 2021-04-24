#include <iostream>
using namespace std;

int main(){
    int number, score=0;
    cin >> number;
    while (number != 1){
        if (number % 2 == 1){
            number = number * 3 + 1;
        } else {
            number = number / 2;
        }
    score++;
    }
    cout << score;
}