# include <stdio.h>

int main(){
    int num1 , num2 , num3  , sum;

    printf("請輸入第一個整數");
    scanf("%d" , &num1);
    printf("請輸入第二個整數");
    scanf("%d" , &num2);
    printf("請輸入第三個數字");
    scanf("%d" , &num3);

    sum = num1 + num2 + num3;

    printf("Sum is %d.\n", sum);
    return 0 ; 
}

