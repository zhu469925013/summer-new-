#include<iostream>
using namespace std;
int main()
{
    string ch,op;
    int number=0;
    int flag=1,j;
    int A,B,C,a,b,c;
    cout<<"请输入数字：";
    cin>>ch;
    int num=ch.size();
    for(int i=0;i<num;i++)
    {
        number*=10;
        number+=ch[i]-'0';
    }
    cout<<"转化为数字是："<<number<<endl;
    A=a=number;
    while(flag==1)
    {
        ++A;
        B=A;
        j=0;
        while(B!=0)
        {
            C=B%10;
            B=B/10;
            op[j]=C;
            j++;
        }
        if(j%2!=0)
        {
            for(int k=0;k<j/2-1;k++)
        {
            if(op[k]==op[j-k-1])
                {
                    continue;
                    if(k==((j-1)/2-1))
                    {
                        flag=0;
                    }
                }
            else
                break;
        }
        }
        else
        {
            for(int k=0;k<j/2;k++)
        {
            if(op[k]==op[j-k-1])
                {
                    continue;
                    if(k==(j/2-1))
                    {
                        flag=0;
                    }
                }
            else
                break;
        }
        }        
    }
    while(flag==0)
    {
        --a;
        b=a;
        j=0;
        while(b!=0)
        {
            c=b%10;
            b=b/10;
            op[j]=c;
            j++;
        }
        if(j%2!=0)
        {
            for(int k=0;k<j/2-1;k++)
        {
            if(op[k]==op[j-k-1])
                {
                    continue;
                    if(k==((j-1)/2-1))
                    {
                        flag=1;
                    }
                }
            else
                break;
        }
        }
        else
        {
            for(int k=0;k<j/2;k++)
        {
            if(op[k]==op[j-k-1])
                {
                    continue;
                    if(k==(j/2-1))
                    {
                        flag=1;
                    }
                }
            else
                break;
        }
        }       
    }
    if((A-number)>=(number-a))
        number=a;
    else if((A-number)<(number-a))
        number=A;
    cout<<"最近的对称数字是："<<number<<endl;
    system("pause");
}