//
//  diqizhang6.c
//  diqizhang
//
//  Created by mingyue on 15/10/23.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#define COVERAGE 200

int main(int argc, const char* argv[]){
    
    int sq_feet;
    int cans;
    
    printf("Enter number of square feet to be painted:\n");
    while (scanf("%d",&sq_feet) == 1) {
        cans = sq_feet / COVERAGE;
        cans += ((sq_feet % COVERAGE == 0) ? 0:1);
        printf("You need %d %s of paint.\n",cans,cans == 1 ? "can":"cans");
        printf("Enter next value (q to quit):\n");
    }
    
    
    return 0;
}