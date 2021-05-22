#include <iostream>
using namespace std;

int main(){
    int arr[10];
    string input;
    cin >> input;
    memset(arr, 0, sizeof(arr));
    for (int i=0; i<input.size(); i++){
        arr[(int)input[i] - 48] ++;
    }
    for (int i=0; i<10; i++) cout << arr[i];
}