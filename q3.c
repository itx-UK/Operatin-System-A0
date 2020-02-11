#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

// question 3

char* reverser(char* s)
{
    char *p1, *p2;
    int i;
    p1 = &s[0];
    for(i=0; s[i]!='\0';++i)
        ;
    p2 = &s[i-1];

    while(p1<p2)
    {
      if((*p1=='a')||(*p1=='e')||(*p1=='i')||(*p1=='o')||(*p1=='u'))
      {
        while(p2!=p1)
        {
            if(*p2==' ')
            {
              char temp;
              temp = *p1;
              *p1 = *p2;
              *p2 = temp;
              --p2;
              break;
            }
            else
              --p2;
        }
        ++p1;
      }
      else
        ++p1;
    }
    return s;
    //return NULL;
}
int main()
{
    char str[100], *p;
    scanf("%s", str);
    printf("String: %s\n", str);
    p = reverser(str);
    printf("Reversed Vowels String: %s", p);
    return 0;
}
