#include"F:\C_Nang_Cao\Working with Larger Programs\BaiTap_1_Session_1\Headers\m_string.h"
void nhap(int *arr, int *j) {
	*j = 0;
	while(*j <= 0) {
		printf("\nNhap n > 0: ");
		scanf("%d", j);
	}
	int i;
	for(i = 0; i < (*j - 1); i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

int nhapK(int j) {
	int k = -1;
	while(k < 0 || k >= j) {
		printf("Nhap k(0 <= k < n): ");
		scanf("%d", &k);
	}
	return k;
}

void chen(int *arr, int j, int k, int x) {
	int i;
	for(i = j-1; i > k; i--) {
		arr[i] = arr[i - 1];
	}
	arr[k] = x;
}

void hienThi(int *arr, int j) {
	int i;
	for(i = 0; i < j; i++) {
		printf("%-10d", arr[i]);
	}
}