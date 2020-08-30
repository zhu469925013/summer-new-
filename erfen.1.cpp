#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>a;
    int n,x,k=0,j;
    cout<<"输入数字个数：";
    cin>>n;
    cout<<endl;
    cout<<"选择输出第几小的数：";
    cin>>j;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            k=k+1;
            if(k==j)
            {
                cout<<"第j小的数书："<<a[i]<<endl;
                break;
            }
        }
        else continue;
    }
    system("pause");
}