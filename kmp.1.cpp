#include<iostream>
#include<cstring>
using namespace std;
void get_next(int* next,string T,int mlen)
{
	next[0] = -1;//-1代表没有重复子串
	int k = -1;
	for (int q = 1; q <= mlen; q++)
	{
		while (k > -1 && T[k+1] != T[q])//下一个元素不相等，把k向前回溯
		{
			k = next[k];
		}
		if (T[k+1] == T[q])//下一个元素相等，所以最长重复子串+1
		{
			k = k+1;
		}
		next[q] = k;//给next数组赋值
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
        while (k > -1 && m[k+1]!=z[i])//两串下一个字符不相等，向前回溯（效率高就是在这里，每次匹配失败，k不用直接变为0，从第一个字符开始重新匹配，而是变为最长重复子串的下一个字符，从中间开始匹配即可）。
		{
			k = next[k];
		}
		if(m[k+1] == z[i])//两个串的字符相等，k+1来匹配子串的一个字符
		{
			k++;
		}
		if (k == mlen-1)//匹配成功，返回短串在长串的位置。
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
    cout<<"首字母下标是："<<sum<<endl;
    system("pause");
}
