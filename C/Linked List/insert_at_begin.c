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
