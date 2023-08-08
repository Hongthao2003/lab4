#include<stdio.h>

int main(){
	int A[1000];
	int x,n;
	
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d", &n);
	printf("\n Nhap cac phan tu cua mang: ");
	for (int i=0; i<n; i++){
	scanf("%d", &A[i]);
}
	printf("\n Nhap x: ");
    scanf("%d", &x);
    
    int found = 0;
    int count_x = 0;
    
    for (int i = 0; i < n; ++i) {
        if (A[i] == x) {
            found = 1;
            ++count_x;
        }
    }
    
    if (found) {
        printf("%d co trong mang A\n", x);
        printf("So lan xuat hien trong mang A: %d\n", x, count_x);
    int Mangmoi = 0;
        for (int i = 0; i < n; ++i) {
            if (A[i] != x) {
                A[Mangmoi] = A[i];
                ++Mangmoi;
            }
        }
    n = Mangmoi;
	printf("Mang A sau khi xoa %d: ", x);
        for (int i = 0; i < n; ++i) {
            printf("%d ", A[i]);
        }
        printf("\n");
    } else {
        printf("%d khong co trong mang A.\n", x);
    }
    return 0;
}
 
