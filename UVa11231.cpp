#include <iostream>
using namespace std;

int solve(int r, int c, int iw){
    if(r<=8 && c<=8 && !iw) return 0;
    int total = 0;
    c -= 7;
    r -= 7;
    if(r*c % 2 == 0) return r*c/2;
    if(iw) return int(r*c/2) + 1;
    if(!iw) return int(r*c/2);
    }
int main(){
    int row, column, is_white;
    while((cin >> row >> column >> is_white) && row!=0 && column!=0){
        cout << solve(row, column, is_white) << '\n';
    }
}