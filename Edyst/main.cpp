#include<bits/stdc++.h>
using namespace std;

void setValue(int *Maze,int N)
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout<<"Enter ("<<i<<","<<j<<") : ";
            cin>>*((Maze+i*N) + j);
        }
    }
}

int pathCount(int *Maze,int N,int i,int j,int count)
{
    cout<<"i :"<<i<<"   j:"<<j<<endl;

    int a,b,c;
    if(i == N-1 && j == N-1)
        return count;
    count++;

        if(i+1 < N && j+1 < N && i == j && *((Maze+(i+1)*N) + (j+1)) == 0)
            a = pathCount((int *)Maze,N,i+1,j+1,count);
        else
            a = INT_MAX;

        if(j+1 < N && *((Maze+i*N) + (j+1)) == 0)//
            b = pathCount((int *)Maze,N,i,j+1,count);//Right
        else
            b = INT_MAX;

        if(i+1 < N && *((Maze+(i + 1)*N) + j) == 0)//Down(Below)
            c = pathCount((int*)Maze,N,i+1,j,count);
        else
            c = INT_MAX;

        int x = min(a,b);
    return min(x,c);
}
int main(){
    int notc;
    cout<<"Enter No of Test Cases:";
    cin>>notc;

    int result[notc];
    int M,N;
    for(int i = 0; i < notc; i++)
    {
        //cout<<"Enter M and N";
        //cin>>M>>N;
        int N=5;
        if(N == 5)
        {
           int Maze[5][5]= {{0,1,0,0,1},{1,0,0,0,0},{0,0,1,1,0},{1,0,0,0,0},{1,1,1,0,0}};
           //setValue((int *)Maze,N);
           int x = pathCount((int *)Maze,N,0,0,0);
           result[i] = x;
        }
        else
        {
            cout<<"There is no sqaure matrix:";
        }
    }
    cout<<"result:\n";
    for(int i = 0; i < notc; i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}




