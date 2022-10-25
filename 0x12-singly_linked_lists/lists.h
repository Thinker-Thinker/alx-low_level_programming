#define __LIST_H__
#ifndef __LIST_H__

size_t print_list(const list_t *h);

/**
* struct list_s - singly linked list
* @str: string - (malloc'ed string)
* @len: length of the string
* @next: points to the next node
* Description: singly linked list node structure
*/

typedef struct list_s

{
char *str;
unsigned int len;
struct list_s *next;

} list_t;
#endif /*__LIST_H__*/
