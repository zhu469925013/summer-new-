#include<iostream>
using namespace std;
int trap(int* height, int heightSize){
    int max=0,max_=0,water=0,water_level=0;

    for(int i=0;i<heightSize;i++)//�ҵ���ߵ�λ�ú�������������λ��
        if(height[i]>max){
            max_=i;
            max=height[i];
        }

    //���㽵ˮ��=��ǰ��ˮλ-��ǰ�ĸ߶�
    water_level=0;
    for(int i=0;i<max_;i++){//������߷���ߵĽ�ˮ��
        if(height[i]>water_level)
            water_level=height[i];
        water+=water_level-height[i];
    }

    water_level=0;
    for(int i=heightSize-1;i>max_;i--){//������߷��ұߵĽ�ˮ��
        if(height[i]>water_level)
            water_level=height[i];
        water+=water_level-height[i];
    }

    return water;
}
