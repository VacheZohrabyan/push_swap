#include "../inc/ft_push_swap.h"

int main(int argc, char** argv)
{
    if (argc < 2) {
        write (2, "Error\n", 6);
        return (0);
    }
    t_stack* a;
    t_stack* b;
    int i = 1;
    a = NULL;
    b = NULL;
    printf("hello\n");
    ft_chack_element(&a, argc, argv);
    while (!ft_is_sorted(a))
        ft_stack_sorted(&a, &b);
    printf("hello\n");
    system("leaks a.out");
}