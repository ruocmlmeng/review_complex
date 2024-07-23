#include <stdio.h>
#include"complex.h"
int main(void)
{
    complex *a = creatComplex(3.0,4.0);
    complex *b = creatComplex(2.0,3.0);

    complex * sum = add(a,b);
    complex * diff= sub(a,b);
    complex * shang = division(a,b);

    printComplex(sum);
    printComplex(diff);
    printComplex(shang);

    freeComplex(a);
    freeComplex(b);
    freeComplex(sum);
    freeComplex(shang );
    return 0;
}
