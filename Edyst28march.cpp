#include<bits/stdc++.h>
using namespace std;

void setValue(int *Maze,int N)
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin>>*((Maze+i*N) + j); 
        }
    }
}
int pathCount(int *Maze,int N)
{
    int count = 0;
    int i = 0,j = 0;
    while((i != N-1) || (j != N-1))
    {
        //if(i == j && Maze[i+1][j+1] == 0)
        if(i == j && *((Maze+(i+1)*N) + (j+1)) == 0)
        {
            count++;
            i++;
            j++;
        }
        //else if(i+1 < N && Maze[i+1][j] == 0)
        else if(i+1 < N && *((Maze+(i + 1)*N) + j) == 0)
        {
            count++;
            i++;
        }
        //else if(j+1 < N && Maze[i][j+1] == 0)
        else if(i+1 < N && *((Maze+i*N) + (j+1)) == 0)
        {
            count++;
            j++;
        }
        else if(i+1 >= N && *((Maze+i*N) + (j+1)) == 0)
        {
            count++;
            j++;
        }
         else if(j +1 >= N && *((Maze+(i + 1)*N) + j) == 0)
        {
            count++;
             i++;
        }
    }
    return count;
}
int main(){
    int notc;
    //cout<<"Enter No of Test Cases:";
    cin>>notc;
    
    int result[notc];
    int M,N;
    for(int i = 0; i < notc; i++)
    {
        cin>>M>>N;
        if(M == N)
        {
           int Maze[N][N];
           setValue((int *)Maze,N);
           int x = pathCount((int *)Maze,N);
           result[i] = x;
        }
        else
        {
            //cout<<"There is no sqaure matrix:";
        }
    }
    for(int i = 0; i < notc; i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}




