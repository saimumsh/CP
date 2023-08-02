#include<bits/stdc++.h>
using namespace std;
#define int long long

void f1(int i)
{
    int x , y;
    cin>>x >> y;
    int m = min(x,y);
    int k =0;
    while(m>0)
    {
        if(x%m==0 && y%m==0&&k==1)break;
        if(x%m==0 && y%m==0 && k<1)k++;
        m--;

    }
    if(x==y)cout<<"Case"<<" " << i<<":"<<" "<<1<<endl;
    else if(m>0)cout<<"Case"<<" " << i<<":"<<" " << m<<endl;
    else cout<<"Case"<<" " << i<<":"<<" " << -1<<endl;

}

int32_t main()
{
    int tc;
    cin>>tc;
    int i = 1;
    while(tc--)
    {
        f1(i);
        i++;
    }

    return 0;
}
