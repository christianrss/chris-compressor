/* chris_compressor.c */
#include <chris_compressor.h>

amtlist *mkamtlist() {
    int64 size;
    amtlist *p;

    size = (sizeof(struct s_amtlist)*Blocksize);
    p = (amtlist *)alloc(size);
    if (!p)
        return (amtlist *)0;
    zero($1 p, size);

    p->length = 0;
    p->capacity = Blocksize;

    return p;
}

void zero(int8 *dst, int64 size) {
    int8 *p;
    int64 n;

    for (p=dst, n=size; n; p++, n--)
        *p = 0;

    return;
}

int main() {
    return 0;
}