#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

struct node
{
    int info;
    struct node *link;
};

int single_linkedList_func();
struct node *create_list(struct node *start);
void display(struct node *start);
void count(struct node *start);
void search(struct node *start, int data);
struct node *add_at_beg(struct node *start, int data);
struct node *add_at_end(struct node *start, int data);
struct node *add_before(struct node *start, int data, int item);
struct node *add_after(struct node *start, int data, int item);
struct node *add_at_pos(struct node *start, int data, int pos);
struct node *del_node(struct node *start, int data);
struct node *reverse(struct node *start);

#endif // LINKEDLIST_H_INCLUDED
