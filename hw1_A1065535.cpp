#include<stdio.h>
#include<stdlib.h>

int main()
{
int a = 3;
float b = 5.5;

printf("%d\n",a+b);
printf("%d\n",a-b);
printf("%d\n",a*b);
printf("%d\n",a/b);
/*以%d輸出加減乘的數值顯示為0，因為%d只輸出低於32位元的數據，
而由float運算後的低32位為0，所以顯示輸出為0。*/
/*以%d輸出之除法結果為390451572，因為%d只輸出低於32位元的數據，
故390451572為運算後最低32位的數據轉為10進位後的結果。*/
//參考網址:https://read01.com/zh-tw/nx8y4o.html#.Wc3wWWiCzIU

printf("%f\n",a+b);
printf("%f\n",a-b);
printf("%f\n",a*b);
printf("%f\n",a/b);
//使用%f輸出則無問題

system("PAUSE");
return 0;
}