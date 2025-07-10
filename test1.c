/*
WAP to find the missing number from an array which conatins 
numbers from [1-n] atleast one number is missing. 
find that number.

example : N=10,   {2 3 4 5 6 7 1 8 10}
oUTPUT  9
iNPUT : N=10;  {2 3 4 5 6 7 1 8 10}
Output 9
for N=10
sum = 1+2+3+4+5+6+7+8+9+10 = n(n+1)/2 = (10)(10+1)/2 = 55
arr = 2 3 4 5 6 7 1 8 10 

XORSUM 


*/
#include <stdio.h>
int main() {
    int N=10;
    int arr[]={2,3,4,5,6,7,1,8,10};
    int size=sizeof(arr)/ sizeof(arr[0]);
    int total=N*(N+1)/2;
    // int sum =0;
    int xorsum=0;
    int i;
    for( i=0;i<(N-1);i++){
        // sum+=arr[i];
        xorsum=xorsum^(i+1)^arr[i];
        // total=total-arr[i];
    }
    // total=total-sum;
    // printf("\n Missing number = %d\n",total);
    printf("\n Missing number = %d\n",(xorsum^(i+1)));
    return 0;

}