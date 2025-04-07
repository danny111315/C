# include<stdio.h>

int main () {

    int num1, num2, num3;

    printf("請輸入第一個整數");
    scanf("%d" , &num1);
    printf("請輸入第二個整數");
    scanf("%d" , &num2);
    printf("請輸入第三個整數");
    scanf("%d" , &num3);

    int avg = (num1 + num2 + num3) / 3;
    printf("平均： %d\n ", avg);
    return 0 ;
}