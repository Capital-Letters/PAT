#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string A;
    int B;
    cin>>A >>B;
    int R=0;
    for (int i = 0; i < A.size(); i++)
    {
        int wei=A[i]-'0';
        int temp=R*10+wei;
        if (temp<B)
        {
            R=temp;
            if (i!=0)
            {
                cout << 0;
            }
        }
        else
        {
            cout<<(temp/B);
            R=temp%B;
        }    
    }
    cout<<' ' <<R;
}