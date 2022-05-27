#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

const int maxN = 10000;

int main()
{
    int n, num_pts, min_x, max_x;
    double center; // center is not int as 0.5 may happen when 5, 6. HAVE TO USE DOUBLE ... Precision is sometimes source of error...
    bool valid;
    n = 0;
    cin >> n;
    pair <int, int> pt; // need to include utility
    for(int i=0; i<n; i++){
        vector<pair <int, int>> pts_vec = {}; // vector is set as empty
        num_pts = center = 0;
        min_x = maxN; // beware of min_x should not 0 in the beginning
        max_x = - maxN;
        valid = true;
        
        cin >> num_pts;
        for(int i=0; i<num_pts; i++){
            cin >> pt.first >> pt.second;
            min_x = min(min_x, pt.first); // also works for all lining in the middle
            max_x = max(max_x, pt.first); // need to include algorithm
            pts_vec.push_back(pt);
        }// how to use a set
        
        center = (max_x+min_x)/2.0;
        // Math : it's +, need to use /2.0 to get float result instead of a rounded result although center is float already
        
        for(int i=0; i<num_pts; i++){
            pt = make_pair(2*center - pts_vec[i].first, pts_vec[i].second);
            if(count(pts_vec.begin(), pts_vec.end(), pt) == 0){ // check if opposite pt is found
                valid = false; // make_pair can manually construct a pair
                break;
            }
        }
        if(valid) cout << "YES\n";
        else cout << "NO\n";
        
    }
}