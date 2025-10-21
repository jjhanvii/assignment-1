#include "mylib.h"
#include <stdio.h>
int power(int a, int count){
        int temp=1;
        for(int i=0; i<count; i++){
            temp*= a;
        }
        return temp;
    }
int isArmstrong(int num){
    int sum=0,numc=num,numc2=num;
    int count=0;
    for(int i=0; numc2>0; i++){
        numc2/=10;
        count++;
    }
    for(int i=0; numc>0; i++){
        sum+=power(numc%10,count);
        numc/=10;
    }
    if(sum==num){
        printf("Armstrong\n");
    }else{
        printf("Not Armstrong\n");
    }
    return 0;
}
int isAdams(int num){
    int revnum=0,sqnum, ros=0, sor=0, numc=num;
    //to find reverse of the number then its square
    for(int i=0; num>0; i++){
        revnum=(revnum*10)+(num%10);
        num/=10;
    }
    sor=revnum*revnum;
    //to find reverse of square
    sqnum=numc*numc;
    for(int i=0; sqnum>0; i++){
        ros=(ros*10)+(sqnum%10);
        sqnum/=10;
    }
    if(ros==sor){
        printf("Adams number\n");
    }else{
        printf("Not Adams number\n");
    }
    return 0;
}
int isPrimePalindrome(int num){
    int count=0;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            count++;
        }
    }
    int numc=num, temp=0;
    for(int i=0; numc>0; i++){
        temp=(temp*10)+(numc%10);
        numc/=10;
    }
    if((num==temp)&&(count==2)){
        printf("PrimePalindrome\n");
    }else{
        printf("Not PrimePalindrome\n");
    }
    return 0;
}