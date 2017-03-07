//
//  Inputting variable values.c
//  Book Examples
//
//  Created by Darren Hardy on 07/03/2017.
//  Copyright © 2017 Darren Hardy. All rights reserved.
//

#include "Inputting variable values.h"
#include <stdio.h>

int InputVariableMain()
{
    char letter;
    int num1 ,num2;
    
    printf("Enter any one keyboard character:");
    scanf("%c", &letter);
    printf("Enter two integers seperated by a space:");
    scanf("%d %d", &num1, &num2);
    
    printf("Numbers input: %d and %d \n", num1, num2 );
    printf("Letter input: %c" ,letter);
    printf("Stored at: %p \n:", &letter);
          
    return 0;
          
}



