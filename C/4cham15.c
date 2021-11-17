#include <stdio.h>

void NhapSo(int *n)
{
    *n = 0;
    while (*n <= 0)
    {
        printf("Nhap So Luong Phan Tu =");
        scanf("%d", n);
    }
}

void NhapK(int *k, int n)
{
    *k = -1;
    while (*k < 0 || *k >= n)
    {
        printf("Nhap K:");
        scanf("%d", k);
    }
}

void NhapMang(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
}

void In(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}

void Chen(int arr1[], int arr2[], int n, int m, int k)
{
    int i;
    for (i = m + n - 1; i >= k; i--)
    {
        arr1[i] = arr1[i - m];
    }
    for (i = k; i <= k + m; i++)
    {
        arr1[i] = arr2[i - k];
    }
}

int main()
{
    int n, m, k;
    int arr1[1000];
    int arr2[1000];
    NhapSo(&n);
    NhapMang(arr1, n);
    NhapSo(&m);
    NhapMang(arr2, m);
    NhapK(&k, n);
    Chen(arr1, arr2, n, m, k);
    In(arr1, m + n - k);
}