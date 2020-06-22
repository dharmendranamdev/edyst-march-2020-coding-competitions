#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;//testcasees
    string str ="mymedicinesarerightheresonuyuououo";

    cin>>T;

    for(int t = 1; t <= T; t++)
    {
        //cin>>str;
        int len = 1;//gap
    int prev  = 0;
    int i = 0;
            while(prev < str.length())
            {
                prev = prev + i;
                if(prev + len <= str.length())
                {
                    //cout<<"substring(" <<prev<<" , "<<len<<") : "<<str.substr(prev, len)<<endl;
                    if(i == 0)
                        cout<<str.at(0);
                    else{
                        cout<<str.at(prev);
                        cout<<str.at(prev+len-1);
                    }
                    //cout<<endl;
                }
                else
                {
                    //cout<<endl;
                    //int mod = str.length() % len;
                    //cout<<"substring(" <<prev<<" , "<<mod<<") : "<<str.substr(prev, mod)<<endl;
                    //cout<<str.substr(prev,mod);
                    if(str.length() - prev == len - 1)
                    {
                        cout<<str.at(prev);
                        cout<<str.at(prev+len-2);
                    }
                    break;
                }
                len++;
                i++;

            }
        cout<<endl;
    }
    return 0;
}
