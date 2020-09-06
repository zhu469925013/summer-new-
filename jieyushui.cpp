#include<iostream>
using namespace std;
int trap(int* height, int heightSize){
    int max=0,max_=0,water=0,water_level=0;

    for(int i=0;i<heightSize;i++)//找到最高的位置和它所处的数组位置
        if(height[i]>max){
            max_=i;
            max=height[i];
        }

    //计算降水量=当前的水位-当前的高度
    water_level=0;
    for(int i=0;i<max_;i++){//计算最高峰左边的降水量
        if(height[i]>water_level)
            water_level=height[i];
        water+=water_level-height[i];
    }

    water_level=0;
    for(int i=heightSize-1;i>max_;i--){//计算最高峰右边的降水量
        if(height[i]>water_level)
            water_level=height[i];
        water+=water_level-height[i];
    }

    return water;
}
