#include <stdio.h>
#include <string.h>


int main(){
    char s[100000];
    char t[100000];
    int ptr1, ptr2;
    bool found = false;
    while(scanf("%s %s", s, t) != EOF){
        ptr1 = 0;
        ptr2 = 0;
        while((ptr1 <= strlen(s) && ptr2 <= strlen(t))  && !found){
            if(s[ptr1] == t[ptr2]){
                ptr1++;
                ptr2++;
            } else{
                ptr2++;
            }
            if(ptr1 == strlen(s)){printf("Yes"); found = true;};
        }
        if(!found) printf("No");
    }
}