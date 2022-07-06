#include<stdio.h>
#include<conio.h>
struct students
{
	char name[50];
	int roll;
};
void main()
{
	struct students s[50];
	int i,n;
	
printf("\n Enter the number of students:- ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
	printf("\n Enter the name:-");
	scanf("%s",s[i].name);
	printf("\n Enter the roll no.:-");
	scanf("%d",&s[i].roll);
}

	printf("\n\t\t\t STUDENTS DETAILS\n");
for(i=0;i<n;i++)
{
	printf("\n NAME:- %s\nROLL NO.:- %d\n",s[i].name,s[i].roll);
}
getch();
}


