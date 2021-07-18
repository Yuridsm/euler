#include <stdio.h>
#include "IOperatingSystem.h"

void StartOperatingSystem() {
    printf("I am BSD Operating System");
}

OS WhoAmI() {
    return BSD;
}