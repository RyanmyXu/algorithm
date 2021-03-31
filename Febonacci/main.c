#include <stdio.h>
int main() {
    int n,i,an;
    int an_1 = 1;
    int an_2 = 1;
    scanf("%d",&n);
    for(i = 0; i<n-2; i++){
        an = an_1 + an_2;
        an_2 = an_1;
        an_1 = an;
    }
    int output = an %10007;
    printf("%d",output);
    //printf("Hello, World!\n");
    return 0;
}
