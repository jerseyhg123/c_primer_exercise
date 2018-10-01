#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(v1);
    vector<int> v3 = v1;

    vector<int> v4(10,100);
    vector<int> v5(100);

    vector<string> v6;
    v6.push_back("Hello world!");
    v5.push_back(12);
    
    v4.pop_back();
    
    int nNum = v4[4];
    v4.at(2);
    v4.front();
    v4.back();
    V4.size();
    v4.empty();
    v1==v2;
    return 0;   
}
