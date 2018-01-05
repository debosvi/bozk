
#include <stdio.h>
#include <bozk/bytestr.h>
#include <bozk/cbuffer.h>

#define BUF_SIZE    (128)

char buffer_g[BUF_SIZE]; 
cbuffer_t cbuffer_g = CBUFFER_INIT(buffer_g, BUF_SIZE);

const char *msg0 = " ";
const char *msg1 = "msg1";
const char *msg2 = "into";
const char *msg3 = "msg2";

int main(void) {
    struct iovec io[] = {
        { (char*)msg1, str_len(msg1) },
        { (char*)msg0, str_len(msg0) },
        { (char*)msg2, str_len(msg2) },
        { (char*)msg0, str_len(msg0) },
        { (char*)msg3, str_len(msg3) },
    };
    char result[BUF_SIZE];
    int totw=cbuffer_putv (&cbuffer_g, io, 5);
    int totr=cbuffer_get (&cbuffer_g, result, BUF_SIZE);
    
    fprintf(stderr, "Total written length (%d)\n", totw);
    fprintf(stderr, "Total read length (%d), msg(%s)\n", totr, result);
    
    return 0;
}
