#include <stdio.h>

void insertionSort(int arr[] , int n)
{
    int i , j , key;

    for(i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

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

        while(i < n1)
        {
            Arr[k] = leftArr[i];
            i++;
        }

        while(j < n2)
        {
            Arr[k] = rightArr[j];
            j++;
        }
    }

}

int main()
{
    int leftArr[];
    int rightArr[];
    int n1;
    int n2;


    return 0;
}