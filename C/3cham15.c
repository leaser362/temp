#include <stdio.h>

void nhap(int arr1[], int arr2[], int *n, int *m, int *k)
{
    *n = 0;
    *m = 0;
    int i;
    while (*n <= 0)
    {
        printf("Nhap n:");
        scanf("%d", n);
    }
    while (*m <= 0)
    {
        printf("Nhap m:");
        scanf("%d", m);
    }

    for (i = 0; i < *n; i++)
    {
        printf("\narr1[%d]=", i);
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < *m; i++)
    {
        printf("\narr2[%d]=", i);
        scanf("%d", &arr2[i]);
    }
    *k = 0;
    while (*k <= 0 || *k > *n)
    {
        printf("\nNhap K:");
        scanf("%d", k);
    }
}

void Chen(int arr1[], int arr2[], int k, int n, int m)
{
   
}

void In(int arr1[], int n, int m, int k)
{
    int i;
    for (i = 0; i < n + m; i++)
    {
        printf(" %d ", arr1[i]);
    }
}

int main()
{
    int n, m, k;
    int arr1[1000];
    int arr2[1000];
    nhap(arr1, arr2, &n, &m, &k);
    Chen(arr1, arr2, k, n, m);
    In(arr1, n, m, k);
}