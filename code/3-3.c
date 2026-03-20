#include <stdio.h>
#include <stdarg.h>

int average(int count, ...){
    va_list ap;
    va_start(ap, count);
    int avg = 0;
    for(int i = 0; i < count; i++){
        avg += va_arg(ap, int);
    }
    avg /= count;
    va_end(ap);
    return avg;
}

int main(){
    printf("%d\n", average(3, 10, 20, 30));
    printf("%d\n", average(5, 10, 20, 30, 40, 50));
    return 0;
}
