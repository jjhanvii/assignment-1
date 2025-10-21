#include <stdio.h>
#include "mylib.h"
#include "arraylib.h"
int main(){
    int choice;
    do{
        printf("\nType the number in front to choose:\n");
        printf("1.functions from \"mylib\"\n");
        printf("2.functions from \"arraylib\"\n");
        printf("3.To exit\n");
        printf("choice:");
        scanf("%d", &choice);
    
        if(choice==1){
            int choicemy, num;
            printf("1.isArmstrong\n");
            printf("2.isAdams\n");
            printf("3.isPrimePalindrome\n");
            printf("4.To exit\n");
            printf("choice:");
            scanf("%d",&choicemy);
            printf("Enter the number to do the operation on:");
            scanf("%d",&num);
            if(choicemy==1){
                isArmstrong(num);
            }else if(choicemy==2){
                isAdams(num);
            }else if(choicemy==3){
                isPrimePalindrome(num);
            }else{
                printf("enter a valid input");
            }
        }else if(choice==2){
            int choicearray,size; 
            printf("size of your array:");
            scanf("%d",&size);
            int arr[size];
            printf("enter your array elements:\n");
            for(int i=0; i<size; i++){
                printf("enter element number %d:",i+1);
                scanf("%d",&arr[i]);
            }
            do{
                printf("1.findMaxIndex(int arr[], int size)\n");
                printf("2.findMinIndex(int arr[], int size)\n");
                printf("3.findAverage(int arr[], int size)\n");
                printf("4.displayArray(int arr[], int size)\n");  
                printf("5.reverseArray(int arr[], int size)\n");
                printf("6.sortArray(int arr[], int size);\n");
                printf("7.linearSearch(int arr[], int size, int value)\n");
                printf("8.To exit\n");
                printf("choice:");
                scanf("%d",&choicearray);
                if(choicearray==1){
                    printf("%d\n",findMaxIndex(arr,size));
                }else if(choicearray==2){
                    printf("%d\n",findMinIndex(arr,size));
                }else if(choicearray==3){
                    printf("%f\n",findAverage(arr,size));
                }else if(choicearray==4){
                    displayArray(arr,size);
                }else if(choicearray==5){
                    reverseArray(arr,size);
                }else if(choicearray==6){
                    sortArray(arr,size);
                }else if(choicearray==7){
                    int value;
                    printf("Enter the number to search for:");
                    scanf("%d",&value);
                    printf("%d\n",linearSearch(arr,size,value));
                }else{
                    printf("enter a valid input");
                }
            }while(choicearray!=8);
        }
    }while(choice!=3);
    return 0;
}