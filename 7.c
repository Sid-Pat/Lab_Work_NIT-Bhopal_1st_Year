#include<stdio.h>
int main(){
    int age ;
    printf("Enter age : ");
    scanf("%d",&age);
    if(age<18){
        printf("MINOR");
    }
    else{
        printf("MAJOR");
    }
    
    printf("\nName :- Siddhant Patil \nRoll Number :- 21H012");
    return 0;
}