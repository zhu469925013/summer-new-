#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,k;
    cin>>n >>k;
    vector<int>a;
    for(int i=0;i<n*n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    cout<<"��kС�����ǣ�"<<a[k-1]<<endl;
    system("pause");
}