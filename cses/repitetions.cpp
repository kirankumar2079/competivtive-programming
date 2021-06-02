/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.

Constraints
1≤n≤106
Example

Input:
ATTCGGGA

Output:
3
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    string s;
    cin>>s;
    ll n=s.size();
    ll mael=0;
    ll ans=1;
    char p='A';
    for(ll i=0;i<n;i++)
    {
        if(s[i]==p)
        {
            mael++;
            ans=max(mael,ans);
        }
        else
        {
            p=s[i];
            mael=1;
        }
    }
   
 
    cout<<ans;
    return 0;
}