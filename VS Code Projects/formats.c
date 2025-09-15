#include <stdio.h>

int main(){
    int x = 1;
    int x2 =10;
    int x3 =100;
    int x4 = -100;

    printf("%3d\n",x);  //%3d = 3 spaces before integer
    printf("%3d\n",x2);
    printf("%3d\n",x3);

    printf("%4d\n",x);  //%4d = 4 spaces before integer
    printf("%4d\n",x2);
    printf("%4d\n",x3);
   
    printf("%-4d\n",x);  //%-4d = 4 spaces after integer
    printf("%-4d\n",x2);
    printf("%-4d\n",x3);

    printf("%04d\n",x);  //%04d = 4 0s before integer
    printf("%04d\n",x2);
    printf("%04d\n",x3);

    printf("%+d\n",x3);  //%+d = show + or - before integer
    printf("%+d\n",x4);





    return 0;
}