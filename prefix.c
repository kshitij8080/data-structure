#include<string.h>
#include<stdio.h>
#include<ctype.h>
#define max 100

struct stack
{
 char a[max];
 int top;
}s;

void init()
{
 s.top==-1;
}

int isempty()
{
 if(s.top==-1)
 return 1;
 else
 return 0;
}

int isfull()
{
 if(s.top==max-1)
 return 1;
 else 
 return 0;
}

void push(char ch)
{
 if(isfull())
 printf("stack is full don't push...");
 else
 {
  s.top++;
  s.a[s.top]=ch;
 }
}

int pop()
{
 char ch;
 if(isempty())
 printf("stack is empty don't pop...");
 else
 {
  ch=s.a[s.top];
  s.top--;
  return ch;
 }
}

int priority(char x)
{
 if(x=='(')
 return 0;
 if(x=='+'||x=='-')
 return 1;
 if(x=='*'||x=='/')
 return 2;
 if(x=='$'||x=='^')
 return 3;
 return 0;
}

int main()
{
 char s1[100],prefix[100],ch;
 int i,j=0;
 printf("Enter string:");
 scanf("%s",&s1);
 strrev(s1);
 for(i=0;s1[i]!='\0';i++)
 {
  if(s1[i]=='(')
   s1[i]=')';
  else if(s1[i]==')')
   s1[i]='(';
 }
init();
for(i=0;s1[i]!='\0';i++)
{
 if(isalpha(s1[i]))
  prefix[j++]=s1[i];
 else if(s1[i]=='(')
  push(s1[i]);
 else if(s1[i]==')')
 {
  while((ch=pop())!='(')
 {
  prefix[j++]=ch;
 }
}
else
{
while(priority(s.a[s.top])>=priority(s1[i]))
 {
  prefix[j++]=pop();
 }
 push(s1[i]);
}
}
while(!isempty())
 {
  prefix[j++]=pop();
 }
prefix[j]='\0';
strrev(prefix);
printf("\n prefix string:%s",prefix);
}