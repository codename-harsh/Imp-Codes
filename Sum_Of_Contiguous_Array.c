#include <stdio.h>

int sum(int a[], int n, int st, int end)
{
    int sum = 0;
    for (int i = st; i < end; i++)
        sum += a[i];
    return sum;
}

int main()
{
    int n;
    puts("Enter the size of array : ");
    scanf("%d", &n);
    int a[n];
    puts("Enter the elements of array : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int l, max = sum(a, n, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            l = sum(a, n, i, j);
            if (l > max)
                max = l;
        }
    }

    printf("\n The sum of maximum SubArray is : %d", max);
    return 0;
}