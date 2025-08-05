#include<stdio.h>

int main(){
    char s[]="muruga",tch;
    int len=strlen(s);
    for(int i=0;i<len/2;++i){
        tch=s[i];
        s[i]=s[len-i-1];
        s[len-i-1]=tch;
    }
    puts(s);
}
