#include <stdio.h>
#include "IWindows.h"

void Boot() {
    printf("I'm a WIN: %d\n", SetOSName(WINDOWS));
}