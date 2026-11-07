//search the given number form user.

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *add(struct node *first , int value)
{
    struct node *new = malloc(sizeof(struct node));
    new->data = value ;
    new->next = NULL ;

    if (first==NULL)
    {
        return new;
    }
    struct node *s = first;
    while (s->next!=NULL)
    {
        s = s->next;
    }
    s->next = new;
    return first;
}
void dispaly(struct node *first,int m)
{
    if (first==NULL)
    {
        printf ("There is no value .");
        return ;
    }

    struct node *p = first;
    while (p != NULL)
    {
        if (p->data == m)
        {
            printf ("Found");
            return;
        }
        p = p->next;
    }

    printf ("Not Found");
}
int main ()
{
    int x,y;
    printf ("Input a number :");
    scanf ("%d",&x);

    struct node *first = NULL;

    printf ("Input the value  : \n");
    for (int i=0;i<x;i++)
    {
        scanf ("%d",&y);
        first = add (first,y);
    }
    int z;
    printf ("Inpu the value for search : ");
    scanf ("%d",&z);

    dispaly(first,z);

    return 0;
}
