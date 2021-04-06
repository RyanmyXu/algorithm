#include <stdio.h>
#define MAX_NUM 100
//问题描述
//        在北美洲东南部，有一片神秘的海域，那里碧海 蓝天、阳光明媚，这正是传说中海盗最活跃的加勒比海。17 世纪时，这里更是欧洲大陆 的商旅舰队到达美洲的必经之地，所以当时的海盗活 动非常猖獗。有一天，海盗们截获了一艘装满各种各样古董的 货船，每一件古董都价值连城，一旦打碎就失去了它 的价值。
//虽然海盗船足够大，但载重量为 30，每件古董的重量分别为 3,5,4,10,7,14,2,11，
//海盗们该如何把尽可能多数量的宝贝装上海盗船呢？
typedef struct structure{
    int data[MAX_NUM];
    int num;
};
struct structure init(){
    struct structure input;
    for(int i = 0;i<MAX_NUM;i++){
        int k;
        scanf("%d",&k);
        if(k>=0){
            input.data[i] = k;
        }
        else {
            input.num = i;
            break;
        }
        input.num = i;
    }
    return input;
}
void sore(struct structure *input){
    for(int i = 1;i<input->num;i++){
        int target = input->data[i];
        for(int j=i-1;j>=0;j--){
            if(target<input->data[j]){
                input->data[j+1] = input->data[j];
                input->data[j]=target;
            }
            else{
                input->data[j+1]= target;
                break;
            }
        }
    }

}


int main() {
    struct structure output = init();
    sore(&output);
    int sum = 0;
    for(int i = 0;sum<=30&&i<output.num;i++){
        sum+=output.data[i];
        if(sum>30){
            break;
        }
        printf("%d ",output.data[i]);
    }

//    printf("%d",output.data[0]);
//    printf("%d",output.num);
//    printf("Hello, World!\n");
    return 0;
}
