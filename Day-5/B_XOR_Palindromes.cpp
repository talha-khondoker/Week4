#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;                     
    cin>>tc;
    while(tc--)
    {
    int n;                  
    cin>>n;
    string s;               
    cin>>s;
    string ans="";
    int match=0;
    int change=0;
    int l=0,r=n-1;
    while(l<r)
    {
        if(s[l]==s[r])
        {
        match+=2;
        }
        else{
        change++;
        }
        l++,r--;
    }
    for(int i=0;i<=n;i++)
    {
        int total=i;
        total-=change;
        if(total<0)
        {
        ans.push_back('0');
        continue;
        }
        total=max((total%2),total-match);
        total=max(0,total-(n%2));
        if(total==0)
        {
        ans.push_back('1');
        }
        else
        {
        ans.push_back('0');
        }
    }
    cout<<ans<<endl;
}
return 0;
}