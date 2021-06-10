#include <string>
#include <iostream>
using namespace std;

char grid[5][5];

void printall(){
    for(int j=0; j<=4; j++){
        for(int i=0; i<=4; i++){   //print char by char
            cout << grid[j][i];
        }
        cout << '\n';
    }
}




int main(){
    char grid_element;
    int empty_x, empty_y, i;
    string ins;
    bool no_config;
    for(int j=0; j<=4; j++){
        for(int i=0; i<=4; i++){   //read char by char into array
            grid[j][i] = getchar();
            if (grid[j][i] == ' '){empty_x = j; empty_y = i;}
            
        }
        getchar(); //read return character
    }
    cin >> ins;
    no_config = false;
    i = 0;
    while (i<ins.length() && !no_config){ 
        switch(ins[i]){
            //x is the y
            case 'A': {
                if (empty_x - 1 < 0) { cout << "This puzzle has no final configuration."; no_config = true;};
                swap(grid[empty_x][empty_y], grid[empty_x-1][empty_y]);
                empty_x = empty_x - 1; //update position of the new empty
                break;};
            case 'B': {
                if (empty_x + 1 > 4) { cout << "This puzzle has no final configuration."; no_config = true;};
                swap(grid[empty_x][empty_y], grid[empty_x+1][empty_y]);
                empty_x = empty_x + 1;
                break;}; //break for reduce comparison
            case 'L': {
                if (empty_y - 1 < 0) { cout << "This puzzle has no final configuration."; no_config = true;};
                swap(grid[empty_x][empty_y], grid[empty_x][empty_y-1]);
                empty_y = empty_y - 1;
                break;};
            case 'R': {
                if (empty_y + 1 > 4) { cout << "This puzzle has no final configuration."; no_config = true;};
                swap(grid[empty_x][empty_y], grid[empty_x][empty_y+1]);
                empty_y = empty_y + 1; 
                break;};
        }
        i++;
    }

    if (no_config == false) printall();
}

// ... did not copy the space character in pdf, that's why it took so long. found ppl with the same problem in vjudge too