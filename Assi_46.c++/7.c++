// Question 7
#include<bits/stdc++.h>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    map<int,int> g,r;
    g.insert(pair<int,int>(1,6));
    g.insert(pair<int,int>(2,8));
    g.insert(pair<int,int>(6,3));
    g.insert(pair<int,int>(8,2));
   
    map<int,int>::iterator it; 
    for(auto it=g.rbegin(); it!=g.rend(); it++){
     r[it->second]= it->first;
    }
   
    for(auto it=r.rbegin(); it!=r.rend(); it++){
        cout<<it->first<<" "<<it->second<<"\n";}
}