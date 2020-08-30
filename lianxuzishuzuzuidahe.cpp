#include<iostream>
#include<algorithm>
using namespace std;
int qiuzuida(int ch[],int N);
int main()
{
    int N,c;
    int* ch;
    cin>>N;
    ch=new int [N];//创建动态数组
    for(int i=0;i<N;i++)
    {
        cin>>ch[i];
    }
    c=qiuzuida(ch,N);
    cout<<c<<endl;
    system("pause");
    delete[] ch;
}
int qiuzuida(int ch[],int N)
{
    int B,A;
    A=ch[0];
    for(int i=1;i<N;i++)//先求各个元素中的最大值
    {
        A=max(A,ch[i]);
    }
    B=A;
    for(int j=2;j<=N;j++)
    {
        for(int k=0;k<N-j+1;k++)
        {
            int flag=1;
            int sum=ch[k];
            while(flag<j)
            {
                sum+=ch[k+1];
                flag++;
            }
            B=max(B,sum);
        }
    }
    return B;
}