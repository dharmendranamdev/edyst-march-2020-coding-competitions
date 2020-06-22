#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,n,f,k;
    cout<<"Enter No of cases:";
    cin>>T;
    for(int t = 1; t <= T; t++)
    {
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        cin>>f;
        cin>>k;

        for(int i = 0; i < n; i++)
        {
            if(f == 0 || f < 0)
            {
                break;
            }
            if(a[i] <= k)
            {
                f = f - a[i];
                if(f < 0)
                   f = f+a[i];
            }
        }
        if(f == 0)
            cout<<"Yes";
        else
            cout<<"No";

        cout<<endl;
    }
    return 0;
}
