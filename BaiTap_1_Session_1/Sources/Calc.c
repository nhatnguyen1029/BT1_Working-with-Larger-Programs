#include"F:\C_Nang_Cao\Working with Larger Programs\BaiTap_1_Session_1\Headers\Calc.h"
int SUM(int mang[]){
    int tong = 0;
    for (int i = 0; i < 20; i++)
    {
        tong+= mang[i];
    }
    return tong;
}
int timMAX(int mang[]){
    int max = mang[0];
    for(int i=0; i<20; i++){
        if(max < mang[i])
            max = mang[i];
    }
    return max;
}

int timMIN(int mang[]){
    int min = mang[0];
    for(int i=0; i<20; i++){
        if(min > mang[i])
            min = mang[i];
    }
    return min;
}
