/*
����һ���ַ��� s ��һ�� ������ͬ ���������� indices ��

�������������ַ��� s �����е� i ���ַ���Ҫ�ƶ��� indices[i] ָʾ��λ�á�

�����������к���ַ�����

 

ʾ�� 1��



���룺s = "codeleet", indices = [4,5,6,7,0,2,1,3]
�����"leetcode"
���ͣ���ͼ��ʾ��"codeleet" �������к��Ϊ "leetcode" ��*/char * restoreString(char * s, int* indices, int indicesSize)
{
    int i;
    char *sort=(char*)malloc(sizeof(char)*(indicesSize+1));
    for(i=0;i<indicesSize;i++)
    {
        sort[indices[i]]=s[i];
    }
    sort[i]='\0';
    return sort; 
}