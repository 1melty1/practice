#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int fixed, min_dist, i, dist;
    bool success;
    string s1, s2;
    while(cin>>s1){
        cin >> s2;
        if(s2.length() > s1.length()) swap(s1, s2);
        min_dist = dist = s1.length() + s2.length();
        fixed = 0;
        for(int i=0; i<s2.length(); i++) s1 = '1' + s1 + '1';
        while(fixed != dist-1){
            success = 1;
            i = 0;
            while(i<=s2.length() && success){
                if(s1[fixed + i] == '2' && s2[i] == '2'){
                    success=0;
                }else{
                    i++;
                }
            }
            if(success && (fixed != s2.length())) min_dist = min(max(static_cast<int>(fixed+s2.length()-1), dist) - min(fixed+1, static_cast<int>(s2.length())), min_dist);
            if(success && (fixed == s2.length())) min_dist == s1.length();
            fixed++;
        }
        cout << min_dist << '\n';
    }
}