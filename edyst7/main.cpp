#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,n,TotalPower;
    cin>>T;
    for(int test = 1; test <= T; ++test)
    {
        TotalPower = 0;
        cout<<"\n\nEnter n:";
        cin>>n;
        int a[n];//array declaration
        for(int i = 0; i< n; i++)
            cin>>a[i];
        //proceed
        for(int i = 0; i < n; i++)
            TotalPower  = TotalPower | a[i];
        cout<<"\nTotalPower : "<<TotalPower;

        cout<<"\nSorting a array in asscending order\n";
        sort(a, a+n, greater<int>()); //sort in deaccending order
        for(int i = 0; i < n; i++)
        {
            cout<<a[i]<<"   ";
        }
        cout<<endl;


        //minimum battery required
        //minimum battery required
        int minPower = 0,prevPower = 0;
        int count = 0;
        cout<<"\nOutside Loop\n";
        cout<<"minpower :"<<minPower<<"  Count :"<<count<<endl;
        cout<<"\ninside loop\n";
        for(int i = 0; i < n; i++)
        {
            cout<<"minpower :"<<minPower<<"  Count :"<<count<<" i:"<<i<<endl;
            minPower = minPower | a[i];
            count++;
            if(prevPower == minPower)
            {
                count--;
            }
            if(minPower == TotalPower)
                break;
            prevPower = minPower;
        }
        cout<<count<<endl;
    }
    return 0;
}




