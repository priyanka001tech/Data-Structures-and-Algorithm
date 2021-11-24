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
