#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string max="20140906";
    string min="18140906";
    string max_name,min_name;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        string name,date;
        cin >> name >> date;
        string year=date.substr(0,4);
        string month=date.substr(5,2);
        string day=date.substr(8,2);
        string birth=year+month+day;

        if ("18140906"<=birth && birth<="20140906" )
        {
            count++;
            if (birth<max)
            {
                max=birth;
                max_name=name;
            }
            if (birth>min)
            {
                min=birth;
                min_name=name;
            }
            
        }
        
    }
    if (count==0)
    {
        cout << 0;
        return 0;
    }
    
    cout << count << " " << max_name << " " << min_name;

    
}