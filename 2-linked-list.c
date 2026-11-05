#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *add(int value ,struct node *first)
{
    struct node *new = malloc (sizeof (struct node));
    new->data = value;
    new->next = NULL;

    if (first == NULL)
    {
        return new;
    }
    struct node *s = first;

    while (s->next != NULL)
    {
        s = s->next;
    }
    s->next = new;  

    return first;
}

void dispaly(struct node *first)
{
    if (first == NULL)
    {
        printf ("Ther is no list.");
        return ;
    }
    printf ("The list is : \n");
    struct node *p = first;
    while (p!=NULL)
    {
        printf ("%d\n",p->data);
        p = p->next;
    }
}

int main ()
{
    int x,y;
    printf ("Input a numer :");
    scanf ("%d",&x);

    struct node *first = NULL;

    for (int i=0;i<x;i++)
    {
        scanf ("%d",&y);
        first = add(y,first);
    }
    dispaly(first);

    return 0;
}
