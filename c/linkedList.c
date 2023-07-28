#include <malloc.h>
#include <stdio.h>
typedef struct node {
      int data;
      struct node *next;
} node;

node *create() {
      char ch;
      node *head, *last, *new;
      char choice;
      head = (node *)malloc(sizeof(node));
      printf("Enter Data : ");
      scanf("%d", &head->data);
      head -> next = NULL;
      last = head;
      printf("More (y/f/n)? ");
      scanf(" %c",&ch);

      while (ch == 'y' || ch == 'Y' || ch == 'f' || ch == 'F') {
        new = (node *)malloc(sizeof(node));
        printf("Enter Data : ");
        scanf("%d", &new->data);
        if(ch == 'f' || ch == 'F'){
            new->next = head;
            head = new;
        }else if(ch == 'y' || ch == 'Y'){
            new -> next = NULL;
            last -> next = new;
            last = new;
        }
        printf("More (y/f/n)? ");
        scanf(" %c", &ch);
      }
      return head;
};
node * insertAtFirst(node *h){
    node *n;
    n = (node *)malloc(sizeof(node));
    printf("Enter Data to add at First : ");
    scanf("%d", &n->data);
    n->next = h;
    h = n;
    return h;
};

node * insertAtLast(node *h){
    node *n, *z;
    n = (node *)malloc(sizeof(node));
    printf("Enter Data to add at Last : ");
    scanf("%d", &n->data);
    n->next = NULL;
    z = h;
    while (z->next != NULL) z = z -> next; 
    z -> next = n;
    return h;
};

node * insertAtPositionBefore(node *h,int pos){
    node *n, *z=h;
    int counter = 0;
    while (z->next != NULL) {
        counter++;
        if( counter == (pos-1)){
            n = (node *)malloc(sizeof(node));
            printf("Enter Data to add at Position %d : ",pos);
            scanf("%d", &n->data);
            n -> next = z -> next;
            z -> next = n;
            break;
        };
        z = z->next;
    }; 
    return h;
};

node * insertAtPositionAfter(node *h,int pos){
    node *n, *z=h;
    int counter = 0;
    while (z->next != NULL) {
        counter++;
        if( counter == (pos)){
            n = (node *)malloc(sizeof(node));
            printf("Enter Data to add at Position %d : ",pos+1);
            scanf("%d", &n->data);
            n -> next = z -> next;
            z -> next = n;
            break;
        };
        z = z->next;
    }; 
    return h;
};
void traverse(node *h) {
      while (h != NULL) {
            printf("%d - %d\n", h->data,(int) h);
            h = h->next;
      }
};
node * deleteFirst(node *h){
    node *z;
    z = h;
    h = h->next;
    free(z);
    return h;
};
node * deleteLast(node *h){
    node *z;
    z = h;
    while(z->next != NULL){
        if(z->next->next == NULL){
            //printf("%d\n",z->next->data);
            free(z -> next);
            z->next = NULL;
            break;
        }
        z = z->next;
    }
    return h;
};
node * deleteAt(node *h, int pos){
    node *z,*t;
    int c=0;
    z = h;
    while(z!=NULL){
        c++;
        if(c == pos-1){
            t = z -> next;
            z->next = t->next;
            free(t);
            break;
        }
        z = z->next;
    }
    return h;
};
node * deleteArr(node *h){
    int start,end;
    printf("Enter start posion of delition : ");
    scanf("%d",&start);
    printf("Enter end posion of delition : ");
    scanf("%d",&end);

    node *z,*s,*temp;
    int c=0;
    z = h;
    while(z!=NULL){
        c++;

        if(c == start-1) s = z;

        if(c >= start && c<= end){
            temp = z;
            z = z->next;
            free(temp);
            continue;
        }

        if(c== end+1) s -> next = z;

        z = z->next;
    }
    return h;
};
int main() {
      node *head;
      head = create();
      //head = insertAtFirst(head);
      //head = insertAtLast(head);
      //head = insertAtPositionBefore(head,3);
      //head = insertAtPositionAfter(head,3);
      traverse(head);
      printf("After deletion : \n");
      //head = deleteFirst(head);
      //head = deleteAt(head,2);
      //head = deleteLast(head);
      head = deleteArr(head);
      traverse(head);
      return 0;
}
