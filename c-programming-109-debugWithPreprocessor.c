#include <stdio.h>
#include <stdlib.h>

#define DEBUG(fmt, ...) fprintf(stderr, fmt, __VA_ARGS__)

int process(int i, int j, int k) {
    return i + j + k;
}

int process2(int i, int j) {
    int val = 0;

    DEBUG("process2(%d, %d)\n", i, j);

    val = i * j;

    DEBUG("return %d\n", val);

    return val;
}

int main(int argc, char *argv []) {
    int arg1 = 0, arg2 = 0;

    if (argc > 1) {
        arg1 = atoi(argv[1]);
    }

    if (argc == 3) {
        arg2 = atoi(argv[2]);
    }

    DEBUG("processed %i arguments\n", argc - 1);
    DEBUG("arg1 = %i, arg2 = %i\n", arg1, arg2);

    printf("%i\n", process2(arg1, arg2));

    int i, j, k, nread;

    nread = scanf("%d %d %d", &i, &j, &k);

    DEBUG("Number of integers read = %i\n", nread);
    DEBUG("i = %i, j = %i, k = %i\n", i, j, k);

    printf("%d\n", process(i, j, k));

    return 0;
}