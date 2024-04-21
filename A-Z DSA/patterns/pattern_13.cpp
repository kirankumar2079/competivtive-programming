/* question
1 
2 3 
4 5 6 
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    int num = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num += 1;
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