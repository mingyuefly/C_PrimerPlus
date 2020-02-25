//
//  dishisizhang11.c
//  dishisizhang
//
//  Created by mingyue on 15/11/25.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

#define FUNDLEN 50
#define N 2

struct funds{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(const struct funds meney[], int n);

int main(int argc, const char* argv[]){
    
    struct funds jones[N] = {
        {
            "Garlic-Melon Bank",
            3024.72,
            "Lucky's Savings and loan",
            9237.11
        },
        {
            "Honest Jack's Bank",
            3534.28,
            "Party Time Savings",
            3203.89
        }
    };
    
    printf("The Joneses have a total of $%.2f.\n",sum(jones, N));
    
    
    return 0;
}


double sum(const struct funds money[], int n){
    double total;
    int i;
    
    for (i = 0, total = 0; i < n; i++) {
        total += money[i].bankfund + money[i].savefund;
    }
    return total;
}





