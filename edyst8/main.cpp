#include <bits/stdc++.h>

using namespace std;

int getMinimum(int a[] ,int n)
{
    int min = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] == INT_MAX)
            break;
        if(a[i] < min)
            min = a[i];
    }
    return min;

}
int main()
{
    int T,n;
    cin>>T;
    for(int t = 1 ; t <= T; t++)
    {
        cin>>n;
        int a[n];
        for(int i = 0; i<n ;i++)
        {  cin>>a[i];}
        int p[n][n];
        //start processing
        for(int i = 0; i < n;i++)
        {
            for(int j = 0; j < n; j++)
            {
                p[i][j] = 0;
            }
        }
        for(int i = 0; i <= n-2; i++)
        {
            p[i][i+1] = 1;
        }
        for(int diff = 2; diff < n; diff++)
        {
            for(int i = n - diff - 1 ; i >= 0; i--)
            {
                int j = i + diff;
                if(a[i] + i >= j)
                    p[i][j]++;
                else
                {

                       int m = 0;
                       int myarray[a[i]];
                       for(int w = 0; w < a[i]; w++)
                           myarray[w] = INT_MAX;

                       for(int k = i + 1; k <= a[i] + i; k++)
                       {
                           if(k < n)
                           {
                               myarray[m] = p[i][k] + p[k][j];
                               m++;
                           }
                       }
                       p[i][j] = getMinimum(myarray,a[i]);
                }
            }
        }
        cout<<p[0][n-1];

        cout<<"\n";

        for(int i = 0; i < n;i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout<<p[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}










