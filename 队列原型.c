//����ʵ�� - ˳��洢 -����
 #define maxsize N
 typedef struct _queue
 {
 	elementtype data[N];
 	int rear;
 	int front;
 }*queue;
 queue createq()
 {
 	queue q;
 	q=(queue)malloc(sizeof(queue));
 	q->front=-1;
 	q->rear=-1;
 	return q;
 }
 //front == rear ���Ա�ʾqueueΪ�ջ����� ����ֻʹ��n-1���ռ� �Դ˷�ֹ���ֲ�� 
 int isempty(queue q)
 {
 	if(q->front==q->rear) return 1;
 	else return 0;
 }
 int isfull(queue q)
 {
 	if((q->rear+1)%N==q->front) return 1;
 	return 0;
 }
 void addq(queue q,elementtype item)
 {
 	if(isfull(q)) return;
 	else {
 		q->rear=(q->rear+1)%N;
 		q->data[(q->rear++)]=item;
 		return ;
	 }
 }
 elementtype deleteq(queue q)
 {
 	if(isempty(q)) return NULL;
 	else{
 		q->front=(q->front+1)%N;
 		return q->front;
	 }
 	
 }
 //����ʵ��
 typedef struct _queue
 {
 	elementtype data;
 	struct _queue *next;
 }*queue;
 typedef struct _ptr
 {
 	queue front;
 	queue rear;
 }*ptr;
 elementtype deleteq(ptr q)
 {
 	if(q->front==NULL) return ERROR;//���п�
    	queue p;
    	int d;
    	queue p;
 		p=q->front; 
	if(q->front==q->rear)  q->front=q->rear=NULL;
 	else{
 		p=q->front;
 		q->front=p->next;
 	}
 		d=p->data;
 		free(p);
 		return d;		
	 
 }
 
 
 
 
 
 
 
