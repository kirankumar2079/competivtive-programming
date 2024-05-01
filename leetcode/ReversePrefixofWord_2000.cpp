#include<bits/stdc++.h>
using namespace std;
#define ll long long

string reverse_prefix(string word , char ch)
{
    
    int pos = word.find(ch);
    if ( word.find(ch) != string::npos )
    {
        for(int i =0 ;i < pos ; i++)
        {
            if (i<pos)
            {
                char temp = word[pos];
                word[pos] = word[i] ;
                word[i] = temp ;
                pos -- ;
            }
        }
    }

    return word;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt" , "r" , stdin );
        freopen("output.txt" , "w" , stdout);
    #endif
    // input
    string word;
    cin>>word;
    char ch ;
    cin>>ch;
    cout << reverse_prefix( word , ch ) ;
    
}



