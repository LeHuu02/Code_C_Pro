/*
power by le minh huu @LeHuu02 @copyright - 15/10/2022
ktra mang hai chieu dung CON TRO - POINTER
yeu cau:   
    nhap ptu mang, nhap xuat mang
    tim so chinh phuong
    tinh tong so 2 so va co hang dv = 7
*/

#include <stdio.h>
#include <math.h>

void nhapxuat(int *ptr[10][10], int n, int m);
void insocp(int *ptr[10][10], int n, int m);
void tinhtong(int *ptr[10][10], int n, int m);

int main(){
    int n, m;
    int arr[m][n];
    printf("nhap m x n phan tu mang: ");
    scanf("%d", &m);
    scanf("%d", &n);
   
    // NHAP XUAT TRONG HAM MAIN
    // int **ptr = *arr;
    // int i, j;
    // //nhap mang
    // printf("\nnhap phan tu mang: \n");
    // for(i = 0; i < m; i++){
    //     for(j = 0; j < n; j++){
    //         printf("arr[%d][%d]: ", i, j);
    //         scanf("%d", (*(arr + i)+j));
    //         // scanf("%d", *(ptr+i*m)+j);
    //         // printf("\ntest: %d", *(*(ptr+i*m)+j));
    //     }
    // }
    // //xuat mang
    // printf("\nphan tu mang vua nhap la: \n");
    // for(i = 0; i < m; i++){
    //     for(j = 0; j < n; j++){
    //         // printf("%d\t", arr[i][j]);    
    //         printf("%d\t", *(*(arr+i)+j));                        
    //     }
    //     printf("\n");
    // }
     int i, j, dem = 0;
    int temp ;
    printf("\nso chinh phuong trong mang: ");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            // temp = (int)(**(*(ptr+i)+j));
            printf("\ntemp: %d ", *(*(arr+i)+j));
            printf("\nadd: %d\t value: %d - \t%d", &*(*(arr+i)+j), *(*(arr+i)+j), (*(arr+i)+j));
            temp = sqrt((arr[i][j])) - sqrt((arr[i][j]));
            if(temp == arr[i][j]){
            //     printf("%d\t", *(*(ptr+i)+j));
            }
        }
    }
    if(dem == 0){
        printf("\nkhong co so chinh phuong trong mang: ");
    }

    // nhapxuat(arr, n, m);
    // insocp(arr, n, m);
    // tinhtong(arr, n, m);
    return 0;
}

//ham nhap xuat mang hai chieu
void nhapxuat(int *ptr[10][10], int n, int m){
    int i, j;
    //nhap mang
    printf("\nnhap phan tu mang: \n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", *(ptr+i)+j);
        }
    }
    //xuat mang
    printf("\nphan tu mang vua nhap la: \n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            // printf("%d\t", arr[i][j]);    
            printf("%d\t", *(*(ptr+i)+j));                        
        }
        printf("\n");
    }
}

//ham in so chinh phuong
void insocp(int *ptr[10][10], int n, int m){
    int i, j, dem = 0;
    int temp ;
    printf("\nso chinh phuong trong mang: ");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            // temp = (int)(**(*(ptr+i)+j));
            printf("\ntemp: %d ", *(*(ptr+i)+j));
            printf("\nadd: %d\t value: %d - \t%d", &*(*(ptr+i)+j), *(*(ptr+i)+j), (*(ptr+i)+j));
            temp = sqrt(*(*(ptr+i)+j)) - sqrt(*(*(ptr+i)+j));
            if(temp == **(*(ptr+i)+j)){
            //     printf("%d\t", *(*(ptr+i)+j));
            }
        }
    }
    if(dem == 0){
        printf("\nkhong co so chinh phuong trong mang: ");
    }
}

//ham tinh tong 
void tinhtong(int *ptr[10][10], int n, int m){
    int i, j, tong = 0;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(**(*(ptr+i)+j) < 99 && **(*(ptr+i)+j) > 10){
                if(**(*(ptr+i)+j) % 10 == 7){
                    tong += **(*(ptr+i)+j);
                }
            }            
        }
    }
    printf("\ntong phan tu mang hai chu so co hang don vi bang 7 la: %d ", tong);
}
