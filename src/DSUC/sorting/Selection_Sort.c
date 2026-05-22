#include <stdio.h>

void selection_sort(int arr[] , int n)
{
    int i , j , min_Index , temp;

    for(i = 0; i < n-1; i++ )
    {
        min_Index = i;
        
        for(j = i+1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                min_Index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_Index];
        arr[minIndex] = temp;
    }   
}

int main()
{
    int minIndex;
}