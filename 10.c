#include<stdio.h>
int main(){
    int a,b,c ;
    printf("Enter three Numers : ");
    scanf("%d %d %d",&a,&b,&c);
    int max=a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }

    printf("Maximum of %d,%d and %d : %d",a,b,c,max);
    
    printf("\nName :- Siddhant Patil \nRoll Number :- 21H012");
    return 0;
}