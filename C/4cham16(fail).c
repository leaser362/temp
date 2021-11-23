#include <stdio.h>

void Nhap(int *n, int arr[])
{
    *n = 0;
    while (*n <= 0)
    {
        printf("Nhap N:");
        scanf("%d", n);
    }
}

void NhapMang(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("arr[%d]=",i);
        scanf("%d", &arr[i]);
    }
}

void XuatMang(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\narr[%d]=%d", i, arr[i]);
    }
}

void TimViTri(int arr[], int start[], int end[], int *count, int n)
{
    int j = 0;
    start[j] = 0;
    int i;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            end[j] = i;
            j++;
            start[j] = i + 1;
        }
    }
    end[j] = n - 1;
    *count = j + 1;
}

int Max(int count, int start[], int end[])
{
    int max = end[0] - start[0] + 1;
    int i;
    for (i = 1; i < count; i++)
    {
        int dai = end[i] - start[i] + 1;
        if (dai > max)
        {
            max = dai;
        }
    }
    return max;
}

void KetQua(int count, int n, int arr[], int start[], int end[])
{
    if (n == count)
    {
        printf("Khong co day tang");
    }
    else
    {
        int indexmax;
        int max = Max(count, start, end);
        int i;
        int lenght = start[0] - end[0] + 1;
        for (i = 1; i < count; i++)
        {
            lenght = start[i] - end[i] + 1;
            if (lenght == max)
            {
                indexmax = i;
            }
        }
        printf("\nDay Bat Dau Tu:%d, Ket Thuc O:%d", arr[start[indexmax]], arr[end[indexmax]]);
        printf("\nDay Bao Gom:");
        for (i = start[indexmax]; i <= end[indexmax]; i++)
        {
            printf("%d", arr[i]);
        }
    }
}

int main()
{
    int n;
    int arr[1000];
    int start[1000];
    int end[1000];
    int count;
    Nhap(&n, arr);
    NhapMang(arr, n);
    //XuatMang(arr, n);
    TimViTri(arr, start, end, &count, n);
    KetQua(count, n, arr, start, end);
}