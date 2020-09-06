#include<iostream>
using namespace std;
int compare(int *a,int *b){
    return a[0]-b[0];
}
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes)
{
    int i=0,a=i+1,b=numsSize-1;
    (*returnSize)=0;

    int **result=(int **)malloc((numsSize)*(numsSize)*sizeof(int *));//给二维数组分配空间
    *returnColumnSizes=(int *)malloc((numsSize)*(numsSize)*sizeof(int));
    
    qsort(nums,numsSize,sizeof(nums[0]),compare);//将数组从小到大排序

    if(numsSize<3)//判断数组的元素个数，若是小于3个，则直接退出
        return NULL;

    while((nums[i])<=0&&(i<numsSize-2)){//当循环到大于0的时候停止，此时三数之和一定大于0
        a=i+1,b=numsSize-1;

        while(a<b){//先固定第一个数，另外两个数用两边夹的方法来确定
            if(nums[i]+nums[a]+nums[b]==0){
            result[*returnSize]=(int *)malloc(3*sizeof(int));
            result[*returnSize][0]=nums[i];
            result[*returnSize][1]=nums[a];
            result[*returnSize][2]=nums[b];
            (*returnColumnSizes)[*returnSize]=3;
            (*returnSize)++;
            while((nums[a]==nums[++a])&&(a<b));//从前往后去掉重复的数
            while((nums[b]==nums[--b])&&(a<b));//从后往前去掉重复的数
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