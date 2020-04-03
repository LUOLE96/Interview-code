#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char *mystrrev(char *const dest,const char *const src)
{
    if(dest == NULL && src == NULL){
        return NULL;
    }
    
    char *addr = dest;
    int val_len = strlen(src);
    dest[val_len] = '\0';
    int i;
    for(i = 0;i < val_len;i++){
        *(dest+i) = *(src+val_len-i-1);
    }

    return addr;
}

int main(void)
{
    char *str = "hello world";
    char *str1 = NULL;
    str1 = (char *)malloc(20);
    if(str1 == NULL)
        cout << "malloc failed";

    cout << mystrrev(str1,str);
    free(str1);
    str1 = NULL;
}