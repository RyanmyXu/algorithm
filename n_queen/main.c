#include <stdio.h>
#define MAXNUM 10
struct checkerboard{
    int data[MAXNUM][MAXNUM];//二维数组
    int n;
    int sum;
};
int Diagonal(struct checkerboard obj,int i,int j){
    int left = 0,x = i;
    int right = 0,y = j;
    while(1){
        if(i<1||j<1){
            break;
        }
        if(obj.data[i--][j--] == 1){
            right = 1;//不满足
        }
    }
    while(1){
        if(x<1||y<1||x>obj.n||y>obj.n){
            break;
        }
        if(obj.data[x--][y++] == 1){
            left = 1;//不满足
        }
    }

    if(left==0&&right==0){
        return 0;
    }
    else{
        return 1;
    }
}
int judgement(struct checkerboard obj,int i,int j){
    int judg = 0;
    for(int a=1;a<=i;a++){//纵向判断；
        if(obj.data[a][j] == 1){
            judg = 1;//不满足放置条件
        }
    }
    if(judg==0&&Diagonal(obj,i,j)==0){
        return 0;
    }
}
struct checkerboard init(){
    static struct checkerboard obj;
    int input;
    scanf("%d",&input);
    for(int i=1;i<=input;i++){
        for(int j = 1;j <= input;j++){
            obj.data[i][j] = 0;
        }
    }
    obj.n = input;
    obj.sum =0;
    return obj;
}
int  d_o(struct checkerboard obj,int i){//执行函数
    if(i>obj.n){
        obj.sum+=1;
        printf("%d\n",obj.sum);

    }
    else{
        for(int k = 1; k <= obj.n ; k++){
            for(int m = 1;m<=k;m++){
                obj.data[i][m] = 0;
            }
            if(judgement(obj,i,k)==0){
                obj.data[i][k] = 1;
                d_o(obj,i+1);
            }
        }
    }

}
int main() {
    printf("input:-->");//输入有几个皇后
    struct checkerboard obj = init();
    printf("num:\n");//输出解法的个数：ps 由于能力有限每输一个1为一次解法，自己数吧！！！！

    d_o(obj,1);
    printf("%d\n",obj.sum);
    return 0;
}
