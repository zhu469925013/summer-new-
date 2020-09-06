#include<iostream>
using namespace std;
int compare(int *a,int *b){
    return a[0]-b[0];
}
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes)
{
    int i=0,a=i+1,b=numsSize-1;
    (*returnSize)=0;

    int **result=(int **)malloc((numsSize)*(numsSize)*sizeof(int *));//����ά�������ռ�
    *returnColumnSizes=(int *)malloc((numsSize)*(numsSize)*sizeof(int));
    
    qsort(nums,numsSize,sizeof(nums[0]),compare);//�������С��������

    if(numsSize<3)//�ж������Ԫ�ظ���������С��3������ֱ���˳�
        return NULL;

    while((nums[i])<=0&&(i<numsSize-2)){//��ѭ��������0��ʱ��ֹͣ����ʱ����֮��һ������0
        a=i+1,b=numsSize-1;

        while(a<b){//�ȹ̶���һ���������������������߼еķ�����ȷ��
            if(nums[i]+nums[a]+nums[b]==0){
            result[*returnSize]=(int *)malloc(3*sizeof(int));
            result[*returnSize][0]=nums[i];
            result[*returnSize][1]=nums[a];
            result[*returnSize][2]=nums[b];
            (*returnColumnSizes)[*returnSize]=3;
            (*returnSize)++;
            while((nums[a]==nums[++a])&&(a<b));//��ǰ����ȥ���ظ�����
            while((nums[b]==nums[--b])&&(a<b));//�Ӻ���ǰȥ���ظ�����
            }
            else if(nums[i]+nums[a]+nums[b]>0)
                b--;
            else
                a++;
        }
        while((nums[i]==nums[++i])&&(i<numsSize-2));
    }
    return result;
    system("pause");
}