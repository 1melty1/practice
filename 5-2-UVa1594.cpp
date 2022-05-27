#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int x, n, num, first_item, cnt;
    bool is_repeat, found;
    set<vector<int>> db;
    vector<int> sequence;
    cin >> x;
    while(x--){ //if it's --x, it won't enter the loop when x = 1
        first_item = 0;
        cnt = 0; // cannot write cnt, first_item = 0;
        is_repeat = false;
        found = false;
        db.clear();
        sequence = {};
        
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> num;
            sequence.push_back(num);
        }
        
        db.insert(sequence);
        while(cnt <= 1000 && !is_repeat && !found){
            cnt++;
            first_item = sequence[0]; //store first as it will be altered
            for(int i=0; i<n-1; i++){ //123 012
                sequence[i] = abs(sequence[i+1] - sequence[i]);
            }
            sequence[n-1] = abs(sequence[n-1] - first_item);
            //special case : the last element
            
            //check
            //for(int i=0;i<n;i++){cout << sequence[i] << " ";}
            //cout << '\n';
            
            
            found = (count(sequence.begin(), sequence.end(), 0) == n); //1.count() is for array 2.sequence+n doesn't work 3.count
            is_repeat = db.count(sequence); //only is repeat when the sequence exist (=1)
            db.insert(sequence); //record the sequence into set to check if it loops infinitely
        }
        if(found){cout << "ZERO\n";}
        else{cout << "LOOP\n";}
        
    }
}
