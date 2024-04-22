/* question
A 
B B 
C C C 
D D D D 
E E E E E 
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
 
    for(int i=1;i<=n;i++)
    {
        char ele = 'A' + i - 1 ;
        for( int j=1;j<=i;j++)
        {
            cout<<ele<<" ";
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