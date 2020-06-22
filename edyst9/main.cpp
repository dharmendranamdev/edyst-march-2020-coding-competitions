#include <iostream>

using namespace std;
#define N 25


int main()
{
    int T,D,n;
    cin>>T;
    for(int t = 0; t < T; t++)
    {
        cout<<"\nEnter dest:";
        cin>>D;
        cout<<"\nEnter n";
        cin>>n;
        int a[N][N];
        /*
        for(int i = 0; i < n; i++)
        {
            int a[i][3];
        }*/
        cout<<"\nassignnin a values\n";
        for(int i = 0 ;i < n; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout<<i<<", "<<j<<":";
                cin>>a[i][j];
            }
            cout<<endl;
        }
        int p[D+1][D+1];

        for(int i = 0 ; i < D+1; i++) //initialize with 0
        {
            for(int j = 0; j < D+1; j++)
            {
                p[i][j] = 0;
            }
        }
        for(int i= 0; i < n; i++)
        {
            p[a[i][0]][a[i][1]] = a[i][2];
        }
        for(int i = 0; i < D+1; i++)//1st row
        {
            p[0][i] = 0;
        }
        for(int i = 1; i <= D-1; i++) //if Difference is one then just walk or 1 minute
            p[i][i+1] = 1;

        //processing
        for(int diff = 2; diff <= D-1; diff++)
        {
            for(int i = D - diff; i >= 1; i--)
            {
                int j = i + diff;
                int min = p[i][j];
                if(min == 0)
                    min = INT_MAX;
                for(int k = i+1; k <= j - 1; k++)
                {
                    int d = p[i][k] + p[k][j];
                    if(d < min)
                        min = d;
                }
                p[i][j] = min;
            }
        }
        cout<<"\nminimum time:"<<p[1][D];


    }
    return 0;
}


/*




        cout<<"Array\n";
        for(int i = 0 ; i < n; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        //D= 10 , n = 5
        cout<<"\n----processing:\n";
        int count = 0;
        while(D != 1)
        {
            int flag = 0;
            int newSource  = 0;
            for(int i = 0; i < n; i++)
            {
                if(D == a[i][1])
                {
                  flag = 1;
                  D = a[i][0];
                  count = count + a[i][2];
                }
            }
            if(flag == 0)
            {
                D--;
                count++;
            }
            cout<<"\nDest:"<<D;
        }
        cout<<count;


*/
