#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: pointer to head of stack
 * @line_num: line number of current operation
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int line_num)
{
        stack_t *h;
        (void)line_num;

        h = *head;
        while (h)
        {
                if (h->n > 127 || h->n <= 0)
                {
                        break;
                }
                printf("%c", h->n);
                h = h->next;
        }
        printf("\n");                                                                          }
