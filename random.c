#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
    char alphabet[] = "abcdefghijklmnopqrftuvwxyz";
    return alphabet[(rand() % 26)];
}
