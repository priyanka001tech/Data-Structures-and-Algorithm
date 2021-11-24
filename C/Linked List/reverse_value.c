void reverse_value(){
	struct node *q4;
	struct node *q5;
	
	int total=0;
	q4=start;
	while(q4!=NULL){
		total++;
		q4=q4->next;
	}
	while(total!=0){
			q5=start;
			for(i=1;i<=total-1;i++){
				q5=q5->next;
			}
			printf("%d ",q5->data);
			total--;
	}
}
