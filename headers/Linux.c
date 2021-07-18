#include <stdio.h>
#include "ILinux.h"

void Boot() {
    printf("I'm a linux: %d\n", SetOSName(LINUX));
}