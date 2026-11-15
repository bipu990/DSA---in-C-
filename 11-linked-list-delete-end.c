#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *add(struct node *first,int value)
{
    struct node *new = malloc(sizeof (struct node));
    new->data = value;
    new->next = NULL;

    if (first == NULL)
    return new;

    struct node *s = first;

    while(s->next!=NULL)
    s = s->next;

    s->next = new;

    return first;
}

struct node *delet(struct node *first)
{
    if (first == NULL)
    return first;

    if (first->next == NULL)
    {
        free(first);
        first = NULL;
        return first;
    }

    struct node *p = first;
    while(p->next->next!=NULL)
    {
        p = p->next;
    }

    struct node *temp = p->next;
    p->next = NULL;
    free(temp);

    return first;
}
void display(struct node *first)
{
    if (first == NULL)
    {
        printf ("There is no value .");
        return ;
    }
    printf ("Now the list is : \n");
    struct node *p = first;
    while (p!=NULL)
    {
        printf ("%d\n",p->data);
        p = p->next;
    }
    return ;
}

int main ()
{
    int x,u;
    printf ("Input a number : ");
    scanf ("%d",&x);

    struct node *first = NULL;

    printf ("Input the value :\n");
    for (int i = 1;i<=x;i++)
    {
        scanf ("%d",&u);
        first = add(first,u);
    }

    first = delet(first);

    display(first);

    return 0;
}
