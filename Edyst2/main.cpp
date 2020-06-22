#include<bits/stdc++.h>
using namespace std;

char Alpha(int n)
{
    switch(n)
    {
        case 1:
            return 'a';
        case 2:
            return 'b';
        case 3:
            return 'c';
        case 4:
            return 'd';
        case 5:
            return 'e';
        case 6:
            return 'f';
        case 7:
            return 'g';
        case 8:
            return 'h';
        case 9:
            return 'i';
        case 10:
            return 'j';
        case 11:
            return 'k';
        case 12:
            return 'l';
        case 13:
            return 'm';
        case 14:
            return 'n';
        case 15:
            return 'o';
        case 16:
            return 'p';
        case 17:
            return 'q';
        case 18:
            return 'r';
        case 19:
            return 's';
        case 20:
            return 't';
        case 21:
            return 'u';
        case 22:
            return 'v';
        case 23:
            return 'w';
        case 24:
            return 'x';
        case 25:
            return 'y';
        case 26:
            return 'z';
    }
}
int main()
{
    int T,n;
    cin>>T;
    for(int i = 1; i <= T; i++)
    {
        cin>>n;
        if(n > 1 && n % 2 != 0)
        {
            //Matrix
            int a[n][n];
            for(int j = 0; j < n; j++)
            {
                for(int k = 0; k < n; k++)
                {
                    cin>>a[j][k];
                }
            }
            int l = n-1, m = 0,x;
            while(l != 0 && m != n / 2)
            {
                x = a[l][m];
                if(x >= 27)
                    x = x % 26;
                char ch = Alpha(x);
                cout<<ch;
                l = l - 2;
                m++;
            }

            do
            {
                x = a[l][m];
                if(x >= 27)
                    x = x % 26;
                char ch = Alpha(x);
                cout<<ch;
                m++;
                l = l + 2;
            }while(l != n - 1 && m != n-1);

            cout<<endl;

        }

    }
}




