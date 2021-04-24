#include <iostream>
using namespace std;

int main(){
    int person, i, person_h, fence_h, width;
    cin >> person;
    cin >> fence_h;
    width = person;
    for (i=1; i <= person; i++){
        cin >> person_h;
        if (person_h > fence_h){
            width ++;
        }
    }
    cout << width;
}