/*
Calls function http_RecvMessage reading an HTTP request from a file
*/

#include <stdio.h>
#include <stdlib.h>

#include "httpreadwrite.h"
#include "httpparser.h"

int main(int argc, char *argv[]){
    char buffer[2 * 1024];
    int content_size = 0;
    http_parser_t parser;
    int timeout = 5;
    int http_error_code;
    int ret_code;

    int fd;
    if ((fd = open(argv[1], O_RDONLY)) == -1) {
        printf("Error opening the file");
        exit(1);
    }
    content_size = read(fd, buffer, sizeof(buffer));
    ret_code = http_RecvMessage(buffer, content_size, &parser, HTTPMETHOD_UNKNOWN, &timeout, &http_error_code);
    return 0;
}
