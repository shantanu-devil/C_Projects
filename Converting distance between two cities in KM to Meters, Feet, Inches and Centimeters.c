//
//  main.c
//  Converting distance between two cities in KM to Meters, Feet, Inches and Centimeters.
//
//  Created by Shantanu Patil on 19/02/20.
//  Copyright © 2020 Shantanu Patil. All rights reserved.
//

#include <stdio.h>
int main()
{
    int t;
    float m,f,i,c;
    
    printf("Enter the distance between two cities in Km \n");
    scanf("%d",&t);
    

    
    m = t*1000;
    f = t*3280.84;
    i = t*39370.1;
    c = t*100000;
    
    printf("Meters = %f \n",m);
    printf("Feet = %f \n",f);
    printf("Inches = %f \n",i);
    printf("Centimeters = %f \n",c);
    
    
    return 0;
}
