#include "compex.h"
struct __attribute__((compex_tag("x"))) foo { int x; };
int main(int argc, char **argv) { return 0; }
