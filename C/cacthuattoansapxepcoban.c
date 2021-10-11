#include<stdio.h>
#define Max 20

void NhapMang(int arr[]){
    int i;
    int j=1;
    for(i=0;i<=Max-1;i++){
        printf("Add The %d Of The Sequence:",j);
        scanf("%d",&arr[i]);
        printf("\n");
        j++;
    }
}

void HienThiMang(int arr[]){
    int i;
    for(i=0;i<=Max-1;i++){
        printf(" %d ",arr[i]);
    }
}

void SelectionSortTang(int arr[]){
    int i;
    int j;
    int tmp;
    printf("The Sequence After Increasing Sort By Selection Sort:");
    for(i=0;i<=Max-2;i++){
        for(j=i+1;j<=Max-1;j++){
            if(arr[i]>arr[j]){
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    HienThiMang(arr);
}

void SelctionSortGiam(int arr[]){
    int i;
    int j;
    int tmp;
    printf("\nThe Sequence After Decreasing Sort By Selection Sort:");
    for(i=0;i<=Max-2;i++){
        for(j=i+1;j<=Max-1;j++){
            if(arr[i]<arr[j]){
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    HienThiMang(arr);
}

void BubbleSortTang(int arr[]){
    int i;
    int j;
    int tmp;
    printf("\nThe Sequence After Increasing Sort By Bubble Sort:");
    for(i=0;i<=Max-2;i++){
        for(j=0;j<=Max-i-2;j++){
            if(arr[j]>arr[j+1]){
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    HienThiMang(arr);
}

void BubbleSortGiam(int arr[]){
    int i;
    int j;
    int tmp;
    printf("\nThe Sequence After Decreasing Sort By Bubble Sort:");
    for(i=0;i<=Max-2;i++){
        for(j=0;j<=Max-2-i;j++){
            if(arr[j]<arr[j+1]){
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    HienThiMang(arr);
}

void InsertionSortTang (int arr[]){
    int i;
    int j;
    int key;
    printf("\nThe Sequence After Increasing Sort By Insert Sort:");
    for(i=1;i<Max-1;i++){
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    HienThiMang(arr);
}

void InsetionSortGiam (int arr[]){
int i;
int j;
int key;
printf("\nThe Sequence After Decreasing Sort By Insert Sort:");
for(i=1;i<=Max-1;i++){
    key=arr[i];
    j=i-1;
    while(j>=0&&arr[j]<key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
}
HienThiMang(arr);
}

int main(){
    int arr[Max];
    NhapMang(arr);
   // SelectionSortTang(arr);
   // SelectionSortTang(arr);
   // BubbleSortTang(arr);
    // BubbleSortGiam(arr);
    InsertionSortTang(arr);
    InsertionSortGiam(arr);
}