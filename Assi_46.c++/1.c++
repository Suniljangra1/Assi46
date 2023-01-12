//  Question 1
#include <iostream>
#include<map>
#include<tuple>
using namespace std;
int main()
{
    map<int,string> s;
    s.insert(pair<int,string>(1,"sunil"));
    s.insert(pair<int,string>(2,"Mohit"));
    s.insert(pair<int,string>(7,"Mandeep"));
    s.insert(pair<int,string>(9,"Amit"));
    s.insert(pair<int,string>(6,"Deepak"));

    map<int,string>::iterator i;
    for(i=s.begin(); i!=s.end();i++)
    {
        cout<<"Key is  "<<i->first<<" Value is "<<i->second<<"\n";
    }
}