#include <stdio.h>
#include <stdlib.h>
typedef struct _node
{
	int value;
	struct _node *next;
 } node;
 typedef struct _list
{
	struct node *head;
	struct node *tail;
 } list;
 void add(list *plist,int number);
 void nprint(list *list);
 void nsearch(list *list);
 void ndelete(list *list);
 void alldelete(list *list) ;
 void alldelete(list *list)
 {
 	node *p,*q;
 	for(p=list->head;p;p=q)
 	 {
 	 	q=p->next;
 	 	free(p);
	  }
 	
 }
 int main(int argc,char const *argv[])
 {
 	list list1;
 	int number=-1;
 	list1.head=list1.tail=NULL;
 	do{
 		scanf("%d",&number);
 		add(&list1,number);
	 } while(number!=-1);
 	nprint(&list1);
 	nsearch(&list1);
 	ndelete(&list1);
 	
 	
 	return 0;
 }
 void ndelete(list *list)
 {
 	node *p,*q;
 	int number;
 	scanf("%d",&number);
	 for(q=NULL,p=list->head;p;q=p,p=p->next)
	 {
	 	
 			if(p->value==number)
 			{
 				if(q)
 		    	{ 
			 q->next=p->next;
	        	}
	        	else list->head=p->next; 
			 free(p);
 			 break;
			   	}
 	     	}
		 
	  } 
 	
  void nsearch(list *list)
{
	int number;
	node *p;
	scanf("%d",&number);
 	int isfound=0;
 		for(p=list->head;p;p=p->next)
 		{	
 			if(p->value==number)
 			 isfound=1;
 			 break;
		 }
		 if(!isfound)printf("没找到！");
		 else printf("找到了！");
}
  void nprint(list *list)
  {
  	node *p;
  	for(p=list->head;p;p=p->next)
  	{
  		printf("%d  ",p->value);
	  }
	  printf("\n");
  	
  }
 void add(list *plist,int number)
 {
 	node *p=(node *)malloc(sizeof(node));
 	p->value=number;
 	node *q;
 	p->next=NULL;
 	if(plist->tail)
 	{
 		q=plist->tail;
		 q->next=p;
	}
	  
 	plist->tail = p;
 	if(plist->head==NULL)
 	  plist->head = p;
 	
 }
