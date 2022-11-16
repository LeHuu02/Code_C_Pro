/*
power by le minh huu 16/11/2022 @LeHuu02 @copyright 
CON TRO POINTER VOI MANG HAI CHIEU  
    nhap xuat mang 2 chieu
    in so chinh phuong: so co gia tri la binh phuong cua 1 so
    tinh tong cac so 2 so co dv = 7
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void test(int *a){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", a+i*3+j);

        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t", *(a+i*3+j));            
        }
        printf("\n");
    }
}
void socp(int*a){
    int i, j, dem = 0;
    float temp ;
    printf("\nso chinh phuong trong mang: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){            
            temp = (float)sqrt(*(a+i*3+j)) - (int)sqrt(*(a+i*3+j));
            if(temp == 0){
                printf("%d\t", *(a+i*3+j));
                dem++;
            }
        }
    }
    if(dem == 0){
        printf("\nkhong co so chinh phuong trong mang: ");
    }
}
void tong(int *a){
    int i, j, tong = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(*(a+i*3+j) < 99 && *(a+i*3+j) > 10){
                if(*(a+i*3+j) % 10 == 7){
                    tong += *(a+i*3+j);
                }
            }            
        }
    }
    printf("\ntong phan tu mang hai chu so co hang don vi bang 7 la: %d ", tong);
}

int main(){
    int *a;
    a = (int*)malloc(3*3*sizeof(int));
    test(a);
    socp(a);
    tong(a);
}