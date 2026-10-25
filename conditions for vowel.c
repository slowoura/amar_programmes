#include<stdio.h>
    int main(){
    char chr;
    printf("write a character to cheakout the vowel\n\n");
    scanf("%c", &chr);
    if(chr=='a'||chr=='A'){
        printf("vowel\n\n");
    }
    if(chr=='e'||chr=='E'){
        printf("vowel\n\n");
    }
    if(chr=='i'||chr=='I'){printf("vowel\n\n");}
    if(chr=='o'||chr=='O'){
        printf("vowel\n\n");
    }
    if(chr=='u'||chr=='U'){
        printf("vowel\n\n");
    }
    if(chr=='0'||chr=='1'||chr=='2'||chr=='3'||chr=='4'||chr=='5'||chr=='6'||chr=='7'||chr=='8'||chr=='9'){
        printf("sorry its not a character rather a digit\n\n");
    }
    if(chr<'0'&& chr>'9'){
        printf("its a number or negetive digit\n\n");
    }
    else if(chr=='a'||chr=='b'||chr=='q'||chr=='w'||chr=='e'||chr=='r'||chr=='t'||chr=='y'||chr=='u'||chr=='i'||chr=='o'||chr=='p'||chr=='s'||chr=='d'||chr=='f'||chr=='g'||chr=='h'||chr=='j'||chr=='k'||chr=='l'||chr=='z'||chr=='x'||chr=='c'||chr=='v'||chr=='n'||chr=='m'||chr=='Q'||chr=='W'||chr=='E'||chr=='R'||chr=='T'||chr=='Y'||chr=='U'||chr=='I'||chr=='O'||chr=='P'||chr=='A'||chr=='S'||chr=='D'||chr=='F'||chr=='G'||chr=='H'||chr=='J'||chr=='K'||chr=='L'||chr=='Z'||chr=='X'||chr=='C'||chr=='V'||chr=='B'||chr=='N'||chr=='M'){
        printf("its a word or anything else\n\n");
    }






   printf("thank you to response");



























    return 0;

    }
