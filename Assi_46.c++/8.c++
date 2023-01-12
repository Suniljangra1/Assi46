// question 8
#include<iostream>
#include<map>
using namespace std;
string string_to_int(string r,int s)
{
    string st;
    map<char,int> h;
    for(int i=0; i<s; i++)
    h[r[i]]++;
    while(h['z']&&h['e']&&h['r']&&h['o'])
    {
        h['z']--;
        h['e']--;
        h['r']--;
        h['o']--;
        st += '0';
    }
    while(h['o']&&h['n']&&h['e'])
    {
        h['o']--;
        h['n']--;
        h['e']--;
        st += '1';
    }
     while(h['t']&&h['w']&&h['o'])
    {
        h['o']--;
        h['n']--;
        h['e']--;
        st += '2';
    }
    return st;
}
int main()
{
    string s{"ozerotwneozero"};
    int size = s.size();
    cout<<string_to_int(s,size);
}