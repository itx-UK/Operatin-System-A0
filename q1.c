#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

//question 1 
 
#define num 100 
  
int main() 
{ 
    FILE* p; 
    int counter=0; 
    char file[num]; 
    char ch;
    printf("File name? "); 
    scanf("%s", file); 
    p=fopen(file, "r");  
    if(p==NULL) 
    { 
        printf("File not found %s",file); 
        return 0; 
    } 
    for(ch=getc(p);ch!=EOF;ch=getc(p)) 
        counter=counter+1; 
    fclose(p); 
    printf("File %s has %d characters\n ",file, counter);  
    return 0; 
} 
