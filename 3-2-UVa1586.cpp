#include <string>
#include <iostream>
using namespace std;

int main(){
    string formula;
    float paw=0, total=0;
    int number;
    cin >> formula;
    for (int i=0; i<formula.length()+1; i++){ //need to +1 
    
    if (not isdigit(formula[i]) ){
        total += paw*number;
        if(formula[i]=='C') paw = 12.01;
        if(formula[i]=='H') paw = 1.008;
        if(formula[i]=='O') paw = 16.00;
        if (formula[i]=='N') paw = 14.01;
        number = 1;
    } 
    else {
        number = (int)formula[i] - 48;
    }
    }
    cout << total;
}