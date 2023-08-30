#include "random.h"
#include <stdio.h>
#include <stdlib.h>

char randchar(){
    char alphabet[] = "abcdefghijklmnopqrftuvwxyz";
    return alphabet[(rand() % 26)];
}
