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
