#include <stdio.h>
/*stack createstack(int maxsize);//����һ���������Ϊmax�Ŀն�ջ
int isfull(stack s,int maxsize);//�ж϶�ջ�Ƿ��Ѿ�����
void push(elementtape element,stack s);//@��Ԫ��ѹ���ջ 
elementtape pop(stack s);//@ɾ��������ջ��Ԫ��
int isempty(stack s);//�ж��Ƿ�Ϊ��*/
//˳��洢-����
#define maxsize N
typedef struct _stack
{
	elementtype data[maxsize];
	int top;//�����±� 
 } *stack;
void push(stack ptrs,elementtype[item])
{
if(ptrs->top==maxsize-1)
{printf("��ջ��");return;}
else {
(ptrs->top)++;
ptrs->data[prts->top]=item;
//�ȼ��� ptrs->data 
return ;}
}
void pop(stack ptrs)
{
	if(ptrs->top==-1) printf("��ջ��");
	else {
		(ptrs->top)--;
		return(ptrs->data[ptrs->top]);
	}
}
//һ������ʵ��������ջ ����ʵ�ֿռ�������� ������ͷ���м�����
#define maxsize N
typedef struct _stack
{
	int top1,top2;//1,2��ջ�� 
	elmenttype data[maxsize];
 }stact;
 ���� ����ջ��ʱ top1=-1,top2=maxsize;
 void push(stack ptrs,elementtype item,int tag)
 {
 	//tag����ѡ���ջ
	if(ptrs->top2-ptrs->top1==1)   printf("��ջ��");
	if(tag ==1) ptrs->data[++(ptrs->top1)]=item;
	else ptrs->data[--(ptrs->top1)]=item;
  } 
elementtype pop(stack ptrs,int tag)
 {
 	//tag����ѡ���ջ
	
	if(tag ==1)
	{
	 if(ptrs->top==-1)   printf("��ջ��");
	 else 
	 return ptrs->data[(ptrs->top1)--];
    }  
	else {
		if(ptrs->top2==maxsize ) printf("��ջ��");
		else  ptrs->data[(ptrs->top1)++];
	}
  } 
  //����ʵ�ֶ�ջ
  typedef struct _node *stack;
  struct _node {
  	elementtype data;
  	struct _node* next;
  };
stack createstack(elementtype item)//����ͷ��� ���� �ýڵ�ֻ��Ϊͷ��ʹ�� ��������� 
{
	stack p;
	p=(stack)malloc(sizeof(stack));
	p->data=item;
	(*p).next=NULL;
	return p;
  }  
  stack createstack()//����ͷ��� �����������ʱ ͷ���Ϊ�����ʼ ���� ��䷽ʽҲ�Ǵ���߲��룡���  
{
	stack p;
	p=(stack)malloc(sizeof(stack));
	(*p).next=NULL;
	return p;
  }  
  int isempty(stack s)//����ʵ�������ж������Ƿ����� 
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
  	if(isempty(s)==1) {printf("����Ϊ��");return NULL��} 
  	else
	 {
	  q=s->next;
	  s->next=q->next;
	  int r=q->data;
	  free(q);
	  return r;
  	 }
  }
  //���ö�ջ���о���׺��������� 
  
  
  
  
  
  
  
  
  
  
  
  
  
   
  
  
  
  
  
  
  
  
  
