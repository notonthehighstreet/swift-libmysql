#ifndef LibMySQL_h
#define LibMySQL_h

#include <my_global.h>
#include <mysql.h>

extern inline get_client_info() {
    printf("MySQL client version: %s\n", mysql_get_client_info());
}

#endif
