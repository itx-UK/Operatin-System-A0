#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

// question 2

int main() 
{
	char name[50];
	char rollnum[50];
	char email[50];
	int i;
	FILE *p;
	p=(fopen("std.txt","w"));
	if(p==NULL) 
	{
		printf("Not created!");
	}
	for (i=0;i<3;++i) 
	{
		printf("For student%d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter RollNumber: ");
		scanf("%s",rollnum);
		printf("Enter Email: ");
		scanf("%s",email);
		fprintf(p,"Name: %s Roll Number=%s Email=%s\n",name,rollnum,email);
	}
	fclose(p);

    int counter=0; 
    char ch;
    p=fopen("std.txt", "r");  
    if(p==NULL) 
    { 
        printf("File not found!"); 
        return 0; 
    } 
    for(ch=getc(p);ch!=EOF;ch=getc(p)) 
        printf("%c",ch);
    fclose(p); 
	return 0;
}
