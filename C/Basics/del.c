#include <stdio.h>
#include <stdlib.h>
struct st
{
    int a;
    char b;
};

int main()
{
    struct st *st_ptr;
    st_ptr = malloc(sizeof(struct st));
    printf("%d\n", sizeof(struct st));
    return 0;
}