#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    int x;
    int len=0;
    cin>>x;
    while(x!=999)
    {
        ++len;
        a.push_back(x);
        cin>>x;
    };
    int num=0;
    for(int i=0;i<len-1;i++)
    {
        if(a[i]>a[i+1])
        {
            a[i]=a[i+1];
            ++num;
        }
        if(num>1)break;
    }
    if(num>1)
    {
        cout<<"0"<<endl;
    }else{
        cout<<"1"<<endl;
    }
    system("pause");
}