#ifndef __ERRORS_H__
#define __ERRORS_H__

#include <stdio.h>
#include <error.h>

#include "class.h"

void  error_handler(const int err, const int arr_size, struct class** arr, const int path_size, struct class** path);

#endif
