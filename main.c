#include <stdio.h>
#include <stdlib.h>
struct student{
char name[50];
int sem;
char branch[50];
};
int main()
{
struct student s;
printf("\n read name");
scanf("%s",s.name);
printf("\n read semister");
scanf("%d",&s.sem);
printf("\n read branch");
scanf("%s",s.branch);

printf("\n name=%s=",s.name);
printf("\n sem=%d",s.sem);
printf("\n brach=%s",s.branch);

    return 0;
}
