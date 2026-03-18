typedef struct message {
    char type[16];
    char dest[16];
    char content[1024];
} message;