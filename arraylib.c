#include <stdio.h>
#include "arraylib.h"
int findMaxIndex(int arr[], int size){
    int temp=arr[0], index=0;  //it will also work for negitive numbers
    for(int i=0; i<size; i++){
        if(arr[i]>temp){
            temp=arr[i];
            index=i;
        }
    }
    return index;
}
int findMinIndex(int arr[], int size){
    int temp=arr[0], index=0;
    for(int i=0; i<size; i++){
        if(arr[i]<temp){
            temp=arr[i];
            index=i;
        }
    }
    return index;
}
float findAverage(int arr[], int size){
    float sum=0,avg;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    avg=sum/size;
    return avg;
}
void displayArray(int arr[], int size){
    printf("{");
    for(int i=0; i<size; i++){
        if(i==size-1){
            printf("%d",arr[i]);
        }else{
            printf("%d,",arr[i]);
        }
    }
    printf("}\n");
}
void reverseArray(int arr[], int size){
    printf("{");
    for(int i=size-1; i>=0; i--){
        if(i==0){
            printf("%d",arr[i]);
        }else{
            printf("%d,",arr[i]);
        }
    }
    printf("}\n");
}
void sortArray(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("{");
    for(int i=0; i<size; i++){
        if(i==size-1){
            printf("%d}\n",arr[i]);
        }else{
            printf("%d,",arr[i]);
        }
    }
}
int linearSearch(int arr[], int size, int value){
    //will return index if found 
    //will return -1 if not found
    int tempindex=-1;
    for(int i=0; i<size; i++){
        if(value==arr[i]){
            tempindex=i;
        }
    }
    return tempindex;
}