#include<stdio.h>
    int main(){
    char chr;
    printf("write a character to cheakout the vowel\n");
    scanf("%c", &chr);
    if(chr=='a'||chr=='A'){
        printf("vowel\n");
    }
    if(chr=='e'||chr=='E'){
        printf("vowel\n");
    }
    if(chr=='i'||chr=='I'){
        printf("vowel\n");
    }
    if(chr=='o'||chr=='O'){
        printf("vowel\n");
    }
    if(chr=='u'||chr=='U'){
        printf("vowel\n");
    }
    if(chr=='0'||chr=='1'||chr=='2'||chr=='3'||chr=='4'||chr=='5'||chr=='6'||chr=='7'||chr=='8'||chr=='9'){
        printf("sorry its not a character rather a digit.");
    }
    else{
        printf("its a consonant or other thing");
    }


























    return 0;

    }
