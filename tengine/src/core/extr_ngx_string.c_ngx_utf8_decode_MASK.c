
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;



uint32_t
FUNC_0(u_char **VAR_0, size_t VAR_1)
{
    size_t VAR_2;
    uint32_t VAR_3, VAR_4, VAR_5;

    VAR_3 = **VAR_0;

    if (VAR_3 >= 0xf0) {

        VAR_3 &= 0x07;
        VAR_5 = 0xffff;
        VAR_2 = 3;

    } else if (VAR_3 >= 0xe0) {

        VAR_3 &= 0x0f;
        VAR_5 = 0x7ff;
        VAR_2 = 2;

    } else if (VAR_3 >= 0xc2) {

        VAR_3 &= 0x1f;
        VAR_5 = 0x7f;
        VAR_2 = 1;

    } else {
        (*VAR_0)++;
        return 0xffffffff;
    }

    if (VAR_1 - 1 < VAR_2) {
        return 0xfffffffe;
    }

    (*VAR_0)++;

    while (VAR_2) {
        VAR_4 = *(*VAR_0)++;

        if (VAR_4 < 0x80) {
            return 0xffffffff;
        }

        VAR_3 = (VAR_3 << 6) | (VAR_4 & 0x3f);

        VAR_2--;
    }

    if (VAR_3 > VAR_5) {
        return VAR_3;
    }

    return 0xffffffff;
}
