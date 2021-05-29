/*
This simple example will use an exported function from `lipupnp.so`,
`get_sdk_info` thats defined in `httpreadwrite.h`

Compile it with: `gcc -Wall -I ../inc -o get_sdk_info_example
get_sdk_info_example.c -L ../ -lupnp -lixml -lthreadutil`
*/

#include "httpreadwrite.h"
#include <stdio.h>

int main(){
    char buffer[200];
    get_sdk_info(buffer, sizeof(buffer));
    printf("%s", buffer);
    return 0;
}
