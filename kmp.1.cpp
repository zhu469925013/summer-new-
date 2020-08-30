#include<iostream>
#include<cstring>
using namespace std;
void get_next(int* next,string T,int mlen)
{
	next[0] = -1;//-1����û���ظ��Ӵ�
	int k = -1;
	for (int q = 1; q <= mlen; q++)
	{
		while (k > -1 && T[k+1] != T[q])//��һ��Ԫ�ز���ȣ���k��ǰ����
		{
			k = next[k];
		}
		if (T[k+1] == T[q])//��һ��Ԫ����ȣ�������ظ��Ӵ�+1
		{
			k = k+1;
		}
		next[q] = k;//��next���鸳ֵ
	}
}
int KMP(string z,int zlen,string m,int mlen)
{
    int* next=new int(mlen);
    get_next(next,m,mlen);
    int k=-1;
    int i=0;
    for(;i<zlen;i++)
    {
        while (k > -1 && m[k+1]!=z[i])//������һ���ַ�����ȣ���ǰ���ݣ�Ч�ʸ߾��������ÿ��ƥ��ʧ�ܣ�k����ֱ�ӱ�Ϊ0���ӵ�һ���ַ���ʼ����ƥ�䣬���Ǳ�Ϊ��ظ��Ӵ�����һ���ַ������м俪ʼƥ�伴�ɣ���
		{
			k = next[k];
		}
		if(m[k+1] == z[i])//���������ַ���ȣ�k+1��ƥ���Ӵ���һ���ַ�
		{
			k++;
		}
		if (k == mlen-1)//ƥ��ɹ������ض̴��ڳ�����λ�á�
		{
			return i-mlen+1;
		}
    }
}
int main()
{
    string z;
    cin>>z;
    string m;
    cin>>m;
    int zlen,mlen;
    zlen=z.length();
    mlen=m.size();
    int sum;
    sum=KMP(z,zlen,m,mlen);
    cout<<"����ĸ�±��ǣ�"<<sum<<endl;
    system("pause");
}
