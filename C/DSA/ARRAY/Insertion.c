#include<stdio.h>

//code for traversal
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}

int indexInsertion(int arr[], int size , int element, int index, int capacity)
{
    if(size>=capacity)
    {
        return -1;
    }
    else
    {
        for(int i = size-1 ; i >= index ; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[index] = element;
        return 1;
    }
}

int main()
{
    int arr[100] = {7,8,12,27,88};
    int size = 5;
    int element = 45, index = 3;
    int r = indexInsertion(arr, size , element, index , 100);
    if(r == 1)
    {
        size+=1;
        printf("Insertion successful.\nModified array is: \n");
        display(arr,size);
    }
    else
    {
        printf("insertion not successful!!!");
    }
    

    return 0;
}