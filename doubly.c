#include"doubly.h"
int main()
{
	int ch,num;
  struct node *list=NULL;
  do
  {
  	printf("\n 1-create \n 2-disp \n 3-insert beginning:");
  	printf("\n Enter choice:");
  	scanf("%d",&ch);
  	switch(ch)
  	{
       case 1:list=create(NULL);
	           break;
	   case 2: disp(list);
	           break;
	   case 3:printf("Enter number:");
	          scanf("%d",&num);
			  list=insertbeg(list,num);
			  break;		
	}
  }while(ch<4);
}
