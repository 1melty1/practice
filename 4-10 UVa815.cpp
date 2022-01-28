#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
int grid[840];
int m, n;
double water_level, percentage_below_water;
long water_volume;

void solve(){
    int base_height=grid[0], count=0;
    for(int i=0; i<m*n; i++){
        base_height = min(base_height, grid[i]);//using the lowest building as the base of calculation
    }
    long water_left=water_volume;
    sort(grid, grid+840);
    while(water_left >= 0 && count <= m*n-1){
        if(grid[count] != grid[count+1]){
            water_left -= ((grid[count+1]-base_height) - (grid[count]-base_height))*(count+1)*10*10;
            }
        count++;
    }
    count--;
    water_left += ((grid[count+1]-base_height) - (grid[count]-base_height))*(count+1)*10*10;//water_left < 0
    water_level = grid[count] + water_left*1.0/((count+1)*10*10); //use implicit conversion to get float from int
    percentage_below_water = (count+1)*1.0/(m*n)*100; //use implicit conversion to get float from int
}

int main(){
    int k = 0;
    while(scanf("%d %d", &m, &n) && m!=0 && n!=0){
        memset(grid, 1000000, sizeof(grid));
        k++;
        for(int i=0; i<m*n; i++){
            scanf("%d", &grid[i]);
        }
        scanf("%ld", &water_volume);
        solve();
        printf("Region %d\n", k);
        printf("Water level is %.2f meters.\n", water_level);
        printf("%.2f percent of the region is under water.\n", percentage_below_water);
        printf("\n");
    }
}
