#include <stdio.h>

int main() {

    int num , sum ; 

    printf("請輸入數字1");
    scanf("%d", &num); 
    sum = sum + num;
    printf("請輸入數字2");
    scanf("%d", &num);
    sum = sum + num;
    printf("請輸入數字3");
    scanf("%d", &num);
    sum = sum + num;
    printf("請輸入數字4");
    scanf("%d", &num);
    sum = sum + num;
    printf("請輸入數字5");
    scanf("%d", &num);

    sum = sum + num;
    printf("sum is %d" , sum);

    return 0;
}


/*
為了應對 100個數字 我們需要 省略許多的記憶體使用量
我們可以先進行加的動作 

撰寫程式碼的要點 ：

1. 正確性
2. 維護性 
3. 可讀性
4. 效率 -----> 處理器的使用 , 記憶體的使用
5. 擴展型 



*/