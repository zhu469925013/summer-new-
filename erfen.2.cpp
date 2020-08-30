#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m,x;
    cin>>n>>m;
    vector<int>a,b;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    int j=1,k;
    while(j<=m)
    {
        cin>>x;
        for(k=0;k<=n;k++)
        {
            if(a[k]==x&&k<n)
            {
                cout<<"yes"<<endl;
                break;
            }
            else if(k<n) continue;
            else
            {
                cout<<"no"<<endl;
            }
        }
        j++;
    }
    system("pause");
    return 0;
}