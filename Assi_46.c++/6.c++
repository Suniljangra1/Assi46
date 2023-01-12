// question 6 
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> n;
    if(!n.empty())
    cout<<"Map is not empty : ";
    else 
    cout<<"Map is empty : ";
    n.insert(pair<int,int> (1,3));
    n.insert(pair<int,int>(2,4));
    n.insert(pair<int,int>(4,5));
    n.insert(pair<int,int>(5,9));
    cout<<"\nSize of the map is "<<n.size();
}