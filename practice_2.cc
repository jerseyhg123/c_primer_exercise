#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    string str1;
    int nlines = 0;
    while(getline(cin, str1))
    {
        if(str1=="q"){
            break;
        }
        str += str1;
        str += "\n";
        nlines ++;

    }
    cout<<"total chars:"<<str.size()<<"total lines:"<<nlines<<endl;
    cout<<str<<endl;
    const char* p = str.c_str();

    return 0;
} 

