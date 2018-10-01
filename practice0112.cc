#include<iostream>
using namespace std;


int main()
{
    int crt_value=0;
    int value=0;
    if(cin>>crt_value)
    {   
        int n = 1;
        while(cin>>value)
        {
            if(crt_value==value)
                ++n;
            if(crt_value !=value)
            {   
                cout<<crt_value<<"times:"<<n<<endl;
                crt_value = value;
                n = 1;
            }
            if(crt_value==-1)
            {
                break;
            }
        }
        return 0;   
    }
}
