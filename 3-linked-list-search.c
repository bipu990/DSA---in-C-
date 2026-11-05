// Search an Element in list.........

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *add(int value ,struct node *first)
{
    struct node *new = malloc(sizeof (struct node));
    new->data = value;
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

void search(struct node *first,int k)
{
    struct node *p=first;
    while (p!=NULL)
    {
        if (p->data==k)
        {
            printf ("Found");
            return;
        }
        p = p->next;
    }
    printf ("Not found");
    return;
}

int main ()
{
    int x,y,z,m,n;
    printf ("Inpu 5 number : \n");
    scanf ("%d %d %d %d %d",&x,&y,&z,&m,&n);
    int j;
    printf ("Inpu the number you want to search : ");
    scanf ("%d",&j);

    struct node *first = NULL;

    first = add(x,first);
    add(y,first);
    add(z,first);
    add(m,first);
    add(n,first);

    search(first,j);

    return 0;
}
