#include <iostream>
using namespace std;
class add{
public:
    int a,b;
    void read(){
        a=10;
        b=20;
    }
    void result(){
        cout<<"Add:"<<(a+b);
    }
};
int main(){
    add oa;
    oa.read();
    oa.result();

    return 0;
}

