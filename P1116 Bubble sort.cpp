#include <iostream>
using namespace std;

void printarray(int cart[]){
    int i;
    for(i=0;i<=3;i++){
        cout << cart[i];
    }
    cout << endl;
}

int main(){
    int N, i, j, temp, count;
    count = 0;
    cin >> N ;
    N = N-1;
    int cart[N];
    for (i = 0 ; i <= N ; i++){
        cin >> cart[i];
    }
    for (j = 0; j < N; j++){
        cout << "j : "<< j << endl;
        for(i = 0; i < N-j; i++){
            cout << "i : "<< i << endl;
            if (cart[i] > cart[i+1]){
                temp = cart[i+1];
                cart[i+1] = cart[i];
                cart[i] = temp;
                count++;
                printarray(cart);
            }
        
        }

    }
    cout << count ;
}


#include <iostream>
using namespace std;

int main(){
    int N, i, j, temp, count;
    count = 0;
    cin >> N ;
    N = N-1;
    int cart[N];
    for (i = 0 ; i <= N ; i++){
        cin >> cart[i];
    }
    for (j = 0; j < N; j++){
        for(i = 0; i < N-j; i++){
            if (cart[i] > cart[i+1]){
                temp = cart[i+1];
                cart[i+1] = cart[i];
                cart[i] = temp;
                count++;
            }
        
        }

    }
    cout << count ;
}