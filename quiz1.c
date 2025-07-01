/*

WAP in C to determine the Grade of a student as per the table below
Input: marks
Ouput: Grade

Marks  | Grade
80-100 |   A
60-80  |   B
40-60  |   C
 < 40  |   FAIL

*/

#include <stdio.h>
int main()
{
    float marks;
    char grade;
    marks = 35.0;//  Enable User input 
    if (marks >= 80 && marks <= 100)
    {
        printf("Grade:A\n");
    }
    else if (marks >= 60 && marks < 80)
    {
        printf("Grade:B\n");
    }
    else if (marks >= 40 && marks < 60)
    {
        printf("Grade:C\n");
    }
    else // if(marks>=60&&marks<80){
    {
        printf("Grade:FAIL\n");
    }

    return 0 ;
}