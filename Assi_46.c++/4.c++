// question 4
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(4,40));
    m.insert(pair<int,int>(2,90));
    map<int,int>::iterator r;
    for(auto r=m.rbegin(); r!=m.rend(); r++)
    cout<<r->first<<" "<<r->second<<"\n";
    
}