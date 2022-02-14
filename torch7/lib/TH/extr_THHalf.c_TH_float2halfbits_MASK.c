
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(float* VAR_0, unsigned short* VAR_1)
{
    unsigned VAR_2 = *(unsigned*)VAR_0;
    unsigned VAR_3 = (VAR_2 & 0x7fffffff), VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    unsigned VAR_9, VAR_10, VAR_11;


    if (VAR_3 > 0x7f800000) {
      *VAR_1 = 0x7fffU;
      return ;
    }

    VAR_9 = ((VAR_2 >> 16) & 0x8000);


    if (VAR_3 > 0x477fefff) {
      *VAR_1 = VAR_9 | 0x7c00U;
      return;
    }
    if (VAR_3 < 0x33000001) {
      *VAR_1 = (VAR_9 | 0x0000);
      return;
    }

    VAR_10 = ((VAR_3 >> 23) & 0xff);
    VAR_11 = (VAR_3 & 0x7fffff);

    if (VAR_10 > 0x70) {
        VAR_5 = 13;
        VAR_10 -= 0x70;
    } else {
        VAR_5 = 0x7e - VAR_10;
        VAR_10 = 0;
        VAR_11 |= 0x800000;
    }
    VAR_6 = (1 << VAR_5);
    VAR_7 = (VAR_6 >> 1);
    VAR_8 = (VAR_6 - 1);


    VAR_4 = (VAR_11 & VAR_8);
    VAR_11 >>= VAR_5;
    if (VAR_4 > VAR_7 || (VAR_4 == VAR_7 && (VAR_11 & 0x1))) {
        ++VAR_11;
        if (!(VAR_11 & 0x3ff)) {
            ++VAR_10;
            VAR_11 = 0;
        }
    }

    *VAR_1 = (VAR_9 | (VAR_10 << 10) | VAR_11);
}
