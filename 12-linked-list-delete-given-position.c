#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data ;
    struct node *next;
};

struct node *add(struct node *first,int value)
{
    struct node *new = malloc(sizeof(struct node));
    new->data = value;
    new->next = NULL;

    if (first == NULL)
    return new;

    struct node *s = first;

    while (s->next!=NULL)
    s = s->next;

    s->next = new;
    return first;
}

struct node *delet(struct node *first,int position)
{
    if (first == NULL)
    return first;

    if (position == 1)
    {
        struct node *m = first;

        struct node *temp = m;
        m = m->next;
        free(temp);

        first = m;

        return first;
    }

    struct node *s = first;

    for (int i=1;i<position-1;i++)
    {
        s = s->next;
    }

    struct node *temp = s->next;
    s->next = temp->next;
    free(temp);

    return first;
}
void display (struct node *first)
{
    if (first == NULL)
    return ;

    struct node *p = first;
    printf ("Now the list is : \n");
    while (p != NULL)
    {
        printf ("%d\n",p->data);
        p = p->next;
    }
    return;
}
int main ()
{
    int x,y;
    printf ("Inpt a number : ");
    scanf ("%d",&x);

    struct node *first = NULL;

    printf ("Input the value : \n");
    for (int i=1;i<=x;i++)
    {
        scanf ("%d",&y);
        first = add(first,y);
    }
    int n;
    printf ("Input the position : ");
    scanf ("%d",&n);

    first = delet(first,n);

    display(first);

    return 0;
}
