#include<iostream>
using namespace std;


int main(){
    int i = 50;
    int sum = 0;
    while(i<=100)
    {
        ++i;
        sum += i;
    }
    cout<<"sum fro 50 to 100 is"<<sum<<endl;
    return 0;
}
