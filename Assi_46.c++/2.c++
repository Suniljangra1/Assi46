// question 2
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int> r;
    r.insert(pair<string,int>("cust1",56));
    r.insert(pair<string,int>("cust2",45));
    r.insert(pair<string,int>("cust3",78));
    r.insert(pair<string,int>("cust4",23));
    map<string,int>::iterator o;
    o = r.begin();
    while(!r.empty())
    {
        cout<<o->first<<" "<<o->second<<"\n";
        o++;
    }
}