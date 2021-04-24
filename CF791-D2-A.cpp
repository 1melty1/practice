#include <iostream>
using namespace std;

int main(){
    int i, limak_w, bob_w;
    cin >> limak_w;
    cin >> bob_w;
    for (i=1; i<=6; i++){
        limak_w = limak_w * 3;
        bob_w = bob_w * 2;
        if (limak_w > bob_w){
            break;
        }
    }
    cout << i;
}