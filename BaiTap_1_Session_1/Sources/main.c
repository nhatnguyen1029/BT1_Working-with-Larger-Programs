#include "stdio.h"
#include <stdlib.h>
#include "math.h"
#include"F:\C_Nang_Cao\Working with Larger Programs\BaiTap_1_Session_1\Headers\Calc.h"
#include"F:\C_Nang_Cao\Working with Larger Programs\BaiTap_1_Session_1\Headers\Convernt.h"
#include"F:\C_Nang_Cao\Working with Larger Programs\BaiTap_1_Session_1\Headers\m_string.h"

int main(){
	int mang[20]={7,66,5,6,99,-9,5,4,3,3,43,2,7,8,6,4,5,6,5,8};
	printf("\nTong cua mang = %d", SUM(mang));
	printf("\nSo lon nhat trong mang la: %d",timMAX(mang));
    printf("\nSo nho nhat trong mang la: %d",timMIN(mang));
    printf("\n=================*********======================");
    
    int decimalnum;
    printf("\nNhap so thap phan: ");
    scanf("%d",&decimalnum);
    printf("\nSo nhi phan tuong ung = %d ",decimalToBinary(decimalnum));

    int n;
    tiep:printf("\nNhap so thap phan: ");
                    scanf("%d",&n);
     if (n<0) goto tiep;
    printf("\nSo hex tuong ung = ");
    hexa(n);
    printf("\n=================*********======================");
    int j;
	int arr[100];
	int k, x;
	
	nhap(arr, &j);
	k = nhapK(j);
	
	printf("Nhap x: ");
	scanf("%d", &x);
	
	chen(arr, j, k, x);
	hienThi(arr, j);

}