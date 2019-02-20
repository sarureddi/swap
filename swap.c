#include<stdio.h>
#include <conio.h>
#include <string.h>
void main(){
     char str[20],tmp;
     int s,v;
     clrscr();
     printf("\nEnter a string : ");
     scanf("%s",str);
     printf("\n\nOriginal String     : %s",str);
     for(s=0;s<strlen(str);s=s+2){
     tmp = str[s];
     str[s] = str[s+1];
     str[s+1] = tmp;
     }
     printf("\nAfter Swap String      : %s",str);
     getch();
}
