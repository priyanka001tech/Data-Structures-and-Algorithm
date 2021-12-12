#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *start=NULL,*p;

void insert_at_beginning();
void insert_at_last();
void insert_at_any_position();
void count_display();
void deletion_at_end();
void reverse_value();
void delete_at_any_position();
void loopDetection();
void display();

int main(){
	int ch,y;
	do{
		printf("\n Enter your choice: \n");
		scanf("%d",&ch);
		switch(ch){
			case 1:insert_at_beginning();
				   break;
			case 2:insert_at_last();
				   break;
			case 3:count_display();
				   break;	   
			case 4:deletion_at_end();
				   break;
			case 5:reverse_value(start);
				   break;	
			case 6:insert_at_any_position();
				   break;
			case 7:delete_at_any_position();
				   break;	
			case 8:loopDetection();
				   break;	   		      
			default:printf("\n Wrong Choice");
		}
		printf("\n Do you want to continue??? Yes: press 1: ");
		scanf("%d",&y);
	}while(y==1);

}

void insert_at_beginning(){
	int n;
	struct node *p;
	p=(struct node*) malloc(sizeof(struct node));
	if(p==NULL){
		printf("Not Possible\n");
		return;
	} 
	else{
		printf("Enter the number :\n");
		scanf("%d",&n);
		p->data=n;
		p->next=NULL;
		if(start==NULL){
			start=p;
		}
		else{
			p->next=start;
			start=p;
		}	
		printf("Node inserted at the beginning\n");
	}
	
}
void insert_at_last(){
	int n;
	struct node *newNode,*temp;
	
	newNode=(struct node *)malloc(sizeof(struct node));
	if(newNode==NULL){
		printf("Not possible\n");
		return;
	}
	else{
		printf("Enter the data: ");
		scanf("%d",&n);
		newNode->data=n;
		newNode->next=NULL;
		if(start==NULL){
			start=newNode;
		}
		else{
			temp=start;
			while(temp!=NULL && temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=newNode;
			printf("The data node %d is inserted at the last\n",n);
		}
	}
}
void insert_at_any_position(){
	int idx,item,i;
	struct node* ptr=(struct node *) malloc(sizeof(struct node));
	struct node* temp;
	
	if(ptr==NULL){
		printf("Overflow");
	}
	else{
		printf("Enter the data: ");
		scanf("%d",&item);
		ptr->data=item;
		temp=start;
		printf("Enter the position you want to insert the element: ");
		scanf("%d",&idx);
		
		if(idx==1){
			ptr->next=temp;
			start=ptr;
			return;
		}
		
		for(i=0;temp!=NULL && i<idx-1;i++){
			temp=temp->next;
			if(temp==NULL){
				printf("Not Possible");
				return;
			}
		}
		
		ptr->next=temp->next;
		temp->next=ptr;
		printf("Node is inserted at idx %d",idx);
	}
	
}

void count_display(){
	int c=0;
	struct node *temp;
	temp=start;
	while(temp!=NULL){
		c++;
		temp=temp->next;
	}
	printf("The Number of nodes %d\n ",c);
	display();
	
}
void deletion_at_end(){
	struct node *t;
	struct node *temp;
	
	t=start;
	
	if(start==NULL){
		printf("Underflow");
		return;
	}
	if(start->next==NULL){
		printf("%d is deleted",start->data);
		free(start);
		start=NULL;
	}
	else{
		while(t->next!=NULL){
			temp=t;
			t=t->next;
		}
		temp->next=NULL;
		printf("%d is deleted\n",t->data);
		free(t);
		printf("After deletion the elements are: \n");
		display();
	}	
}
void delete_at_any_position(){
	struct node *t;
	struct node *temp;
	struct node *ptr;
	int i,idx;
	t=start;
	
	printf("Enter the positon ");
	scanf("%d",&idx);
	
	if(start==NULL) return;
	temp=start;
	if(idx==0){
		start=temp->next;
		free(temp);
		return;
	}
	for(i=0;temp!=NULL && i<idx-1;i++){
		temp=temp->next;
	}
	if(temp==NULL || temp->next==NULL){
		return;
	}
	struct node *next=temp->next->next;
	free(temp->next);
	temp->next=next;
	
}
void display(){
	struct node *temp;
	temp=start;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int len(){
	int c=0;
	struct node *temp;
	temp=start;
	while(temp!=NULL){
		c++;
		temp=temp->next;
	}
	return c;
	
}
void reverse_value(struct node* start){
	struct node* temp=start;
	if(temp == NULL){
		return;
	}
	reverse_value(temp->next);
	printf("%d ",temp->data);
}
void loopDetection(){

	struct node* fast=start;
	struct node* slow=start;
	int f=0;
	
	while(slow && fast && fast->next){
		slow=slow->next;
		fast=fast->next->next;
		if(fast==slow){
			printf("Cycle present\n");
			return;
		}
		else{
			printf("Cycle not present\n");
			return;
		}
	}
	
}
