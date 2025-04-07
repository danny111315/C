# include<stdio.h>

int main () {

    float num1, num2, num3;

    printf("請輸入第一個整數\t");
    scanf("%f" , &num1);
    printf("請輸入第二個整數\t");
    scanf("%f" , &num2);
    printf("請輸入第三個整數\t");
    scanf("%f" , &num3);

    int avg = (num1 + num2 + num3) / 3.0;
    printf("平均： %f\n ", avg);
    return 0 ;
}