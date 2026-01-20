// Came in: TCS Digital, Zoho, campus hackathons //
#include <stdio.h>
int main() {
    int num, n, count = 0, i;
    scanf("%d %d",&num,&n);
    for (i = num + 1; count < n; i++) {
        int a = i/1000;
        int b = (i/100)%10;
        int c = (i/10)%10;
        int d = i%10;
        if (a == d && b == c) {
            printf("%04d\n", i);
            count++; // ye bas isliye kia hu ki pata lage ki ha kitne palindromes aa rhe mann kre to number pf palindromes bhi print kr skte isse .
        }
    }
    return 0;
}
