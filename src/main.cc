#include <stdio.h>

int main(int argc, char *argv[])
{
    fprintf(stderr, "Hello World from %s \n", __func__);
    return 0;
}
