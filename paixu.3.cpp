#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int sum=0;
    int ch[10]={0};
    int i,j=0;  
    int num;
    while(k!=0)
    {
        ch[j++]=k%2;
        k=k/2;
    }
    for(i=0;i<10;i++)
    {
        if(ch[i]==1)
        {
            num=pow(n,i);
            sum+=num;
        }
    }
    cout<<"��k��Ԫ���ǣ�"<<sum<<endl;
    system("pause");
}