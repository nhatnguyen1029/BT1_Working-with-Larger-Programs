#include"F:\C_Nang_Cao\Working with Larger Programs\BaiTap_1_Session_1\Headers\Convernt.h"
#include "math.h"
#include <stdlib.h>
long decimalToBinary(int decimalnum)
{
    long binarynum = 0;
    int rem, temp = 1;
 
    while (decimalnum!=0)
    {
        rem = decimalnum%2;
        decimalnum = decimalnum / 2;
        binarynum = binarynum + rem*temp;
        temp = temp * 10;
    }
    return binarynum;
}
void hexa(int n)
    {int i=0,j=0;
    int m[20];
        while (n!=0)
            {
                    m[j]=n%16;n=n/16;j++;}
                    for(i=j;i>=0;i--)
                   {
                       if(m[i]<10) 
                        printf("%d",m[i]);
                    else
                        switch (m[i])
                           {
                                case 10: printf("A");break;
                                case 11: printf("B");break;
                                case 12: printf("C");break;
                                case 13: printf("D");break;
                                case 14: printf("E");break;
                                case 15: printf("F");break;
                           }
                   }
   }
