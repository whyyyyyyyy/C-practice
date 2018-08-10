#include <stdio.h>
/*stack createstack(int maxsize);//创建一个最大容量为max的空堆栈
int isfull(stack s,int maxsize);//判断堆栈是否已经满了
void push(elementtape element,stack s);//@将元素压入堆栈 
elementtape pop(stack s);//@删除并返回栈顶元素
int isempty(stack s);//判断是否为空*/
//顺序存储-数组
#define maxsize N
typedef struct _stack
{
	elementtype data[maxsize];
	int top;//数组下标 
 } *stack;
void push(stack ptrs,elementtype[item])
{
if(ptrs->top==maxsize-1)
{printf("堆栈满");return;}
else {
(ptrs->top)++;
ptrs->data[prts->top]=item;
//等价于 ptrs->data 
return ;}
}
void pop(stack ptrs)
{
	if(ptrs->top==-1) printf("堆栈空");
	else {
		(ptrs->top)--;
		return(ptrs->data[ptrs->top]);
	}
}
//一个数组实现两个堆栈 并且实现空间利用最大化 即从两头向中间生长
#define maxsize N
typedef struct _stack
{
	int top1,top2;//1,2的栈顶 
	elmenttype data[maxsize];
 }stact;
 所以 当堆栈空时 top1=-1,top2=maxsize;
 void push(stack ptrs,elementtype item,int tag)
 {
 	//tag用来选择堆栈
	if(ptrs->top2-ptrs->top1==1)   printf("堆栈满");
	if(tag ==1) ptrs->data[++(ptrs->top1)]=item;
	else ptrs->data[--(ptrs->top1)]=item;
  } 
elementtype pop(stack ptrs,int tag)
 {
 	//tag用来选择堆栈
	
	if(tag ==1)
	{
	 if(ptrs->top==-1)   printf("堆栈空");
	 else 
	 return ptrs->data[(ptrs->top1)--];
    }  
	else {
		if(ptrs->top2==maxsize ) printf("堆栈空");
		else  ptrs->data[(ptrs->top1)++];
	}
  } 
  //链表实现堆栈
  typedef struct _node *stack;
  struct _node {
  	elementtype data;
  	struct _node* next;
  };
stack createstack(elementtype item)//创建头结点 误区 该节点只做为头部使用 不存放数据 
{
	stack p;
	p=(stack)malloc(sizeof(stack));
	p->data=item;
	(*p).next=NULL;
	return p;
  }  
  stack createstack()//创建头结点 当用链表操作时 头结点为左边起始 但是 填充方式也是从左边插入！填充  
{
	stack p;
	p=(stack)malloc(sizeof(stack));
	(*p).next=NULL;
	return p;
  }  
  int isempty(stack s)//链表实现无需判断链表是否满了 
  {
  	return (s->next==NULL);
  }
  void push(elementtype item,stack s)
  {
  	stack p;
  	p=(stack)malloc(sizeof(stack));
  	p->data=item;
  	p->next=s->next;
  	s->next=p;
  }
  elementtype pop(stack s)
  {
  	stack q;
  	if(isempty(s)==1) {printf("链表为空");return NULL；} 
  	else
	 {
	  q=s->next;
	  s->next=q->next;
	  int r=q->data;
	  free(q);
	  return r;
  	 }
  }
  //利用堆栈来研究后缀计算的问题 
  
  
  
  
  
  
  
  
  
  
  
  
  
   
  
  
  
  
  
  
  
  
  
