#include<bits/stdc++.h>
using namespace std;



int main()
{
    // input
    long long n;
    cin>>n;
    // iterate till the given number does not become 1
    while(n!=1)
    {
        // print the changed value in every iteration
        cout << n << " ";
        // perform the operation specified
        if (n % 2 == 0)
        {
            n = n /2 ;
        }
        else
        {
            n = n*3+1;
        }
    }
    // print the last value 1
    cout<<"1 ";
}