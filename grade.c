#include<stdio.h>
int main(){
    int marks;
    char grade;
    printf("inout your marks");
    scanf("%d",&marks);

    if(marks>=80){
        printf("your grade is A+\n");       //grade char cant be included more of one character//
    }
    else if(marks>=70){                     //else if is used to run the programm shortly to dont cheak out the below conditions//
        grade='A'    ;
        printf("your grade is %c\n",&grade);
    }
    else if(marks>=60){
        grade='B';
        printf("your grade is %c\n",&grade);
    }
    else if(marks>=50){
        grade='C'    ;
        printf("your grade is %c\n",&grade);
    }
    else if(marks>=40){
        grade='D';
        printf("your grade is %c\n",&grade);
    }
    else{
    printf("your grade is F");
   }


















































return 0;}
