#include "random.h"
#include <stdlib.h>

/* Returns a random char between'A' & 'Z' */
char randchar() {
    return 'A' +  rand() % 26;
}
