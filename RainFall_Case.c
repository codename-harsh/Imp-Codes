// Problem
// Given rainfall in mm (float), classify:
// | Range  | Output        |
// | ------ | ------------- |
// | (0,1)  | No Rain       |
// | [1,5)  | Light Rain    |
// | [5,10) | Moderate Rain |
// | ≥10    | Heavy Rain    |
#include<stdio.h>
int main() {
    float r;
    scanf("%f", &r);
    if (r > 0 && r < 1)
        printf("No Rain");
    else if (r >= 1 && r < 5)
        printf("Light Rain");
    else if (r >= 5 && r < 10)
        printf("Moderate Rain");
    else
        printf("Heavy Rain");
    return 0;
}
// Came in: Accenture, Cognizant GenC