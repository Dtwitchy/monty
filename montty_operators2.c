#include "monty.h"

/**
 * f_pop - prints the top
 * @head: pointer to head of stack
 * @line_num: line number of current operation
 * Return: no return
*/
void f_pop(stack_t **head, unsigned int line_num)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}


/**
 * f_pint - prints the top
 * @head: pointer to head of stack
 * @line_num: line number of current operation
 * Return: no return
*/
void f_pint(stack_t **head, unsigned int line_num)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

/**
  *f_nop- nothing
  *@head: stack head
  *@line_num: line number of current operation
  *Return: no return
 */
void f_nop(stack_t **head, unsigned int line_num)
{
	(void) line_num;
	(void) head;
}
