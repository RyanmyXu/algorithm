#include <stdio.h>
void init(int a[],int num){
    for(int i = 0;i< num;i++){
        scanf("%d",&a[i]);
    }
}

void Direct_sort(int a[],int num){//////////////////////直接插入排序；
    for(int i = 1;i<num;i++){
        int j = i-1;
        int target = a[i];
        int k = 1;
        while(k){
            if(target<a[j]){
                a[j+1] = a[j];
                j--;
            }
            else{
                a[j+1] = target;
                k = 0;
            }
        }
    }
}//直接排序
void Shell_Sore(int a[],int num){
    int d = num;
    while(d>1){
        d = (d + 1)/2;
        for(int i = 0;i<num - d;i++){
            if(a[i]>a[i+d]){
                int inter = a[i+d];
                a[i+d] = a[i];
                a[i] = inter;
            }

        }
    }









}//希尔排序；
void bubble_Sore(int a[],int num){
    for(int i = 1;i<num;i++){
        int exchange = 1;
        for(int j = 0;j<num - i &&exchange;j++){
            exchange =0;
            int inter;
            if(a[j]>a[j+1]){
                inter = a[j];
                a[j] = a[j+1];
                a[j+1] = inter;
                exchange = 1;
            }
        }
    }
}//冒泡排序
int Quick_sore(int a[],int left,int right){
    int i =left-1,j = right-1;
    int target = a[i];
    while(i<j){
        while(a[j]>target && i<j) j--;
        if(i<j){
            a[i] = a[j];
            i++;
            while(a[i]<target && i<j) i++;
            if(i<j){
                a[j] = a[i];
                j--;
            }
        }
    }
    a[i] = target;
    return i;
}//
int _Quick_sore(int a[],int left,int right){
    int p;
    if(left<right){
        p = Quick_sore(a,left,right);
        _Quick_sore(a,left,p-1);
        _Quick_sore(a,p+2,right);

    }
    else return 0;

}//快速排序
void direct_sore(int a[],int num){
    for(int i = 0; i<num-1; i++){
        int min = a[i];
        int min_index =i;
        for(int j = i+1; j <= num; j++){
            if(a[j] < min) {
                min_index = j;
                min = a[j];
            }
        }
        int inter = a[i];
        a[i] = a[min_index];
        a[min_index] = inter;
    }
}//简单排序


int main() {
    int num;
    scanf("%d",&num);
    int a[num];
    init(&a,num);//输入数组；
   // Direct_sort(&a,num);//排序；
   // Shell_Sore( &a, num);
    //bubble_Sore( &a, num);
  //  int k =_Quick_sore(&a,1,num);
    direct_sore(&a, num);
    for(int i = 0;i<num;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
