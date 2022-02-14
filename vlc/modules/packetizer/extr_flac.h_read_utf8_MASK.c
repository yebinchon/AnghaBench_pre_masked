
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;


 int VAR_0 ;

__attribute__((used)) static inline int64_t FUNC_0(const uint8_t *VAR_1, int *VAR_2)
{


    int64_t VAR_3 = 0;
    unsigned VAR_4;

    if (!(VAR_1[0] & 0x80)) {
        VAR_3 = VAR_1[0];
        VAR_4 = 0;
    } else if (VAR_1[0] & 0xC0 && !(VAR_1[0] & 0x20)) {
        VAR_3 = VAR_1[0] & 0x1F;
        VAR_4 = 1;
    } else if (VAR_1[0] & 0xE0 && !(VAR_1[0] & 0x10)) {
        VAR_3 = VAR_1[0] & 0x0F;
        VAR_4 = 2;
    } else if (VAR_1[0] & 0xF0 && !(VAR_1[0] & 0x08)) {
        VAR_3 = VAR_1[0] & 0x07;
        VAR_4 = 3;
    } else if (VAR_1[0] & 0xF8 && !(VAR_1[0] & 0x04)) {
        VAR_3 = VAR_1[0] & 0x03;
        VAR_4 = 4;
    } else if (VAR_1[0] & 0xFC && !(VAR_1[0] & 0x02)) {
        VAR_3 = VAR_1[0] & 0x01;
        VAR_4 = 5;
    } else if (VAR_1[0] & 0xFE && !(VAR_1[0] & 0x01)) {
        VAR_3 = 0;
        VAR_4 = 6;
    } else {
        return VAR_0;
    }

    for (unsigned VAR_5 = 1; VAR_5 <= VAR_4; VAR_5++) {
        if (!(VAR_1[VAR_5] & 0x80) || (VAR_1[VAR_5] & 0x40)) {
            return VAR_0;
        }
        VAR_3 <<= 6;
        VAR_3 |= (VAR_1[VAR_5] & 0x3F);
    }

    *VAR_2 = VAR_4;
    return VAR_3;
}
