#include<stdio.h>
int main(){
    int i=0;
    char str[]="SSE";
    for(i=0;i<3;i++){
        printf("\n%c%c%c%c",str[i],i[str],*(i+str),*(str+i));
    }
    return 0;
}
