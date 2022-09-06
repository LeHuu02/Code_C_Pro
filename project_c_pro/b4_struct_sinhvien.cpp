#include<stdio.h>
#include<string.h>
struct Congnhan{
	int id;
	char name[40];
};
void nhap(Congnhan &cn){
	printf("nhap id cong nhan: ");
	scanf("%d", &cn.id);
	printf("nhap ten cong nhan: ");
	fflush(stdin);
	gets(cn.name);
}
void xuat(Congnhan cn){
	printf("id: %d", cn.id);
	printf("\nten: %s", cn.name);
}
int main(){
	int n;
	
	printf("Nhap so cong nhan: ");
	scanf("%d", &n);
	Congnhan cn[n]; // tao ra mang cn
	printf("Nhap thong tin cac cong nhan: \n");
	for(int i = 0 ; i < n ; i ++) {
		printf("\nNhap cong nhan thu %d \n", i);
		nhap(cn[i]);
	}
	printf("thong tin cac cong nhan la: \n");
	for(int i = 0 ; i < n ; i ++) {
		printf("\nThong tin cong nhan thu %d \n", i);
		xuat(cn[i]);
	}
return 0;
}
