#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{   
    int n;
    cin >> n;
    int max=0;
    int min=0;
    int score[n];
    char name[n][10];
    char id[n][10];
    for(int i = 0 ; i<n ; i++)
    {
        scanf("%s%s%d",name[i],id[i],&score[i]);
    }
    for(int i =0 ; i<n; i++)
    {
        if (score[i]>score[max])
        {
            max=i;
        }
        
    }
    for(int i =0 ; i<n; i++)
    {
        if (score[i]<score[min])
        {
            min=i;
        }
        
    }
    cout << name[max] <<" " << id[max] << endl;
    cout << name[min] <<" " << id[max];
    system("pause");
    // int n ;
    // cin >> n;
    // string str[n];
    // for (int i=0; i < n; i++)
    // {
    //     string temp1;
    //     getline(cin,temp1);
    //     str[i] = temp1;
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     cout << str[i] << i <<endl;
    // }
    
    // int int_score[n];
    // for(int i=0;i<n;i++)
    // {
    //     int pos_space = str[i].rfind(" ");
    //     string temp2=str[i].substr(pos_space+1);
    //     int_score[i]=atoi(temp2.c_str());
    // }
    // int max=0;
    // int min=101;
    // int maxpos=0;
    // int minpos=0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (int_score[i]>max)
    //     {
    //         max=int_score[i];
    //         maxpos=i;
    //     }
    //     if(int_score[i]<min)
    //     {
    //         min=int_score[i];
    //         minpos=i;
    //     }
    // }
    // int maxpos_space = str[maxpos].rfind(" ");
    // int minpos_space = str[maxpos].rfind(" ");
    // int lenmax = maxpos_space+1;
    // int lenmin = minpos_space+1;
    // string maxstudent = str[maxpos].substr(0,lenmax);
    // string minstudent = str[minpos].substr(0,lenmin);
    // cout << maxstudent << endl;
    // cout << minstudent ;

}