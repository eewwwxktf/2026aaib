/// week09-4.cpp 要交換陣列裡的數字
#include <stdio.h>
int main()
{

        int a=99, b=34; /// 有2個瓶子 a 裝咖啡 b 裝清水
        printf("u一開始 a: %d b: %d\n", a, b);
        int temp = a; /// 再準備第3個瓶子 temp 先接住 a 的咖啡
        a = b; /// b 瓶子,就可以接住 b 的清水
        b = temp; /// b瓶子, 就可以接住 temp 裡暫時放的咖啡
        printf("交換後a: %d b: %d\n", a, b);
}
