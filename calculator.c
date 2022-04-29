#include<stdio.h>
int main(){
    int val1,val2;char ch;
    printf("m for multiplication\nd for division\nr for remainder\n");
    printf("a for addition\ns for subtraction\n");
    scanf("%c",&ch);
    scanf("\n%d %d",&val1,&val2);
    if(ch=='a'){
        printf("%d",val1+val2);
    }else if(ch=='s'){
        printf("%d",val1-val2);
    }else if(ch=='m'){
        printf("%d",val1*val2);
    }else if(ch=='r'){
        printf("%d",val1%val2);
    }else if(ch=='d'){
        printf("%d",val1/val2);
    }else{
        printf("Enter proper value");
    }
return 0;
}