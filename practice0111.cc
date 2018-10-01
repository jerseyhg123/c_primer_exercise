#include<iostream>
using namespace std;

int main()
{
    int value1;
    int value2;
    cin>>value1;
    cin>>value2;
    while(value1>value2)
    {
        cout<<value2<<endl;
        ++value2;
    }
    while(value1<value2)
    {
        cout<<value1<<endl;
        ++value1;
    }
    if(value1==value2)
        return -1;
    return 0;
}
