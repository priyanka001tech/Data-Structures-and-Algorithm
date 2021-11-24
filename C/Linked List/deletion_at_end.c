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
