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
    cout<<"�������"<<a[n-1]<<endl;
    cout<<"ɾ����:"<<endl;
    for(int i=0;i<n-1;i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    system("pause");
}
