#include <iostream>
using namespace std;

int main(){
    string k;
    bool flag = 1;
    cin >> k;
    for(int i=1; i<k.length()+1; i++){
        for(int j=0; j<i; j++) if(k[j] != k[i+j]) flag=0;
        if(flag == 1) cout << i;
        flag = 1;
    }
}