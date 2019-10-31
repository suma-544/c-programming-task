#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 20
struct book
{
char title[20];
char author[20];
char genre[20];
};
void output(struct book v[],int n);
void main()
{
    struct book b[SIZE];
    int n,i;
  printf("Enter the Numbers of Books:");
  scanf("%d",&n);
  printf("\n");
  for(i=0;i<n;i++)
{
printf("\t=:Book %d Detail:=\n",i+1);
printf("\nEnter the Book title:\n");
scanf("%s",b[i].title);
printf("Enter the Author of Book:\n");
scanf("%s",b[i].author);
printf("Enter genre of Book:\n");
scanf("%s",&b[i].genre);
}
output(b,n);
getch();
}
void output(struct book v[],int n)
{
int i,t=1;
for(i=0;i<n;i++,t++)
{
printf("\n");
printf("Book No.%d\n",t);
printf("\t\tBook %d title is=%s \n",t,v[i].title);
printf("\t\tBook %d Author is=%s \n",t,v[i].author);
printf("\t\tBook%d genre is=%s \n",t,v[i].genre);
printf("\n");
}
}
