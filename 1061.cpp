#include<bits/stdc++.h>
using namespace std;
typedef struct test
{
    int score;
    int ans;
    int count;
}test;
int main()
{
    int N,M;
    cin >> N >> M;
    test t[M];
    int score[N];
    for(int i=0;i<N-1;i++) score[i]=0;
    for(int i=0;i<M;i++)
    {
        cin >> t[i].score;
        t[i].count=0;
    }
    for(int i=0;i<M;i++)
    {
        cin >> t[i].ans;
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            int temp;
            cin >> temp;
            if(temp==t[j].ans)  score[i]+=t[j].score;
        }
    }
    for (int i = 0; i < N-1; i++)
    {
        cout << score[i] << endl;
    }
    cout << score[N-1];
}