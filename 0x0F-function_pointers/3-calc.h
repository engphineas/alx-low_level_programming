#ifndef CALC_H
#define CALC_H
/**
 * struct ops - A struct operator.
 * @ops: The operator captured.
 * @f: The associated function from get op func.
 */
typedef struct ops
{
	char *ops;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
