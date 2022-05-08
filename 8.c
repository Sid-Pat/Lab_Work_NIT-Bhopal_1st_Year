#include<stdio.h>
int main(){
    int num ;
    printf("Enter number : ");
    scanf("%d",&num);
    
    if(num<0){
        printf("Negative");
    }
    else{ 
            if(num==0){
                printf("Zero");
            }
            else{
                printf("Positive");
            }
    }
    printf("\nName :- Siddhant Patil \nRoll Number :- 21H012");
    return 0;
}