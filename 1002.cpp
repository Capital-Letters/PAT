#include<iostream>
#include<string>
#include<stack>
using namespace std;

struct translate
{
    int math;
    string pingyin;
};
translate t[10];
int main()
{
    stack <int> s;
    for (int i = 0; i < 10; i++)
    {
        t[i].math=i;
    }
    t[0].pingyin="ling";
    t[1].pingyin="yi";
    t[2].pingyin="er";
    t[3].pingyin="san";
    t[4].pingyin="si";
    t[5].pingyin="wu";
    t[6].pingyin="liu";
    t[7].pingyin="qi";
    t[8].pingyin="ba";
    t[9].pingyin="jiu";
    string n;
    cin >> n;
    int sum=0;
    for (int i = 0; i < n.size(); i++)
    {
        int temp=(int)n[i]-48;
        sum+=temp;
    }
    // cout << sum;
    // cout << n%10;
    // while (n>0)
    // {   
    //     cout << n%10;
    //     sum+=(n%10);
    //     n/=10;
    // }
    // cout << sum << endl;
    while (sum>0)
    {
        s.push(sum%10);
        sum/=10;
    }
    while (!s.empty())
    {   
        if(s.size()!=1)
        {
            cout << t[s.top()].pingyin << " ";
        }
        else
        {
            cout << t[s.top()].pingyin;
        }
        s.pop();
    }
    
}
