#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, s1, s2;
    bool is_equal;
    while(cin >> s){
        is_equal = false;
        s1 = s.substr(0, 6);
        s2 = s.substr(6);
        
        for(int i=0; i<4; i++){
            swap(s1[1], s1[3]); //fix face 1 6 swap=turn 2 4 5 3
            swap(s1[3], s1[4]);
            swap(s1[4], s1[2]);
            
            for(int i=0; i<4; i++){
                swap(s1[0], s1[1]); //fix face 3 4 swap=turn 1 2 6 5
                swap(s1[1], s1[5]);
                swap(s1[5], s1[4]);
                is_equal = (s1==s2) || is_equal;
                
                for(int i=0; i<4; i++){
                    swap(s1[0], s1[3]); //fix face 2 5 swap=turn 1 4 6 3
                    swap(s1[3], s1[5]);
                    swap(s1[5], s1[2]);
                    is_equal = (s1==s2) || is_equal;
                }
            }
            is_equal = (s1==s2) || is_equal;
        }
        

        
        
        if(is_equal) cout << "TRUE" << '\n';
        else cout << "FALSE" << '\n';
    }
}
