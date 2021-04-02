#include <stdio.h>
#define MAXSUIZE 100
#include<stdlib.h>
//1.线性表：
typedef struct List{
    int data[MAXSUIZE];
    int num;//长度；
}List;//1.线性定义
void ShowList(){
    int length;
    printf("input the num\n");
    scanf("%d",&length);
    printf("input the target\n");
    //struct List opt;
    struct List* L = (struct List*)malloc(sizeof (List));
    for(int i = 0; i < length; i++){
    //    scanf("%d",&opt.data[i]);
        scanf("%d",&L->data[i]);
    }
    //opt.num = length;
    for(int i = 0; i < length; i++){
       // printf("%d",opt.data[i]);
        printf("%d",L->data[i]);
    }
    printf("\n");
}//线性表创建
//2.链表
typedef struct Nodelist{
    int data;
    struct Nodelist* next;
};//链表定义
void ShowNodeList(){
    int input;
    printf("please input your num:\n");
    scanf("%d",&input);
    if(input > 0){
        struct Nodelist* L = (struct Nodelist*)malloc(sizeof(struct Nodelist));
        L->next = NULL;
        int target;
        printf("please input your target:\n");
        scanf("%d",&target);
        L->data = target;
        struct Nodelist* p = L;
        for(int i = 0;i<input-1;i++){
            struct Nodelist* q = (struct Nodelist*)malloc(sizeof(struct Nodelist));
            q->next = p->next;
            scanf("%d",&target);
            q->data = target;
            p->next =q;
            p = p->next;
        }//创建及输入
        for(int j = 0;L!=NULL;j++){
            printf("%d",L->data);
            L=L->next;
        }
        printf("\n");
    }

}//创建


void Show_menu(){
    printf("input 1---> List\n");//线性表；
    printf("input 2---> point\n");//链表；
    printf("input -1---> end the exe\n");//链表；
    printf("please start your choose:\n");
}//菜单模块；


int start(){
    int input;
    Show_menu();
    scanf("%d",&input);

    while(input != -1){
        switch (input) {
            case 1:
                ShowList();
                break;
            case 2:
                ShowNodeList();
                break;
            default:printf("your input is error");
        }
        Show_menu();
        scanf("%d",&input);
    }
    if(input == -1){
        printf("see you next time ");
        return 0;
    }
}


int main() {
    printf("Hello, World!\n");
    int output = start();
    if(output == 0){
        return 0;
    }
}
