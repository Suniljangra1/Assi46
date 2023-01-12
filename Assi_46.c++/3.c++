// question 3
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> m;
    m.insert(pair<int,int>(1,23));
    m.insert(pair<int,int>(2,46));
    m.insert(pair<int,int>(3,65));
    m.insert(pair<int,int>(5,98));
    m.insert(pair<int,int>(6,22));
    m.insert(pair<int,int>(7,6));
    map<int,int>::iterator t;
    for(auto t=m.rbegin(); t!=m.rend(); t++)
    cout<<t->first<<" "<<t->second<<"\n";

}