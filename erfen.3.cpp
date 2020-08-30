#include<iostream>
using namespace std;
struct xinxi{
    char xuhao;
    char xingming;
    char xingbie;
    int num;
};
int main()
{
    int N;
    cin>>N;
    struct xinxi a[N];
    for(int i=0;i<N;i++)
    {
        cin>>a[i].xuhao;
        cin>>a[i].xingming;
        cin>>a[i].xingbie;
        cin>>a[i].num;
    }
    int M;
    cin>>M;
    char b[M];
    for(int j=0;j<M;j++)
    {
        cin>>b[j];
    }
    for(int k=0;k<M;k++)
    {
        for(int n=0;n<M;n++)
        {
            if(a[n].xuhao==b[k])
            {
                cout<<a[n].xuhao<<a[n].xingming<<a[n].xingbie<<a[n].num<<endl;
            }
            else if(n<M)
            {
                continue;
            }
            else cout<<"No Answer!"<<endl;
        }
    }
    system("pause");
}