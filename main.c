//
//  main.c
//  new
//
//  Created by qingyun on 16/3/9.
//  Copyright © 2016年 qingyun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i;
    scanf("%d",&i);
    if (i%4==0 && i/100%4==0) {
        printf("%d年是闰年\n",i);
    }else{
        printf("%d年是平年\n",i);
    }
    return 0;
}
