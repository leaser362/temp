#include <stdio.h>

void HienMang(int arr[])
{
    int i;
    for (i = 0; i <= 6; i++)
    {
        printf(" %d ", arr[i]);
    }
}

int main()
{
    int arr[] = {5, 66, 23, 64, 34, 124, 123};
    int i, pos;
    int key;
    for(i=1;i<6;i++){
        key=arr[i];
        pos=i-1;
        while(pos>=0&&arr[pos]>arr[i]){
            arr[pos+1]=arr[pos];
            pos--;
        }
        arr[pos+1]=key;
    }
    HienMang(arr);
}