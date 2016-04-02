#ifndef LibMySQL_h
#define LibMySQL_h

#include "include/my_global.h"
#include "include/mysql.h"

extern inline const char* get_client_info() {
    return mysql_get_client_info();
}

extern inline unsigned long	get_client_version() {
  return mysql_get_client_version();
}

#endif
