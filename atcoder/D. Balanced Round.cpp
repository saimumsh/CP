#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n, k;
        cin>> n >> k;
        int ar[n];
        for (int i = 0; i<n ; i++)
        {
            cin>> ar[i];
        }
        int cnt = 0;
        sort(ar , ar+n);
        vector<int>v;
        for (int i = 1; i<n ; i++)
        {
            int ss = abs(ar[i]-ar[i-1]);
            if(ss>k){
                v.push_back(cnt);
                cnt=0;
            }
            else cnt++;
        }
        v.push_back(cnt);
        int mx = 0;
        for (int i = 0; i<v.size() ; i++)
        {
            mx=max(v[i],mx);
        }
        cout<<n- (mx+1) << endl;
    }

    return 0;
}
