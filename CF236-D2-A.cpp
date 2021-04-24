#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
    string s;
    char contain_s[99];
    int j=0;
    memset(contain_s, 0, sizeof(contain_s)); 
    cin >> s;
    for (int i=0; i<=s.size(); i++){
        if (find(begin(contain_s), end(contain_s), s[i]) == end(contain_s)){
            contain_s[j] = s[i];
            j++;
        }
    }
    if (j%2 == 0)
        cout << "CHAT WITH HER!";
        else cout << "IGNORE HIM!";
}

//model ans:
#include <set>
#include <iostream>
 
using namespace std;
 
int main(){
	string s;
	cin>>s;
	set<char> m;
	for(int i=0;i<s.size();i++){
		
		m.insert(s[i]);
	}
	if (m.size()%2!=0) cout<<"IGNORE HIM!";
	else cout<<"CHAT WITH HER!";
	return 0;
}
 