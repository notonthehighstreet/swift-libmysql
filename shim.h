#ifndef LibMySQL_h
#define LibMySQL_h

#ifdef __unix__
#include "include-linux/my_global.h"
#include "include-linux/mysql.h"
#else
#include "include-darwin/my_global.h"
#include "include-darwin/mysql.h"
#endif

#endif
