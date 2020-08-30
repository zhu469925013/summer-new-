#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> a;
    int x=1,n,num;
    cin>>n;
    while(x<=n)
    {
        cin>>num;
        a.push_back(num);
        x++;
    };
    sort(a.begin(),a.end());
    cout<<"最大数："<<a[n-1]<<endl;
    cout<<"删除后:"<<endl;
    for(int i=0;i<n-1;i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    system("pause");
}
