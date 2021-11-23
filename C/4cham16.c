#include <stdio.h>

void Nhap(int *n, int arr[])
{
    *n = 0;
    while (*n <= 0)
    {
        printf("Nhap N:");
        scanf("%d", n);
    }
    int i;
    for (i = 0; i < n; i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
}

void TimViTri(int n, int *count, int arr[], int start[], int end[])
{
    int j = 0;
    start[j] = 0;
    int i;
    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            end[j] = i;
            j++;
            start[j] = i + 1;
        }
        end[j] = n - 1;
        *count = j + 1;
    }
}

int Tim_Max(int start[], int end[], int count)
{
    int max = end[0] - start[0] + 1;
    int i;
    for (i = 1; i < count; i++)
    {
        int lenght = end[0] - start[0] + 1;
        if (lenght > max)
        {
            max = lenght;
        }
    }
    return max;
}

void KetQua(int start[], int end[], int count)
{
    int lenght_max = Tim_Max(start, end, count);
    if (n == lenght_max)
    {
        printf("Khong Co Day Nao Tang");
    }
    else
    {
        int index;
        int i;
        for (i = 0; i < count; i++)
        {
            int lenght=end[i]-start[i]+1;
            if(lenght==lenght_max){
                index=i;
                break;
            }
        
        }
        
        int lenght = end[index] - start[index] + 1;
        int start_index=start[index]
        printf("\nCac phan tu trong duong chay la: ");
        for (i = start_index; i < start_index + lenght; i++)
        {
            printf("%5d", arr[i]);
        }
        printf("\n");

    }
}

int main()
{
    int n;
    int arr[1000];
    int start[100];
    int end[100];
    int count;
    Nhap(&n, arr);
    TimViTri(n, &count, arr, start, end);
    KetQua(start,end,count);
}
