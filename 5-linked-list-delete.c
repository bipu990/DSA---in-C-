//Delete a Node by Value in list

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *delet(struct node *first , int m)
{
    struct node *s = first;
    while (s->next->data!=m)
    {
        s = s->next ;
    }
    struct node *temp = s->next;
    s->next = temp->next;
    free(temp);

    return first;
}
void display(struct node *first)
{
    struct node *n = first;
    // n->next e node er address thake tai eta null hote pare .Tahole n kivabe null hoy
    //eivabe null hoy ...
    //n = 30-এর address
    //n = n->next;
    //n = NULL
    while (n != NULL) 
    {
        printf ("%d",n->data);
        n = n->next;
    }
    return ;

}

int main ()
{
    int x,y,z;
    printf ("Input the value : \n");
    scanf ("%d %d %d",&x,&y,&z);

    struct node *first = NULL;

    struct node *a = malloc(sizeof (struct node));
    a->data = x;
    a->next = NULL;
    struct node *b = malloc(sizeof (struct node));
    b->data = y;
    b->next = NULL;
    struct node *c = malloc(sizeof (struct node));
    c->data = z;
    c->next = NULL;

    first = a;
    a->next = b;
    b->next = c;

    int g;
    printf ("Input the value for delet : ");
    scanf ("%d",&g);

    first = delet(first,g);

    display(first);

    return 0;
}
