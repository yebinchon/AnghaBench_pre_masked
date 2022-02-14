
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keysym {scalar_t__ xsym; } ;



__attribute__((used)) static int FUNC_0 (const void *VAR_0, const void *VAR_1)
{
    const struct keysym *VAR_2 = VAR_0, *VAR_3 = VAR_1;

    if (VAR_2->xsym > VAR_3->xsym)
        return +1;
    if (VAR_2->xsym < VAR_3->xsym)
        return -1;
    return 0;
}
