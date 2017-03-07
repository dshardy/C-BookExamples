//
//  Calling Recursively with Functions.c
//  Book Examples
//
//  Created by Darren Hardy on 07/03/2017.
//  Copyright © 2017 Darren Hardy. All rights reserved.
//

#include "Calling Recursively with Functions.h"

void count_down_from(int num);

int main()
{
    
    int start;
    
    printf("Enter a positive integer to count down from:");
    scanf("%d", &start);
    count_down_from(start);
    printf("Lift Off!\n");
    
    return 0;
    
}



void count_down_from (int num)
{
    
    printf("%d\n", num );
    --num ;
    
    if(num < 0) return ;
    else
        count_down_from(num);
    
}