//
//  Supplying arguments using functions.c
//  Book Examples
//
//  Created by Darren Hardy on 07/03/2017.
//  Copyright © 2017 Darren Hardy. All rights reserved.
//

#include "Supplying arguments using functions.h"

void display( char str[] );
int square(int x);
int cube( int y);


int SupplyingArgumentsUsingFunctions()
{
    int num;
    char msg[50] = "String to be passed to a function";
    
    display (msg);
    num = square(4);
    printf("4*4 = %d\n" , num);
    printf("4*4*4 = %d\n" , cube(4));
    
    
    return 0;
}


void display(char str[])
{
    printf ("%s\n" ,str);
}


int square(int x)
{
    return (x * x);
}


int cube(int y)
{
    return (y * y) * y;
}

