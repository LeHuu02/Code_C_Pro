/*
POWER BY LE MINH HUU 6/10/2022
Cho thông tin về một chiếc Ô Tô bao gồm: Tên ô tô, hãng sản xuất,
 phiên bản, nơi sản xuất, giá bán. Hãy thực hiện các công việc sau sử dụng danh sách liên kết:
a, Nhập vào một danh sách Ô Tô sử dụng danh sách liên kết.
b, In danh sách Ô Tô vừa nhập lên màn hình.
c, Tìm danh sách Ô Tô nhập khẩu từ Hungary.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 50

struct oto{
    char ten[N];
    char hang[N];
    char phienban[N];
    char sanxuat[N];
    int giaban;
};
struct node{
    oto data;
    node *pnext;
};
struct list{
    node *phead;
    node *ptail;
};
void khoitao(list &l){
    l.phead = NULL;
    l.ptail = NULL;
}
node *makenode(oto data){
    node *p = (node*)malloc(sizeof(node));
    p->data = data;
    p->pnext = NULL;
    return p;
}
void themdau(list &l, node *p){
    if(l.ptail == NULL)
        l.phead = l.ptail = p;
    else{
        p->pnext = l.phead;
        l.phead = p;
    }
}
void themcuoi(list &l, node *p){
    if(l.phead == NULL)
        l.phead = l.ptail = p;
    else{
        l.ptail->pnext = p;
        l.ptail = p;

    }
}
void input(list &l){
    oto xe;
    int i = 0;
    // node *p = makenode(xe);
    printf("nhap thong tin xe: ");
    do{
        i++;
        printf("nhap xe thu: %d\n ", i);
        fflush(stdin);
        printf("nhap ten xe: ");
        gets(xe.ten);
        if(strcmp(xe.ten,"ok") == 0){
            break;
        }
        printf("nhap hang xe: ");
        gets(xe.hang);
        printf("nhap phien ban: ");
        gets(xe.phienban);
        printf("nhap noi san xuat: ");
        gets(xe.sanxuat);
        fflush(stdin);
        printf("nhap gia ban: ");
        scanf("%d", &xe.giaban);
        if(strcmp(xe.ten,"ok") != 0){
            node *p = makenode(xe);
            themcuoi(l,p);
        } 
    }while(strcmp(xe.ten,"ok") != 0);
}
void output1(list l, node *k, int i){    
    printf("nhap xe thu: %d\n ", i);
    printf("ten xe: %s\t\thang xe:%s\t\tphien ban: %s\n ", k->data.ten, k->data.phienban, k->data.hang);
    printf("noi san xuat: %s\t\tgia ban: %d\n", k->data.sanxuat, k->data.giaban);
}
void output(list l){
    int i = 0;
    printf("in phan tu vua nhap: \n");
    for(node *k = l.phead; k != NULL; k = k->pnext ){
        i++;
        output1(l,k,i);
        // //printf("nhap xe thu: %d\n ", i);
        // //printf("ten xe: %s\t\thang xe:%s\t\tphien ban: %s\n ", k->data.ten, k->data.phienban, k->data.hang);
        // //printf("noi san xuat: %s\t\tgia ban: %d\n", k->data.sanxuat, k->data.giaban);

    }
}
void findcar(list l){
    int i = 0, demxe = 0;
    printf("in thong tin xe den tu hungary: \n");
    for(node *k = l.phead; k != NULL; k = k->pnext ){        
        i++;
        if(strcmp(k->data.sanxuat, "hungary") == 0){
            output1(l,k,i);
            demxe++;
        }       
    }  
    if(demxe == 0){
        printf("khong tim thay xe den tu hungary trong danh sach!\n");
    }  
}
int main(){
    list l;
    int a;
    khoitao(l);
    input(l);
    output(l);
    findcar(l);
    return 0;
}







    // do{
    //     printf("nhap: ");
    //     scanf("%d", &a);
    //     node *p = makenode(a);
    //     // themdau(l,p);
    //     if(a != 0){
    //         themcuoi(l,p);
    //     }        
    // }while(a != 0);