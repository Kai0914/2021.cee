///week07 step03-1
///了解 for(迴圈),你要把註解也打字
#include <stdio.h>
int main()
{
    int i; ///1973年的C發明者的寫法,1989年的ANSI C規則
    for( i=0; i<=3; i++){
            printf("有幾次呢?\n");
    }///課本的寫法,不好!!!

    ///1998/1999 新版的 C++/C寫法
    for( int i=0; i<3; i++){
        printf("老師推薦的寫法,有幾次?\n");
    }   ///會跑 3次
}
