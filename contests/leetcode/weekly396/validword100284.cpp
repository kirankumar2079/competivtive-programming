#include<bits/stdc++.h>
using namespace std;

bool isValid(string word)
{
    if(word.size() < 3 or word.size()>20)
    {
        return false;
    }
    int vowel = 0 ;
    int consonant = 0 ;
    for(int i=0 ;i<word.size() ;i++)
    {
        if( word[i] >= '0' and word[i] <= '9' )
        {
            continue;
        }
        else if(word[i]>='a' and word[i]<='z')
        {
            if(word[i] == 'a' or word[i] == 'e' or word[i] == 'i' or word[i] == 'o' or word[i] == 'u' )
            {
                vowel++;
            }
            else{
                consonant++;
            }
        }
        else if(word[i]>='A' and word[i]<='Z')
        {
            if(word[i] == 'A' or word[i] == 'E' or word[i] == 'I' or word[i] == 'O' or word[i] == 'U' )
            {
                vowel++;
            }
            else{
                consonant++;
            }
        }
        else{
            return false;
        }
    }
    if(vowel >= 1 && consonant>=1)
    {
        return true;
    }
    else{
        return false;
    }
    return false;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt" , "r" , stdin );
        freopen("output.txt" , "w" , stdout);
    #endif
    // input
    string str;
    cin>>str ;

    cout<<isValid(str);
}


