
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(unsigned short* VAR_0, float* VAR_1)
{
    unsigned VAR_2 = *VAR_0;
    unsigned VAR_3 = ((VAR_2 >> 15) & 1);
    unsigned VAR_4 = ((VAR_2 >> 10) & 0x1f);
    unsigned VAR_5 = ((VAR_2 & 0x3ff) << 13);

    if (VAR_4 == 0x1f) {
        VAR_5 = (VAR_5 ? (VAR_3 = 0, 0x7fffff) : 0);
        VAR_4 = 0xff;
    } else if (!VAR_4) {
        if (VAR_5) {
            unsigned int VAR_6;
            VAR_4 = 0x71;
            do {
                VAR_6 = (VAR_5 & 0x400000);
                VAR_5 <<= 1;
                --VAR_4;
            } while (!VAR_6);
            VAR_5 &= 0x7fffff;
        }
    } else {
        VAR_4 += 0x70;
    }

    *(unsigned*)VAR_1 = ((VAR_3 << 31) | (VAR_4 << 23) | VAR_5);
}
