#include <stdio.h>
#include<stdlib.h>
int main() {
    int myNumbers[] = {1, 3, 5, 12};
    int mynumbers[] = {2, 6, 8};

     int size1 = sizeof(myNumbers) / sizeof(myNumbers[0]);
     int size2 = sizeof(mynumbers) / sizeof(mynumbers[0]);
    
    int totalSize = size1 + size2;
    int NewNumbers[totalSize];

printf("The size of total array is %d\n", size1);
    int i=0;
    int j=0; 
    int k=0;

    while(i < size1 || j < size2)
         {if (myNumbers[i] < mynumbers[j])
            {  NewNumbers[k++] = myNumbers[i++];
            }
            else{
                NewNumbers[k++] = mynumbers[j++];
       while (i<size1 && j<size2)    {
        if(myNumbers[i] < mynumbers[j]){
             printf("K value  printing i ki value%d %d val %d \n :", k,i ,myNumbers[i]);
        NewNumbers[k] = myNumbers[i++];
   
        }
        else{
             printf(" printing j ki value %d val %d \n :",j ,mynumbers[j]);
            NewNumbers[k] = mynumbers[j++];

        }
    }
         }
}
    for (int k = 0; k < totalSize; k++) {
         
    printf("%d\n", NewNumbers[k] );
         }
    return 0;
}



