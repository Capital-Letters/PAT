#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[1001];
    for (int i = 0; i <= 1000; i++)
    {
        A[i]=0;
    }
    
    int max=0;
    int max_id;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int score;
        cin >> score;
        int pos=s.find('-');
        string team = s.substr(0,pos);
        A[stoi(team,0,10)]+=score;
    }
    for (int i = 0; i <= 1000; i++)
    {
        if(A[i]>max)
        {
            max=A[i];
            max_id=i;
        }
    }
    
    cout << max_id << " " << max;
}