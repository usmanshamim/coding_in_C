/*
WAP in C to find average of 10 numbers in array.
*/

#include <stdio.h>
int main(){
    int numbers[10];
    int sum=0;
    float average;
    printf("Enter 10 numbers:\n");
    for (int i=0; i<10; i++) {
        // printf("Enter number %d: ",i+1);
        scanf("%d",&numbers[i]);
        sum +=numbers[i];
        /*at t 
        i =8 
        avg = sum upto number[8]/10 = X
        i = 9 
        avg = sum upto number[8]/10 = Y
        */
       
        // printf("\nSum of the numbers: %d\n",sum);
    }
    average=(float)sum/10.0;
    printf("Average of the numbers=%.2f\n",average);
        

    return 0;
}