#include <stdio.h>
#include <string>
using namespace std;

int main(){
    string x, y;
    int hold=0, int_x, int_y;
    string result[250];
    scanf("%s", &x[0]);
    scanf("%s", &y[0]);
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    if(y.length() > x.length()) swap(x, y);
    for(int i=0; i<y.length(); i++){
        for(int z=0; z<i-1; z++){
            result[i] += '0';
        }

        for(int j=0; j<x.length(); j++){
            int int_x = (int)y[i] - 48;
            int int_y = (int)x[j] - 48;

            hold = (hold-hold%10)/10 + int_x * int_y;
            result[i] += to_string(hold%10);
        }
        result[i] += to_string(hold);
        hold = 0;
    }
    hold = 0;
    for(int i=0; i<250; i++){
        for(int j=0; j<600; j++){
            int int_x = (int)result[i][j] - 48;
            printf("%d", hold%10);
        }
        hold = (hold-hold%10)/10;
        hold += int_x;
    }
    printf("\n");
}