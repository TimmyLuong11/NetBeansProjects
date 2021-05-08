/* p_and_s.c -- pointers and strings */
#include <stdio.h>
void p_and_s(void)
{
    const char * mesg = "Don't be a fool!";
    const char * copy;
    
    copy = mesg;
    printf("%s\n", copy);
    printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
    printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);
}
