/* question
* 
* * 
* * * 
* * 
* 
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        print(n);
    }
    return 0;
}