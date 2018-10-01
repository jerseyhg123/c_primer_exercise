#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int value=0;
    cout<<"input number, ctrl+z to eminate:"<<endl;
    for (;cin>>value;)
        sum += value;
    cout<<"sum is"<<sum<<endl;
    return 0;
}
