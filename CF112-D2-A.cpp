#include <iostream>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1;
    cin >> s2;
    for (int i=0; i<s1.size(); i++){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
    if (s1>s2) cout << "1";
    else if (s1<s2) cout << "-1";
    else cout << "0";
}

//model ans:

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int a;
 
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
 
    a=s1.compare(s2);
    cout<<a<<endl;
 
 
    return 0;
}