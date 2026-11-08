#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *add(struct node *first,int x)
{
    struct node *new = malloc (sizeof(struct node));
    new->node = data;
    new->next = NULL;

    if (first == NULL)
    return new;

    struct node *s = first;

    while (s->next!=NULL)
    {
        s = s->next;
    }
    s->next = new;
    return first;
}
struct node *delet (struct node *first,int p)
{
    struct node *a->first;
    
    while (a->next->data == p)
    {
        struct node *temp = a->next;
        a->next = temp->next;
        free(temp);
    }
    return first;
}
void display(struct node *first)
{
    struct node *e = first;
    while (e!=NULL)
    {
        printf ("%d",e->data);
        e = e->next;
    }
    return ;
}

int main ()
{
    int x,y;
    printf ("Input a nuber : ");
    scanf ("%d",&x);

    printf ("Input the value : ");

    for (int i=1;i<=x;i++)
    {
        scanf ("%d",&y);
        first = (first,y);
    }

    int m;
    printf ("Input the value for delet : ");
    scanf ("%d",&m);

    delet(first,m);

    display(first);

    return 0;
}
