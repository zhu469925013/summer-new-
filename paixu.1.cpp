#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int ch[10];
    srand(time(NULL));
    cout<<"�����Ϊ��"<<endl;
    for(int i=0;i<10;i++)
    {
        ch[i]=rand()%11;
        cout<<ch[i]<<endl;
    }
    cout<<"�����:"<<endl;
    for(int j=0;j<10;j++)
    {
        int min=ch[j];
        int temp;
        for(int k=j+1;k<10;k++)
        {
            if(ch[k]<min)
            {
                temp=min;
                min=ch[k];
                ch[k]=temp;
            }
        }
        cout<<min<<endl;
    }
    system("pause");
}