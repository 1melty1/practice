#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

int main(){
    int N, i;
    unsigned long int height, stackhigh; // remember to use long if too large
    stackhigh = 0;
    cin >> N >> height;
    N = N-1;
    int cow[N];
    for (i=0 ; i <= N ; i++ ){
        cin >> cow[i];
    }
    sort(cow, cow+N+1, cmp); // remember to do it like this, cow+N+1, cmp for descending order
    for (i=0 ; i <= N ; i++){
        stackhigh = stackhigh + cow[i];
        if (stackhigh >= height){
            cout << i+1;
            break;
        }
    }
}