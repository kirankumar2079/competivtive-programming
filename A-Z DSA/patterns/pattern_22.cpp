/* question
33333
32223
32123
32223
33333
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
   
     for(int i=0;i<2*n-1;i++)
    {
        for(int j=0 ; j<2*n-1 ;j++)
        {
            cout<< n - min( min(i,j) ,min((2*n-2)-j , (2*n-2)-i)) ;
            
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