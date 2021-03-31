#include <stdio.h>
static int k  = 1;
//n! n*....*1
//int way(int n);
//int way(int n){
//    if(n == 1){
//        return 1;
//    }
//}
//
void hanota(int input,char a,char b,char c){//汉诺塔；
    if(input == 1){
        printf("%d:%c-->%c\n",k++,a,c);
    }
    else{
        hanota(input - 1,a,c,b);
        printf("%d:%c-->%c\n",k++,a,c);
        hanota(input-1,b,a,c);
    }
}

int main() {
    int m;
    printf("Enter the number of floors of the Tower of Hanoi:");
    scanf("%d",&m);//几成汉诺塔；
    hanota(m,'a','b','c');
    return 0;
}
