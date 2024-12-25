#include <stdlib.h>
#include <stdio.h>
typedef struct node {
	int info;
	struct node* next;
}Node;
typedef Node* NodePtr;

NodePtr get_node() {
	NodePtr p;
	p = (NodePtr)malloc(sizeof(Node));
	if (p == NULL) {
		printf("error!");
		exit(1);
	}
	else return p;
}
void insert_tail(NodePtr* p, int data) {
	NodePtr q, t;
	q = get_node();
	q->info = data;
	q->next = NULL;
	t = *p;
	if(t!=NULL){
		while (t->next != NULL) {
			t = t->next;
		}
		t->next = q;
	}
	else {
		*p = q;
	}
	return;
}




























int main() {
	NodePtr list,q;
	list = NULL;
	insert_tail(&list, 1);
	insert_tail(&list, 2);
	insert_tail(&list, 3);
	insert_tail(&list, 4);
	insert_tail(&list, 5);
	q = list;
	printf("list->");
	while (q != NULL) {
		printf("%d->", q->info);
		q = q->next;
	}
	printf("NULL");







	return 0;
}