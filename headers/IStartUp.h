#ifndef ISTARTUP_H
#define ISTARTUP_H

// _WIN32, _WIN64, _APPLE_, _MACH_, BSD, OpenBSD

#ifdef __linux__
#include "ILinux.h"
#endif

#ifdef _WIN32
#include "IWindows.h"
#endif

#endif