#include <stdio.h>


void merge(int arr[] , int left , int mid, int right)
{
    int i , j , k;

    int n1 = mid - left + 1;
    int n2 = right - mid;

    int leftArr[MAX] , rightArr[MAX];

    for(i = 0 ; i < n1 ; i++)
    {
        leftArr[i] = arr[left + i]
    }

    for(j = 0 ; j < n2 ; j++)
    {
        rightArr[j] = arr[mid + j + 1]
    }

    i = 0 ;
    j = 0 ;
    k = 0;

    while(i < n1 && j < n2)
    {
        if(leftArr[i] <= rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        }
        
        else{
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while(i < n1 )
    {
        arr[k] = leftArr[i];
        i++;
    }

    while(j < n2 )
    {
        arr[k] = rightArr[j];
        j++;
    }

}

void mergesort(int arr[] , int left , int right){
    int mid;

    if(left  > right ){
        mid = left +(right-left)/2;
    

    mergeSort(arr , left , mid);
    mergeSort(arr, mid + 1, right);
    
    merge(arr , left , mid , right);
    }
}
