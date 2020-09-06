#include<cstdio>
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize){
    int *result,top=0,buttom=matrixSize-1,left=0,right=(*matrixColSize)-1,number;
    number=matrixSize*(*matrixColSize);
    *returnSize=number;
    result=(int *)malloc(number*sizeof(int));
    int direction=0;//0代表向右，1代表向下，2代表向左，3代表向右

    int i=0,m=0,n=0;
    while(i<number){
        switch(direction){
            case(0):{
                result[i]=matrix[m][n];
                if(n==right){
                    top++;
                    m++;
                    direction=1;
                }
                else
                    n++;
                i++;
            }
            break;
            case(1):{
                result[i]=matrix[m][n];
                if(m==buttom){
                    right--;
                    n--;
                    direction=2;
                }
                else
                    m++;
                i++;
            }
            break;
            case(2):{
                result[i]=matrix[m][n];
                if(n==left){
                    buttom--;
                    m--;
                    direction=3;
                }
                else
                    n--;
                i++;
            }
            break;
            case(3):{
                result[i]=matrix[m][n];
                if(m==top){
                    left++;
                    n++;
                    direction=0;
                }
                else
                    m--;
                i++;     
            }
            default:
                break;
        }
    }

    return result;

}
