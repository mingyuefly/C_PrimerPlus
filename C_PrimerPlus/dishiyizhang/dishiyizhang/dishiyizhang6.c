//
//  dishiyizhang6.c
//  dishiyizhang
//
//  Created by mingyue on 15/11/2.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

void put1(const char* string);

int put2(const char*);

int main(int argc, const char* argv[]){

    put1("If I'd as much money");
    put1(" as I could characters.\n");
    printf("I count %d characters.\n",put2("I never would cry old chairs to mend."));

    return 0;
}


void put1(const char* string){

    while (* string != '\0') {
        putchar(*string++);
    }

}

int put2(const char* string){

    int count = 0;
    while (*string) {
        putchar(*string++);
        count++;
    }
    putchar('\n');
    return count;

}