#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int arr[10];
    int input, input_times;
    string current;
    cin >> input_times;
    for (int j=1 ; j<=input_times; j++){
        cin >> input;
        memset(arr, 0, sizeof(arr));
        for (int i=1; i<=input; i++){
            current = to_string(i);
            for (int z=0; z<current.size(); z++) arr[current[z] - '0']++;
        }

    for (int i=0; i<9; i++) cout << arr[i] << ' ';
    cout << arr[9] << '\n';
    }
}
