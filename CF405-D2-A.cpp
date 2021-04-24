#include <iostream>
#include <algorithm>
using namespace std;

int compare(int a, int b){
    return a < b;
}
int main(){
    int i, j;
    cin >> i;
    i--;
    int arr[i];
    for (j=0; j<=i; j++){
        cin >> arr[j];
    }
    sort(arr, arr+i+1, compare);
    for (j=0; j<=i; j++) {
        cout << arr[j] << " ";
    }
}