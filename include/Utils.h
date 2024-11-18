#ifndef UTILS_H
#define UTILS_H
#include <termios.h>
#include <unistd.h>

void setRawMode();
void resetRawMode();

#endif // UTILS_H