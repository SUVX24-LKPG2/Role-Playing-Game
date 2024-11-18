#ifndef UTILS_H
#define UTILS_H

#include <unistd.h>
#ifndef _WIN32
#include <termios.h>

void setRawMode();
void resetRawMode();
#endif

#endif // UTILS_H