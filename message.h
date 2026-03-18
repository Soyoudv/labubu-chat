#include "user.h"

typedef struct {
    char type[16];
    user_t* source;
    user_t* dest;
    char content[1024];
} message;