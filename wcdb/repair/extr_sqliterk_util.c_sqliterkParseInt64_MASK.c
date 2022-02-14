
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int8_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(const unsigned char *VAR_2,
                       int VAR_3,
                       int VAR_4,
                       int64_t *VAR_5)
{
    if (!VAR_2 || !VAR_5)
        return VAR_0;

    const unsigned char *VAR_6 = VAR_2 + VAR_3;
    int64_t VAR_7;

    switch (VAR_4) {
        case 1:
            VAR_7 = (int8_t) VAR_6[0];
            break;
        case 2:
            VAR_7 = (((int8_t) VAR_6[0]) * 256) | VAR_6[1];
            break;
        case 3:
            VAR_7 = (((int8_t) VAR_6[0]) * 65536) | (VAR_6[1] << 8) | VAR_6[2];
            break;
        case 4:
            VAR_7 = (((int8_t) VAR_6[0]) * 16777216) | (VAR_6[1] << 16) | (VAR_6[2] << 8) |
                  VAR_6[3];
            break;
        case 6:
            VAR_7 = (((int8_t) VAR_6[0]) * 256) | VAR_6[1];
            VAR_7 *= ((int64_t) 1) << 32;
            VAR_7 +=
                (((uint32_t) VAR_6[2]) << 24) | (VAR_6[3] << 16) | (VAR_6[4] << 8) | VAR_6[5];
            break;
        case 8:
            VAR_7 = (((int8_t) VAR_6[0]) * 16777216) | (VAR_6[1] << 16) | (VAR_6[2] << 8) |
                  VAR_6[3];
            VAR_7 *= ((int64_t) 1) << 32;
            VAR_7 +=
                (((uint32_t) VAR_6[4]) << 24) | (VAR_6[5] << 16) | (VAR_6[6] << 8) | VAR_6[7];
            break;
        default:
            return VAR_0;
    }

    *VAR_5 = VAR_7;
    return VAR_1;
}
