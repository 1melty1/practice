#include <iostream>
using namespace std;
int n, x;
struct dots{
    bool right;
    bool down;
};
dots arr[9][9];

bool solve(){
    bool sq_form, any_sq_form=false;
    int count;
    for(int sq_size=2; sq_size<=n; sq_size++){
        count = 0;
        for(int i=0; i<=n-sq_size; i++){
            for(int j=0; j<=n-sq_size; j++){
                sq_form = true;
                for(int k=i; k<i+sq_size-1; k++) sq_form = sq_form && arr[k][j].down;
                for(int k=i; k<i+sq_size-1; k++) sq_form = sq_form && arr[k][j+sq_size-1].down;
                for(int k=j; k<j+sq_size-1; k++) sq_form = sq_form && arr[i][k].right;
                for(int k=j; k<j+sq_size-1; k++) sq_form = sq_form && arr[i+sq_size-1][k].right;
                if(sq_form){count++; any_sq_form=true;}
            }
        }
        if(count>0) cout<<count<<" square (s) of size "<<sq_size-1<<"\n";
    }
    return any_sq_form;
}

int main(){
    char dir;
    int row, column, problem_count=0;
    while(cin>>n){
        cin>>x;
        for(int i=0; i<=8; i++){
            for(int j=0; j<=8; j++){
                arr[i][j].right = false;
                arr[i][j].down = false;
            }
        }
        for(int i=0; i<x; i++){
            cin>>dir>>row>>column;
            if(dir == 'H'){
                arr[row-1][column-1].right = true;
            }else{
                arr[column-1][row-1].down = true;
            }
        }
        if(problem_count!=0) cout << '\n' << "**********************************" << '\n' << '\n';
        problem_count++;
        cout<<"Problem #"<<problem_count<<"\n";
        cout<<"\n";
        if(not solve()) cout<<"No completed squares can be found."<<'\n';
    }

}