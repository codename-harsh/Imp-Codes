// Problem
// Given a number N, count how many digits appear even number of times.
#include <stdio.h>
int main() {
    long long n;
    scanf("%lld", &n); // well long long mtlb it guarantees 64 bits at least , aesa isliye kia kyuki constraints wagera me dia tha and acha hota hai zyada space leke chalna //
    int freq[10] = {0}; // sare 10 elements ko 0 se initialise kr dia //
    while(n!=0){
        freq[n % 10]++; // koi no. input me kitni baar aa rha ek tareeke se ye wahi btayega ! // 
        n /= 10;
    }
    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] != 0 && freq[i] % 2 == 0) // coz we are printing even freq baby !! // 
            count++;
    }
    printf("%d", count);
    return 0;
}
// Came in: Hackerearth hiring challenges //