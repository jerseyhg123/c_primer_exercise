#include<iostream>
using namespace std;

template<typename T>
T add(T a,T b){
    return a+b;
}

int main(){
    add(10,20);
    float f1 = 10.1;
    float f2 = 20.1;
    add(f1,f2);
    cout<<add(f1,f2)<<endl;
    cout<<add(10,20)<<endl;
    return 0;
}
