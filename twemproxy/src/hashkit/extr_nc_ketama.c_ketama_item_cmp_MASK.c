
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct continuum {scalar_t__ value; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
    const struct continuum *VAR_2 = VAR_0, *VAR_3 = VAR_1;

    if (VAR_2->value == VAR_3->value) {
        return 0;
    } else if (VAR_2->value > VAR_3->value) {
        return 1;
    } else {
        return -1;
    }
}
