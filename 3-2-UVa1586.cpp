#include <string>
#include <iostream>
using namespace std;

int main(){
    string formula;
    double paw, total; //用 double 增加準確性
    int number, temp_number, multi;
    while(cin >> formula){
        paw = 0;
        total= 0;
        multi = 1;
        number = 1;
        temp_number = 0;
        for (int i=formula.length()-1; i>=0; i--){
            if (not isdigit(formula[i]) ){
                if(formula[i]=='C') paw = 12.01;
                if(formula[i]=='H') paw = 1.008;
                if(formula[i]=='O') paw = 16.00;
                if (formula[i]=='N') paw = 14.01;
                total += paw*number;
                number = 1;
                multi = 1;
                temp_number = 0;
            } 
            else {
                temp_number = (int)formula[i] - 48;
                if(multi == 10) number = number + temp_number * multi;
                else number = temp_number;
                multi = 10;
            }
        }
    if(total != 0) printf("%.3f\n",total); //%.3f 和 \n 之間不能有空格。。。不然會多出空格
    }
}
