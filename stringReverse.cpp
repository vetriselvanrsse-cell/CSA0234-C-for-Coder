#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char s[]="MURUGA"; //MURUGAN
    int len=strlen(s);
    for(int i=0;i<len/2;++i){
        std:swap(s[i],s[len-i-1]);
    }
    puts(s);
}
