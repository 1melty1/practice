#include <iostream>
#include <algorithm>
using namespace std;

typedef struct face{double l,w;}face;

bool compareface(face face1, face face2){
    return ((face1.l == face2.l) && (face1.w == face2.w));
}

bool sortfacearr(face face1, face face2){
    if(face1.w != face2.w){
        return face1.w > face2.w;
    }else{
        return face1.l > face2.l;
    }   //ascending
}

bool search(int edge, face a[5]){
    int count=0;
    for(int i = 0; i<=5; i++){
        if(edge == a[i].l || edge == a[i].w) count++;
    }
    if(count >= 4) return true;
    else return false;
}

//void check(face a[]){
//    cout << "Array content: ";
//    for(int i=0; i<=5; i++){
//        cout << a[i].l << " ";
//    }
//    cout << "\n";
//        for(int i=0; i<=5; i++){
//        cout << a[i].w << " ";
//    }
//    cout << "\n";
//    cout << "End: \n";
//}

int main(){
    int length, width;
    face facearr[6];
    bool flag = true;
    while(cin>>facearr[0].l && cin>>facearr[0].w){
        if(facearr[0].l < facearr[0].w) swap(facearr[0].l, facearr[0].w); //sort data for each face
        
        for(int i = 1; i<=5; i++){
            cin>>facearr[i].l >> facearr[i].w;
            if(facearr[i].l < facearr[i].w) swap(facearr[i].l, facearr[i].w);
        }
        //check(facearr);
        sort(facearr, facearr + 6, sortfacearr); //from <algorithm>
        //check(facearr);
        if(compareface(facearr[0], facearr[1]) && compareface(facearr[2], facearr[3]) && compareface(facearr[4], facearr[5])){
            for(int i=0; i<=5; i++){
                flag = flag and search(facearr[i].l, facearr) and search(facearr[i].w, facearr);
            }
            if(flag) cout<< "POSSIBLE" << '\n'; //each face has a common side with another face
            else cout << "IMPOSSIBLE" << '\n';
        }else{
            cout << "IMPOSSIBLE" << '\n';
        }
        flag = true;
    }

    return 0;
}

//有没有 3 对 一样的两个面， 三个不同的面有没有一样的边
