#include<stdio.h>
#include<stdlib.h>

void create();
void insert_at_beginning();
void insert_at_last();
void display();

struct node{
	int data;
	struct node *prev;
	struct node *next;
};

struct node *start=NULL, *last=NULL;

int main(){
	
	int ch,y;
	create();
	do{
		printf("\n Enter your choice \n");
		scanf("%d",&ch);
		switch(ch){
			case 1: insert_at_beginning();
					break;
			case 2: insert_at_last();
					break;
			case 3: display();
					break;
			default: printf("\n Wrong choice");						
		}
		printf("\n Do you want to continue ??? YES:  Press 1: ");
		scanf("%d", &y);
	}while(y==1);
}

void create(){
	int n,i,d;
	struct node *p,*q;
	printf("Enter the no of nodes: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		p=(struct node*) malloc(sizeof(struct node));
		if(p==NULL){
			printf("\n Node creation is not possible");
		}
		else{
			printf("\nEnter the data ");
			scanf("%d",&d);
			p->data=d;
			
			if(start==NULL){
				start=p;
				q=start;
			}
			p->next=start;
			p->prev=q;
			start->prev=p;
			q->next=p;
			q=p;
			last=p;
			printf("\n Node has been created");
		}
	}
}
void insert_at_beginning(){
	struct node *p1;
	int d1;
	p1=(struct node*)malloc(sizeof(struct node));
	if(p1==NULL){
		printf("\n Node create not possible");
	}
	else{
		printf("\n Enter the data: ");
		scanf("%d",&d1);
		p1->data=d1;
		p1->next=start;
		start->prev=p1;
		last->next=p1;
		p1->prev=last;
		start=p1;
		
	}
}
void insert_at_last(){
	struct node *p1;
	int d1;
	p1=(struct node*)malloc(sizeof(struct node));
	if(p1==NULL){
		printf("\n Node create not possible");
	}
	else{
		printf("\n Enter the data: ");
		scanf("%d",&d1);
		p1->data=d1;
		last->next=p1;
		p1->prev=last;
		p1->next=start;
		start->prev=p1;
		last=p1;
		
	}
}
void display(){
	struct node* temp;
	temp=start;
	if(temp==NULL){
		printf("\n List is empty");
	}
	do{
		printf("%d ",temp->data);
		temp=temp->next;
	}while(temp!=start);
}
