#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct List{
    int data;
    struct List *next;
}List;

List *list_create(void)
{
    struct List *head,*tail,*p;
    int e;
    head = (List *)malloc(sizeof(List));
    head->data = 100;
    tail = head;
    printf("\nList create ,input number(end of 0):");
    scanf("%d",&e);
    while(e){
        p = (List *)malloc(sizeof(List));
        p->data = e;
        tail->next = p;
        tail = p;
        scanf("%d",&e);
    }
    tail->next = NULL;
    return head;
}

List *list_reverse(List *head)
{
    List *p,*q,*r;
    p = head;
    q = p->next;
    while(q != NULL){
        r = q->next;
        q->next = p;
        p = q;
        q = r;
    }
    head->next = NULL;
    head = p;
    return head;
}

int main(void)
{
    struct List *head,*p;
    int d;
    head = list_create();
    printf("\n");
    for(p = head->next;p;p = p->next)
        printf("--%d--",p->data);

    head = list_reverse(head);
    printf("\n");

    for(p = head;p;p = p->next)
        printf("--%d--",p->data);    

    return 0;
}
