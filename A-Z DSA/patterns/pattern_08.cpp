/* question
*********
 ******* 
  *****  
   ***   
    * 
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<2*(n)-1-2*(i);k++)
        {
            cout<<"*";
        }
        for(int l=0;l<i;l++)
        {
            cout<<" ";
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