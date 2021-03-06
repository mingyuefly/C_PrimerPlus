//
//  dishiwuzhang1.c
//  dishiwuzhang
//
//  Created by mingyue on 15/11/27.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

char * itobs(int, char *);
void show_bstr(const char *);

int main(int argc, const char * argv[]){
    
    char bin_str[8 * sizeof(int) + 1];
    int number;
    
    puts("Enter integers and see them in binary.");
    puts("Non-numberic input terminates program.");
    
    while (scanf("%d", &number) == 1) {
        itobs(number, bin_str);
        printf("%d is ", number);
        show_bstr(bin_str);
        putchar('\n');
    }
    puts("Bye!");
    return 0;
}

char * itobs(int n, char * ps){
    
    int i;
    static int size = 8 * sizeof(int);
    
    for (i = size - 1; i >= 0; i--, n >>=1) {
        ps[i] = (01 & n) + '0';
    }
    ps[size] = '\0';
    return ps;
}


void show_bstr(const char * str){

    int i = 0;
    while (str[i]) {
        putchar(str[i]);
        if (++i % 4 == 0 && str[i]) {
            putchar(' ');
        }
    }

}












