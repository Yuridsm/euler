#ifndef OPERATINGSYSTEM_H
#define OPERATINGSYSTEM_H

typedef enum {
    LINUX,
    WINDOWS,
    MACOS,
    BSD,
    KNOWLEDGE
} OS;

OS SetOSName(OS os);

void Boot();

#endif