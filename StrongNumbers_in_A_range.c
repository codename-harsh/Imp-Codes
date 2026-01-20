// Problem
// Given two integers L and R, print all Strong numbers between them.
#include<stdio.h>
int main(){
    int start, end;
    scanf("%d %d",&start,&end);
    for (int i = start;i <= end;i++) {
        int num=i, sum=0;
        while (num!=0){
            int digit = num % 10;
            int fact = 1;
            for (int j = 1; j <= digit; j++) {
                fact = fact * j;
            }
            sum += fact;
            num /= 10;
        }
    if(sum == i) printf("%d\n", i);
    }
    return 0;
}
// Came in: Infosys SP, Wipro NLTH
