#include<stdio.h>
int main(){
    int p1, p2;
    printf("Rock Paper Scissors Game\n");
    printf("\nPlayer 1:\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    scanf("%d", &p1);
    printf("\nPlayer 2:\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    scanf("%d", &p2);
    printf("\nResult: ");
    if(p1 == p2)
        printf("Draw");
    else if((p1 == 1 && p2 == 3) ||
            (p1 == 2 && p2 == 1) ||
            (p1 == 3 && p2 == 2))
        printf("Player 1 Wins");
    else if((p2 == 1 && p1 == 3) ||
            (p2 == 2 && p1 == 1) ||
            (p2 == 3 && p1 == 2))
        printf("Player 2 Wins");
    else
        printf("Invalid Input");
    return 0;
}